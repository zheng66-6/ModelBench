/*
 * timeSample.c - runtime distribution sampling and timing helpers.
 */
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <sys/mman.h>
#include "timeSample.h"
#include "pmuSample.h"



/**
 * --------------------------------------------------------------------------------- 
 * @brief runtime distribution functions
 * ---------------------------------------------------------------------------------
 *
 * record time cost distribution for model calculation.
 *
 */

/* Minimum histogram resolution: 1 << 2 = 4 TSC ticks per distribution unit. */
unsigned long long _rtd_tickperunit_default_shift = 2;
runtimeDistribution_t * rtd_data[] = { \
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL        // each for a subsystem
};

#define rtdamount()     (sizeof(rtd_data)/sizeof(runtimeDistribution_t *))

#ifndef max
#define max(a,b)        ((a)>(b)?(a):(b))
#endif

#ifndef swap
#define swap(a,b)   ({typeof(a) _v; _v=a; a=b; b=_v;})
#endif

/**
 * Register a runtimeDistribution_t structure for a subsystem of msid
 * 
 * @param : width len. of the distribution, how many partitions.
 * @param : msid, model subsystem ID
 * @param : ns_per_unit, how may nanosecond of a partition.
 **/
runtimeDistribution_t * rtdRegister(const char * ss_name,
                                    int len, 
                                    unsigned int ns_per_unit,
                                    int cpuModelId,
				    int evtId,
				    int iterations)
{
    runtimeDistribution_t *rtdd = NULL;
    unsigned int tick_unit_shift;
    (void)cpuModelId;
    
    int cpuFreq = get_cpu_freq_mhz(); 
    unsigned int cycles_per_unit = (unsigned int)cpuFreq*ns_per_unit/1000;
    for (tick_unit_shift=1; tick_unit_shift<32; ++tick_unit_shift) {
        if ((1U<<tick_unit_shift) > cycles_per_unit) {
            break;
        }
    }

    // find a empty rtd_data, init it, and return to callee.
    for (size_t ii=0; ii<rtdamount(); ++ii) {
        if (rtd_data[ii] == NULL) {
            rtdd = (runtimeDistribution_t *)malloc(sizeof(runtimeDistribution_t));
            if (rtdd == NULL) {
                printf("Fail to allocate memory for rtd_data[%lu]\n", ii);
            } else {
                RTDD_SSNAME(rtdd)       = ss_name;
                RTDD_TICK_SHIFT(rtdd)   = max(tick_unit_shift, _rtd_tickperunit_default_shift);
                RTDD_LEN_UNIT(rtdd)     = len;
                RTDD_MAX_TICKS(rtdd)    = 0;
                RTDD_MIN_TICKS(rtdd)    = INT_MAX;
                RTDD_AVG_TICKS(rtdd)    = 0;
                RTDD_STEPS_TOTAL(rtdd)  = 0;
                RTDD_TICKS_TOTAL(rtdd)  = 0;
                rtdd->unit_cnt = (int *)malloc(len*sizeof(int));
                memset(rtdd->unit_cnt, 0, len*sizeof(int));
                rtdd->samples  = (unsigned long long *)malloc(len*sizeof(unsigned long long));
                memset(rtdd->samples, 0, len*sizeof(unsigned long long));
                RTDD_LEN_USED(rtdd)     = 0;
#if defined(__arch_x86__) && defined(PMU_MONITOR)
                rtdd->ps = (pmuSample_t *)malloc(sizeof(pmuSample_t));
                pmuSampleInit(rtdd->ps, len, cpuModelId, evtId, iterations);
#endif
                rtd_data[ii] = rtdd;
                break;
            }
        }
    }

    if (rtdd == NULL) {
        printf("rtdd is NULL!\n");
    }
    return rtdd;
}


