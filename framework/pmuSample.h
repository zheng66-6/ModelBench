/*
 * pmuSample.h - sample X86 PMU (Performance Monitor Unit) events at each
 *               simulation step.
 */

#ifndef __PMU_SAMPLE_H__
#define __PMU_SAMPLE_H__

#if defined(__arch_x86__) && defined(PMU_MONITOR)
#include "pmc/pmu.h"

/* ====================================== */
#define TOP 5000
#define HEAD 20
typedef struct {
    uint64_t exec_ticks;
    uint64_t step;
    unsigned int values[7];
} AnomalyRec_t;

typedef struct {
    uint64_t exec_ticks;
    uint64_t step;
    unsigned int values[7];
} HeadStep_t;
/* ====================================== */
struct pmuSampleRec_tag {
    unsigned int event_id;
    unsigned int delta_max;
    unsigned int delta_min;
    unsigned int delta_steps;
    unsigned long delta_total;
};
typedef struct pmuSampleRec_tag pmuSampleRec_t;

/**

+---++---+    +---+  +---++---+    +---+    +---++---+    +---+ 
|id ||id |    |id |  |id ||id |    |id |    |id ||id |    |id | 
|max||max| .. |max|  |max||max| .. |max|    |max||max| .. |max| 
|min||min|    |min|  |min||min|    |min|    |min||min|    |min| 
|avg||avg|    |avg|  |avg||avg|    |avg|    |avg||avg|    |avg| 
+---++---+    +---+  +---++---+    +---+    +---++---+    +---+ 
                                        ...                     
| number of events|  |                 |    |                 | 
|    zone 0       |  |    zone 1       |    |    zone n       | 
+-----------------+  +-----------------+    +-----------------+ 
                                                                
|                       number of zones                       | 
+-------------------------------------------------------------+ 

*/
struct pmuSample_tag {
    pmu_t pmu;
    int cpu_model;
    int evtId;
    int top;
    int num_zones;
    int num_events;
    int heap_size;              /* number of valid entries in anosample[] */
    pmuSampleRec_t *samples;    /* num_zones * num_events records */
    AnomalyRec_t *anosample;    /* min-heap of the slowest `top` steps */
    HeadStep_t *heads;          /* first HEAD steps, in step order */
};
typedef struct pmuSample_tag pmuSample_t;


extern int pmuSampleInit(pmuSample_t *ps, int num_zones, int cpuModelId, int evtID, int top);

#define pmuSampleZone(ps, zone)                 \
        (((ps)->samples)+((ps)->num_events)*(zone))
#define pmuSampleZoneEvent(ps, zone, event)     \
        (((ps)->samples)+((ps)->num_events)*(zone)+(event))

extern void pmuSampleOnce(pmuSample_t *ps, int zone, uint64_t step, uint64_t ticks);
extern pmuSample_t * pmuSampleDeepCopy(pmuSample_t * origPs);
extern int pmuSampleSwapZones(pmuSample_t *ps, int zone1, int zone2);
extern void pmuSampleFini(pmuSample_t *ps);
extern const char *pmuSampleEventName(int event_id);
extern int pmuSampleEventId(int evtId);


#endif

#endif
