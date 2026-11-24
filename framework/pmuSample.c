/*
 * pmuSample.c - sample X86 PMU (Performance Monitor Unit) events at each
 *               simulation step.
 */
#include <stdlib.h>
#include <string.h>
#if defined(__arch_x86__) && defined(PMU_MONITOR)
	#include "pmuSample.h"
	#include "pmc/pmu.h"
	#if defined(CPU_SKYLAKE)
		#include "pmc/cpu/skylake_core.h"
	#elif defined(CPU_CASCADELAKEX)
		#include "pmc/cpu/cascadelakex_core.h"
	#elif defined(CPU_ALDERLAKE)
		#include "pmc/cpu/alderlake_gracemont_core.h"
	#endif

#define PMU_CPU_MODEL_START         85
#define CASCADELAKEX                85
#define CASCADELAKE_DESKTOP         158

#define ALDERLAKE         151
#define EVT_CODE(evt_id) pmc_event_list[evt_id].event_code
#define EVT_UMASK(evt_id) pmc_event_list[evt_id].umask
#define EVT_BDESC(evt_id) pmc_event_list[evt_id].brief_descrip
#define EVT_CMASK(evt_id) pmc_event_list[evt_id].cmask
#define EVT_INV(evt_id) pmc_event_list[evt_id].inv
#define EVT_EDGE(evt_id) pmc_event_list[evt_id].edge

#ifndef max
#define max(a,b)        ((a)>(b)?(a):(b))
#endif

#ifndef min
#define min(a,b)        ((a)>(b)?(b):(a))
#endif

static const char *fixed_events[3] = {
    "INST_RETIRED__ANY",
    "CPU_CLK_UNHALTED__THREAD",
    "CPU_CLK_UNHALTED__REF_TSC",
};

/*
 * Default programmable events (used when evt_id == -1).  The exact event names
 * differ between micro-architectures, so pick a set that exists in each table.
 */
#if defined(CPU_ALDERLAKE)
static int monitor_events[4] = {
    UOPS_ISSUED__ANY,
    UOPS_RETIRED__ALL,
    BR_INST_RETIRED__ALL_BRANCHES,
    BR_MISP_RETIRED__ALL_BRANCHES
};
#else
static int monitor_events[4] = {
    UOPS_ISSUED__ANY,
    IDQ_UOPS_NOT_DELIVERED__CORE,
    FP_ARITH_INST_RETIRED__SCALAR,
    UOPS_RETIRED__RETIRE_SLOTS
};
#endif

/*
 * Restore the min-heap property starting at `idx`.
 * The heap size is stored per pmuSample_t instance (ps->heap_size), so several
 * subsystems/models can be sampled independently without sharing state.
 */
void heapify_down(int idx, pmuSample_t *ps) {
    while (1) {
        int left = idx * 2 + 1;
        int right = idx * 2 + 2;
        int smallest = idx;
        if (left < ps->heap_size && ps->anosample[left].exec_ticks < \
                ps->anosample[smallest].exec_ticks) {
            smallest = left;
        }
        if (right < ps->heap_size && ps->anosample[right].exec_ticks < \
                ps->anosample[smallest].exec_ticks) {
            smallest = right;
        }
        if (smallest == idx) break;
        
        // swap
        AnomalyRec_t tmp = ps->anosample[idx];
        ps->anosample[idx] = ps->anosample[smallest];
        ps->anosample[smallest] = tmp;
        idx = smallest;
    }   
}

/*
 * Insert one step record into the "top slowest steps" min-heap.
 * While the heap is not full the record is appended and sifted up; once full,
 * a record only replaces the current minimum if it is slower.
 */
void push_top_record (pmuSample_t *ps, AnomalyRec_t *rec) {
    if (ps->heap_size < ps->top) {
        // heap isn't full
        ps->anosample[ps->heap_size] = *rec;
        int idx = ps->heap_size;
        while (idx > 0) {
            int parent = (idx - 1) / 2;
            if (ps->anosample[parent].exec_ticks <= \
                ps->anosample[idx].exec_ticks) {
                break;
            }   
            // swap with parent
            AnomalyRec_t tmp = ps->anosample[parent];
            ps->anosample[parent] = ps->anosample[idx];
            ps->anosample[idx] = tmp;
            idx = parent;
        }
        ps->heap_size++;
    } else {
        // heap is full
        if (rec->exec_ticks > ps->anosample[0].exec_ticks) {
            ps->anosample[0] = *rec;
            heapify_down(0, ps);
        }
    }
}


static const int list_pmu_cpu_num_events[][2] = {
    {CASCADELAKEX, 7},
    {CASCADELAKE_DESKTOP, 7},
    {ALDERLAKE, 7},
};


static int pmu_cpu_num_events(int cpu_model)
{
    int num_events = -1;
    
    for (int ii=0; 
        ii<(int)(sizeof(list_pmu_cpu_num_events)/sizeof(list_pmu_cpu_num_events[0])); 
        ++ii) {
        if ( list_pmu_cpu_num_events[ii][0] == cpu_model) {
            num_events = list_pmu_cpu_num_events[ii][1];
            break;
        }
    }
    
    return num_events;
}