runtimeDistribution_t * rtdDeepCopy(runtimeDistribution_t * rtdd)
{
    size_t size;
    
    runtimeDistribution_t * newRtdd= malloc(sizeof(runtimeDistribution_t));
    if (newRtdd == NULL) {
        goto out;
    }
    
    memcpy(newRtdd, rtdd, sizeof(runtimeDistribution_t));
    if (RTDD_LEN_UNIT(rtdd) != 0) {
        newRtdd->unit_cnt = malloc(RTDD_LEN_UNIT(rtdd)*sizeof(int));
        if (newRtdd->unit_cnt == NULL) {
            free(newRtdd);
            goto out;
        }
        size = RTDD_LEN_UNIT(rtdd)*sizeof(int);
        memcpy(newRtdd->unit_cnt, rtdd->unit_cnt, size);
        size = RTDD_LEN_UNIT(rtdd)*sizeof(unsigned long long);
        newRtdd->samples = malloc(size);
        if (newRtdd->samples == NULL) {
            free(newRtdd->unit_cnt);
            free(newRtdd);
            goto out;
        }
        size = RTDD_LEN_UNIT(rtdd)*(sizeof(unsigned long long));
        memcpy(newRtdd->samples, rtdd->samples, size);
#if defined(__arch_x86__) && defined(PMU_MONITOR)
        newRtdd->ps = pmuSampleDeepCopy(rtdd->ps);
        if (newRtdd->ps == NULL) {
            free(newRtdd->unit_cnt);
            free(newRtdd->samples);
            free(newRtdd);
            goto out;
        }
#endif
    }

out:
    return newRtdd;
}

#if defined(__arch_x86__) && defined(PMU_MONITOR)
static int compare_by_step (const void *a, const void *b) {
    const AnomalyRec_t *rec_a = (const AnomalyRec_t *)a;
    const AnomalyRec_t *rec_b = (const AnomalyRec_t *)b;
    
    if (rec_a->step < rec_b->step) return -1;
    if (rec_a->step > rec_b->step) return 1;
    return 0;

}
static int compare_by_tick (const void *a, const void *b) {
    const AnomalyRec_t *rec_a = (const AnomalyRec_t *)a;
    const AnomalyRec_t *rec_b = (const AnomalyRec_t *)b;
    
    if (rec_a->exec_ticks > rec_b->exec_ticks) return -1;
    if (rec_a->exec_ticks < rec_b->exec_ticks) return 1;
    return 0;

}
#endif

/* Print worst/mean case execution time in nanoseconds. */
size_t etPrint(runtimeDistribution_t *_rtdd)
{
    int cpuFreq = get_cpu_freq_mhz(); 
    runtimeDistribution_t *rtdd = rtdDeepCopy(_rtdd);
    if (rtdd == NULL) {
        printf( "Fail to deep copy runtimeDistribution instance!");
        exit(EXIT_FAILURE);
    }
    printf("\nWCET: %8lu ns", 1000*RTDD_MAX_TICKS(rtdd)/cpuFreq);
    printf("\nACET: %8lu ns", 1000*RTDD_TICKS_TOTAL(rtdd)/(RTDD_STEPS_TOTAL(rtdd)*cpuFreq));
    /* rtdDeepCopy() allocated private buffers; release them. */
    if (RTDD_LEN_UNIT(rtdd) != 0) {
        free(rtdd->unit_cnt);
        free(rtdd->samples);
#if defined(__arch_x86__) && defined(PMU_MONITOR)
        if (rtdd->ps) {
            pmuSampleFini(rtdd->ps);
            free(rtdd->ps);
        }
#endif
    }
    free(rtdd);
    return 0;
}


size_t rtdPrint(runtimeDistribution_t *_rtdd, char *save_path)
{
    unsigned long long max_sample_cnt = 0;
    int cpuFreq = get_cpu_freq_mhz(); 
    runtimeDistribution_t *rtdd = rtdDeepCopy(_rtdd);
    if (rtdd == NULL) {
        printf( "Fail to deep copy runtimeDistribution instance!");
        exit(EXIT_FAILURE);
    }
    // Set log file 
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);
    char timestamp[30];
    if (strftime(timestamp, sizeof(timestamp), "%Y-%m-%d-%H%M", local_time) == 0) {
      printf("Fail to format timestamp.\n");
      exit(EXIT_FAILURE);
    }
#if defined(__arch_x86__) && defined(PMU_MONITOR)
    FILE *fp = NULL;
    char filename[300];
    snprintf(filename, sizeof(filename), "%s/%d-%s-%d.log", save_path, rtdd->ps->cpu_model, RTDD_SSNAME(rtdd), rtdd->ps->evtId);
    fp = fopen(filename, "w");
    if (!fp) {
   	printf("Fail to fopen the log file.\n");
	exit(EXIT_FAILURE);
    }
