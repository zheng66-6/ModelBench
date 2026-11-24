/*
 * timeSample.h - runtime distribution sampling and timing helpers.
 */

#ifndef __HD_TPORBE_H__
#define __HD_TPORBE_H__
#if defined(__arch_x86__) && defined(PMU_MONITOR)
#include "pmuSample.h"
#include "pmc/pmu.h"
#include "pmc/ops.h"
#include "pmc/regs.h"
#endif
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/*
 * Runtime distribution state for one subsystem/model.
 * The histogram is an array of `len_unit` buckets; a sample with `ticks`
 * TSC cycles lands in bucket (ticks >> tick_unit_shift).
 */
#define RTD_DEFAULT_LEN 64
struct runtimeDistribution_tag {
    const char * ss_name;                     // model subsystem name
    uint64_t max_ticks;                      // longest runtime in ticks
    uint64_t min_ticks;
    uint64_t avg_ticks;
    uint64_t ticks_total;
    int steps_total;
    int len_unit;                       // number of units
    int len_used;                       // number of units used
    unsigned int tick_unit_shift;       // how many ticks per unit count in exponential order
    int * unit_cnt;                     // unit data
    unsigned long long * samples;       // number of samples 
#if defined(__arch_x86__) && defined(PMU_MONITOR)
    pmuSample_t *ps;
#endif
};
typedef struct runtimeDistribution_tag runtimeDistribution_t;

#define RTDD_SSNAME(rtdd)       ((rtdd)->ss_name)
#define RTDD_MAX_TICKS(rtdd)    ((rtdd)->max_ticks)
#define RTDD_MIN_TICKS(rtdd)    ((rtdd)->min_ticks)
#define RTDD_AVG_TICKS(rtdd)    ((rtdd)->avg_ticks)
#define RTDD_STEPS_TOTAL(rtdd)  ((rtdd)->steps_total)
#define RTDD_TICKS_TOTAL(rtdd)  ((rtdd)->ticks_total)
#define RTDD_LEN_UNIT(rtdd)     ((rtdd)->len_unit)
#define RTDD_LEN_USED(rtdd)     ((rtdd)->len_used)
#define RTDD_TICK_SHIFT(rtdd)   ((rtdd)->tick_unit_shift)
#define RTDD_UNIT_CNT(rtdd,idx) ((rtdd)->unit_cnt[idx])
#define RTDD_SAMPLES(rtdd,idx)  ((rtdd)->samples[idx])

#define RTD_TICKS_PER_UNIT_SHIFT(rtdd)  RTDD_TICK_SHIFT(rtdd) 
#define RTD_TICKS_PER_UNIT(rtdd)        (1<<RTDD_TICK_SHIFT(rtdd))

runtimeDistribution_t * rtdRegister(const char *ss_name,
                                    int len, 
                                    unsigned int ns_per_unit,
                                    int cpuModelId,
				    int evtId,
				    int iterations);

runtimeDistribution_t * rtdDeepCopy(runtimeDistribution_t * rtdd);

size_t rtdPrint(runtimeDistribution_t *_rtdd, char *model_path);
size_t etPrint(runtimeDistribution_t *_rtdd);

int get_cpu_model_id(void);

int get_cpu_freq_mhz(void);

void busy_loop(int secs);

int lockMemory();

uint64_t get_ns();

static inline int runtimeDistributionSampleOnce(runtimeDistribution_t *rtdd,
        uint64_t sample_ticks, int step_id)
{
    int ret = 0;

    if (rtdd == NULL)
	  return -1;
    // update max runtime
    if (step_id > 20 && sample_ticks > RTDD_MAX_TICKS(rtdd))
        RTDD_MAX_TICKS(rtdd) = sample_ticks;
    // update min runtime
    if (step_id > 20 && sample_ticks < RTDD_MIN_TICKS(rtdd))
        RTDD_MIN_TICKS(rtdd) = sample_ticks;
    // update total steps and ticks
    RTDD_STEPS_TOTAL(rtdd) += 1;
    RTDD_TICKS_TOTAL(rtdd) += sample_ticks;
    if (RTDD_TICKS_TOTAL(rtdd) == 0 ) {
    	printf("RTDD_TICKS_TOTAL(rtdd) wrap around.\n");
	exit(EXIT_FAILURE);
    }
    #if defined(__arch_x86__) && defined(PMU_MONITOR)
    pmuSampleOnce(rtdd->ps, RTDD_LEN_USED(rtdd), step_id, sample_ticks);
    #endif

    return ret;
}

static inline uint64_t get_tsc(void)
{
    uint32_t lower, upper;
    asm volatile("rdtsc\n" : "=a"(lower), "=d"(upper));
    return lower | ((uint64_t)upper << 32);
}


#else

#endif