int pmuSampleInit(pmuSample_t *ps, int num_zones, int cpuModelId, int evtId, int top)
{
    size_t nsamples;

    if (ps == NULL || num_zones <= 0 || top <= 0) {
        printf("Invalid arguments to pmuSampleInit (zones=%d, top=%d)\n",
                num_zones, top);
        return -1;
    }

    /* Keep the mutation state private to this instance. */
    ps->num_zones  = num_zones;
    ps->heap_size  = 0;
    ps->samples    = NULL;
    ps->anosample  = NULL;
    ps->heads      = NULL;

    if (cpuModelId != -1 && cpuModelId >= PMU_CPU_MODEL_START) {
        ps->cpu_model   = cpuModelId;
        ps->num_events  = pmu_cpu_num_events(cpuModelId);
        if (ps->num_events == -1) {
            printf("Failed to find number of events of the cpu model(%d)!\n", \
                    cpuModelId);
            goto abnormal_out;
        }
    } else {
        printf("Invalid cpuModelId(%d)\n", cpuModelId);
        goto abnormal_out;
    }

    ps->evtId = evtId;
    ps->top = top;

    nsamples = (size_t)ps->num_zones * (size_t)ps->num_events;
    ps->samples = (pmuSampleRec_t *)malloc(nsamples * sizeof(pmuSampleRec_t));
    if (ps->samples == NULL) {
        printf("Fail to malloc %zu PMU sample records!\n", nsamples);
        goto abnormal_out;
    }
    memset(ps->samples, 0, nsamples * sizeof(pmuSampleRec_t));

    ps->anosample = (AnomalyRec_t *)malloc((size_t)top * sizeof(AnomalyRec_t));
    if (ps->anosample == NULL) {
        printf("Failed to malloc for ps->anosample!\n");
        goto abnormal_out;
    }
    for (int i=0; i<top; i++) {
        ps->anosample[i].exec_ticks = 1;
        ps->anosample[i].step = 0;
        memset(ps->anosample[i].values, 0, sizeof(ps->anosample[i].values));
    }

    ps->heads = (HeadStep_t *)malloc(HEAD * sizeof(HeadStep_t));
    if (ps->heads == NULL) {
        printf("Failed to malloc for ps->heads.\n");
        goto abnormal_out;
    }
    for (int i=0; i<HEAD; i++) {
        ps->heads[i].exec_ticks = 1;
        ps->heads[i].step = 0;
        memset(ps->heads[i].values, 0, sizeof(ps->heads[i].values));
    }
    for (size_t ii=0; ii<nsamples; ++ii) {
        ps->samples[ii].delta_max = 0;
        ps->samples[ii].delta_min = -1;    /* unsigned "unset" sentinel */
    }

    pmu_init(&(ps->pmu));
    if (evtId != -1) {
    	for (int i=0; i<4; i++) {
    	    monitor_events[i] = evtId + i;
    	}
	printf("Perf Event(%d) Config: OK!\n", evtId);
    }
    for (int i=0; i<4; i++) {
    	pmu_set_pc(&(ps->pmu), i, EVT_CODE(monitor_events[i]), EVT_UMASK(monitor_events[i]),
                EVT_CMASK(monitor_events[i]), EVT_INV(monitor_events[i]),
                EVT_EDGE(monitor_events[i]));
    }
    pmu_start(&(ps->pmu));
    
    return 0;
    
abnormal_out:
    /* Release anything allocated before the failure. */
    pmuSampleFini(ps);
    return -1;
}


#define pmuSampleZone(ps, zone)                 \
        (((ps)->samples)+((ps)->num_events)*(zone))
#define pmuSampleZoneEvent(ps, zone, event)     \
        (((ps)->samples)+((ps)->num_events)*(zone)+(event))

void pmuSampleOnce(pmuSample_t *ps, int zone, uint64_t step, uint64_t ticks)
{
    AnomalyRec_t rec;
    int n_events;

    if (ps == NULL || ps->samples == NULL || ps->anosample == NULL) {
        return;
    }
    if (zone < 0 || zone >= ps->num_zones) {
        return;
    }

    /* values[] in the record has room for 7 events (3 fixed + 4 programmable). */
    n_events = ps->num_events < 7 ? ps->num_events : 7;

    memset(&rec, 0, sizeof(rec));
    rec.step = step;
    rec.exec_ticks = ticks;
    for (int event=0; event<n_events; ++event) {
        pmuSampleRec_t *pmu_rec = pmuSampleZoneEvent(ps, zone, event);
        if (event < 3) {
            pmu_rec->event_id = event;
        } else {
            pmu_rec->event_id = monitor_events[event - 3];
        }
        rec.values[event] = (ps->pmu).deltas[event];
        pmu_rec->delta_max  = max(pmu_rec->delta_max, (ps->pmu).deltas[event]);
        pmu_rec->delta_min  = min(pmu_rec->delta_min, (ps->pmu).deltas[event]);
        pmu_rec->delta_steps ++;
        pmu_rec->delta_total += (ps->pmu).deltas[event];
    }
    push_top_record(ps, &rec);
    
    if (step < HEAD) {
        ps->heads[step].exec_ticks = ticks;
        ps->heads[step].step = step;
        for (int event=0; event<n_events; event++) {
            ps->heads[step].values[event] = ps->pmu.deltas[event];
        }
    }
    
}