#endif
    
    for (int ii=0; ii<RTDD_LEN_USED(rtdd); ++ii) {
        max_sample_cnt = max(RTDD_SAMPLES(rtdd,ii), max_sample_cnt);
    }
    
    // bubble sort
    for (int ii=0; ii<RTDD_LEN_USED(rtdd); ++ii) {
        for (int jj=ii+1; jj<RTDD_LEN_USED(rtdd); ++jj) {
            if (RTDD_UNIT_CNT(rtdd,ii) > RTDD_UNIT_CNT(rtdd,jj)) {
                // swap values here, not pointers
                swap(RTDD_UNIT_CNT(rtdd,ii), RTDD_UNIT_CNT(rtdd,jj));
                swap(RTDD_SAMPLES(rtdd,ii), RTDD_SAMPLES(rtdd,jj));
#if defined(__arch_x86__) && defined(PMU_MONITOR)
                int ret = pmuSampleSwapZones(rtdd->ps, ii, jj);
                if (ret == -1) {
                    printf("Fail to swap zone%d, and zone%d\n", ii, jj);
                }
#endif
            }
        }
    }
#if defined(__arch_x86__) && defined(PMU_MONITOR)
    AnomalyRec_t *tmp = rtdd->ps->anosample;
#endif
   
#if defined(__arch_x86__) && defined(PMU_MONITOR)
    fprintf(fp, "\n********* %s(%s) *********\n", rtdd->ss_name, timestamp);
    for (int ii=0; ii<RTDD_LEN_USED(rtdd); ++ii) {
        double unitTimsInUs = (double)RTDD_UNIT_CNT(rtdd,ii) * RTD_TICKS_PER_UNIT(rtdd) / cpuFreq;
        fprintf(fp, "%.3lf : %llu\n", unitTimsInUs, RTDD_SAMPLES(rtdd,ii));
    }
    fprintf(fp, "\nCPU_Model_ID: %d\n" , rtdd->ps->cpu_model);
    fprintf(fp, "\nPerf_Event_ID: Evt_%d | Evt_%d | Evt_%d | Evt_%d\n", pmuSampleEventId(0), pmuSampleEventId(1), pmuSampleEventId(2), pmuSampleEventId(3));
    fprintf(fp, "\nPerf_Event_Name: %s | %s | %s | %s\n", pmuSampleEventName(3), pmuSampleEventName(4), pmuSampleEventName(5), pmuSampleEventName(6));

    fprintf(fp, "\nMAX_TICKS: %lu, TICKS_TOTAL: %ld, STEPS_TOTAL: %d, CPU_FREQ: %d\n", \
		    RTDD_MAX_TICKS(rtdd),RTDD_TICKS_TOTAL(rtdd),RTDD_STEPS_TOTAL(rtdd), cpuFreq);
    fprintf(fp, "\nTime_info(ns): Max: %8lu Avg: %8lu Min: %8lu\n" , \
		    1000*RTDD_MAX_TICKS(rtdd)/cpuFreq, \
		    1000*RTDD_TICKS_TOTAL(rtdd)/(RTDD_STEPS_TOTAL(rtdd)*cpuFreq), \
		    1000*RTDD_MIN_TICKS(rtdd)/cpuFreq);
    fprintf(fp, "\n");

    qsort(tmp, rtdd->ps->top, sizeof(AnomalyRec_t), compare_by_tick);

    fprintf(fp, "\nTIME(ns) | STEP | %s | %s | %s | %s | %s | %s | %s\n", pmuSampleEventName(0), pmuSampleEventName(1), \
            pmuSampleEventName(2), pmuSampleEventName(3), pmuSampleEventName(4), pmuSampleEventName(5), pmuSampleEventName(6));
    fprintf(fp, "============== Top-%d Start  ==================\n", HEAD);
    for (int i=0; i<HEAD; i++) {
        fprintf(fp, "%8ld %9ld %12u %12u %9u %12u %12u %12u %12u\n",tmp[i].exec_ticks*1000/cpuFreq, tmp[i].step, \
                tmp[i].values[0], tmp[i].values[1], tmp[i].values[2], tmp[i].values[3], tmp[i].values[4], tmp[i].values[5], tmp[i].values[6]);
    }
    fprintf(fp, "============== Top-%d End  ==================\n", HEAD);

    qsort(tmp, rtdd->ps->top, sizeof(AnomalyRec_t), compare_by_step);

    fprintf(fp, "\nTIME(ns) | STEP | %s | %s | %s | %s | %s | %s | %s\n", pmuSampleEventName(0), pmuSampleEventName(1), \
            pmuSampleEventName(2), pmuSampleEventName(3), pmuSampleEventName(4), pmuSampleEventName(5), pmuSampleEventName(6));
    fprintf(fp, "============== Head-%d Start  ==================\n", rtdd->ps->top);
    for (int i=0; i<rtdd->ps->top; i++) {
        fprintf(fp, "%8ld %9ld %12u %12u %9u %12u %12u %12u %12u\n",tmp[i].exec_ticks*1000/cpuFreq, tmp[i].step, \
                tmp[i].values[0], tmp[i].values[1], tmp[i].values[2], tmp[i].values[3], tmp[i].values[4], tmp[i].values[5], tmp[i].values[6]);
    }
    fprintf(fp, "============== Head-%d End  ==================\n", rtdd->ps->top);
#endif    
    /*
     * rtdPrint() operates on a deep copy created above, so all of its private
     * buffers (unit_cnt, samples, and the PMU copy) must be released here.
     */
    if (rtdd != NULL) {
        if (RTDD_LEN_UNIT(rtdd) != 0) {
            free(rtdd->unit_cnt);
            free(rtdd->samples);
#if defined(__arch_x86__) && defined(PMU_MONITOR)
            if (rtdd->ps) {
                pmuSampleFini(rtdd->ps);
                free(rtdd->ps);
            }
#endif
        }
        free(rtdd);
    }
    return 0;
}

/*
 * Read the x86 "model" field from /proc/cpuinfo (not "model name").
 * The value selects the PMU event table in pmuSample.c (85=CascadeLakeX,
 * 151=AlderLake, ...). Returns -1 if the field cannot be found.
 */
int get_cpu_model_id(void) {
    FILE *fp = fopen("/proc/cpuinfo", "r");
    if (!fp) {
	printf("Fail to fopen cpuinfo.\n");
	exit(EXIT_FAILURE);
    }
    char line[256];
    int model_id = -1;

    while (fgets(line, sizeof(line), fp)) {
	if (strncmp(line, "model", 5) == 0 && \
	    strncmp(line, "model name", 10) != 0) {
	    char *colon = strchr(line, ':');
	    if (colon) {
                model_id = atoi(colon + 1);
		break;
	    }
	}
    }
    fclose(fp);
    return model_id;
}

/*
 * Read a representative "cpu MHz" value from /proc/cpuinfo (third entry).
 * Frequency scaling/turbo must be disabled (see rt_config.sh) for this value
 * to remain stable during a measurement run.
 */
int get_cpu_freq_mhz(void) {
    FILE *fp = fopen("/proc/cpuinfo", "r");
    if (fp == NULL) {
    	printf("Failed to fopen cpuinfo.\n");
	exit(EXIT_FAILURE);
    }
    
    char line[256];
    int cpu_freq = -1;
    int count = 0;

    while(fgets(line, sizeof(line), fp)) {
        if (strncmp(line, "cpu MHz", 7) == 0) {
            count++;
            if (count == 3) {
                char *colon = strchr(line, ':');
                if (colon) {
                    cpu_freq = atoi(colon + 1);
                    break;
                }
            }
        }
    }

    fclose(fp);
    return cpu_freq;
}

/* Spin for approximately `secs` seconds using the TSC (no syscalls). */
void busy_loop(int secs) {
    uint64_t start, last, elapsed, wait;
    int cpuFreq = get_cpu_freq_mhz();
    wait = (uint64_t)cpuFreq * 1000000ULL * (uint64_t)secs;
    start = get_tsc();
    do {
        last = get_tsc();
        elapsed = last - start;
    }while(elapsed < wait);
}

/* Pin all current and future pages in RAM (requires CAP_IPC_LOCK / root). */
int lockMemory() {
    int ret = 0;

    if(mlockall(MCL_CURRENT|MCL_FUTURE) == -1) {
        printf("mlockall failed!\n");
        ret = -1;
    }

    return ret;
}

/*
 * Convert the current TSC value to nanoseconds.
 * TSC ticks are CPU cycles: cycles / (MHz) = microseconds, so multiply by
 * 1000 to obtain nanoseconds.
 */
uint64_t get_ns()
{
    uint64_t tsc = 0;
    int cpuFreq = get_cpu_freq_mhz();
    tsc = get_tsc();
    return (tsc / (uint64_t)cpuFreq) * 1000ULL;
}