/*
 * Deep-copy a pmuSample_t.  rtdPrint() works on a copy so that printing does
 * not disturb the live counters of a still-running subsystem.
 */
pmuSample_t * pmuSampleDeepCopy(pmuSample_t * origPs)
{
    pmuSample_t * ret = NULL;
    
    if (origPs == NULL) {
        printf("Input argument origPs is NULL!");
        goto out;
    }
    
    ret = malloc(sizeof(pmuSample_t));
    if (ret == NULL) {
        printf("Fail to calloc memory(NULL)!\n");
        goto out;
    }
    memcpy(ret, origPs, sizeof(pmuSample_t));
    
    ret->evtId = origPs->evtId;
    ret->cpu_model = origPs->cpu_model;

    size_t sample_size = \
        ((origPs->num_zones)*(origPs->num_events)*sizeof(pmuSampleRec_t));
    ret->samples = (pmuSampleRec_t *) malloc(sample_size);
    if (ret->samples == NULL) {
        printf("Fail to calloc memory(NULL)!\n");
        free(ret);
        ret = NULL;
        goto out;
    }
    memcpy(ret->samples, origPs->samples, sample_size);
    ret->anosample = (AnomalyRec_t *)malloc((origPs->top)*sizeof(AnomalyRec_t));
    if (ret->anosample == NULL) {
        printf("Failed to malloc for ret->anosample.\n");
        free(ret->samples);
        free(ret);
        ret = NULL;
        goto out;
    }
    memcpy(ret->anosample, origPs->anosample, (origPs->top)*sizeof(AnomalyRec_t));
    
    ret->heads = (HeadStep_t *)malloc(HEAD * sizeof(HeadStep_t));
    if (ret->heads == NULL) {
        printf("Failed to malloc for ret->heads.\n");
        free(ret->samples);
        free(ret->anosample);
        free(ret);
        ret = NULL;
        goto out;
    }
    for (int i=0; i<HEAD; i++) {
        ret->heads[i].exec_ticks = origPs->heads[i].exec_ticks;
        ret->heads[i].step = origPs->heads[i].step;
        memcpy(ret->heads[i].values, origPs->heads[i].values, sizeof(origPs->heads[i].values));
    }

out:
    return ret;
}


int pmuSampleSwapZones(pmuSample_t *ps, int zone1, int zone2)
{
    if (ps == NULL) {
        printf("Input parameter 'ps' is NULL");
        goto abnormal_out;
    }
    
    if (ps->num_events <= 0) {
        printf("Invalid num_events(%d), must be positive", \
                ps->num_events);
        goto abnormal_out;
    }
    
    if (zone1 == zone2) {
        goto abnormal_out;
    }
    
    size_t zone_size = (ps->num_events)*sizeof(pmuSampleRec_t);
    
    if (zone1 >= ps->num_zones || zone2 >= ps->num_zones) {
    printf("Arguments zone1(%d) and zone2(%d) out of range\n",
            zone1, zone2);
        goto abnormal_out;
    }
    pmuSampleRec_t * swap_zone = (pmuSampleRec_t *)malloc(zone_size);
    if (swap_zone == NULL) {
        printf("Fail to alloc memory of size(%zu)", zone_size);
        goto abnormal_out;
    }
    
    pmuSampleRec_t *pzone1 = pmuSampleZone(ps,zone1);
    pmuSampleRec_t *pzone2 = pmuSampleZone(ps,zone2);
    memcpy(swap_zone, pzone1,  zone_size);
    memcpy(pzone1, pzone2, zone_size);
    memcpy(pzone2, swap_zone, zone_size);

    if (swap_zone) {
        free(swap_zone);
    }
    return 0;
    
abnormal_out:
    return -1;
}


/* Release all buffers owned by ps (safe to call on a partially initialised ps). */
void pmuSampleFini(pmuSample_t *ps)
{
    if (ps) {
        ps->heap_size = 0;
        if (ps->samples) {
            free(ps->samples);
            ps->samples = NULL;
        }
        if (ps->anosample) {
            free(ps->anosample);
            ps->anosample = NULL;
        }
        if (ps->heads) {
            free(ps->heads);
            ps->heads = NULL;
        }
    }
}

/*
 * Human-readable name of event slot [0..6]:
 *   0..2 -> the three fixed counters,
 *   3..6 -> the four programmable counters selected by evt_id.
 */
const char *pmuSampleEventName(int event_id)
{
    
    if (event_id < 3) {
        return fixed_events[event_id];
    } else {
        return pmc_event_list[monitor_events[event_id - 3]].event_name;
    }

}

/* Return the PMU event code configured in programmable slot [0..3]. */
int pmuSampleEventId(int evtId) {
    return monitor_events[evtId];	
}

#endif



