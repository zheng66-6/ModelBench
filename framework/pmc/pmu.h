/*
 * =====================================================================================
 *
 *       Filename:  pmu.h
 *
 *    Description:  X86-64 performance monitoring counter
 *
 *        Version:  1.0
 *        Created:  2024-05-23 09:00:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef __SIR_PMU_H__
#define __SIR_PMU_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <sched.h>
#include "./ops.h"
#include "./common.h"


#define IA32_FIXED_CTR_CTRL             0x38d
#define IA32_PERF_GLOBAL_STATUS         0x38e
#define IA32_PERF_GLOBAL_CTRL           0x38f
#define IA32_PERF_GLOBAL_STATUS_RESET   0x390

#define IA32_PERFEVTSEL0        0x186
#define IA32_PERFEVTSEL1        0x187
#define IA32_PERFEVTSEL2        0x188
#define IA32_PERFEVTSEL3        0x189
#define IA32_PERFEVTSEL4        0x18a
#define IA32_PERFEVTSEL5        0x18b
#define IA32_PERFEVTSEL6        0x18c
#define IA32_PERFEVTSEL7        0x18d

#define IA32_FIXED_CTR0         0x309
#define IA32_FIXED_CTR1         0x309
#define IA32_FIXED_CTR2         0x309

#define IA32_PMC0               0xc1
#define IA32_PMC1               0xc2
#define IA32_PMC2               0xc3
#define IA32_PMC3               0xc4
#define IA32_PMC4               0xc5
#define IA32_PMC5               0xc6
#define IA32_PMC6               0xc7
#define IA32_PMC7               0xc8




/*
 * State of the PMU counters programmed by this module.
 * Slot layout in values[]/deltas[]:
 *   0..2  -> fixed counters (INST_RETIRED, CPU_CLK_UNHALTED, REF_TSC)
 *   3..6  -> four programmable counters (see pmu_start)
 */
typedef struct pmu_tag_ {
    int cpuid;              // running on which core
    int num_fc;             // number of fixed counter
    int  num_pc;            // number of programmable counter
    uint64_t fc_conf;       // config. of fixed counter
    uint64_t pc_conf[8];    // config. of programmable counter
    uint64_t values[11];     // latest 4+8 counters' value
    uint64_t deltas[11];    // latest delta values 
    uint64_t tsc;          // latest tsc value
    uint64_t tsc_delta;
} pmu_t;


static inline void pmu_close(pmu_t *p)
{
    int ii;
    int addr;
    
    // turn off counters globally
    addr = IA32_PERF_GLOBAL_CTRL;
    msr_write64(p->cpuid, addr, 0);
    
    // reset fixed counters' values to 0.
    for (ii=0; ii<3; ++ii) {
        addr = IA32_FIXED_CTR0+ii;
        msr_write64(p->cpuid, addr, 0);
    }
    
    // turn off fixed counters
    addr = IA32_FIXED_CTR_CTRL;
    msr_write64(p->cpuid, addr, 0);

    // reset programmable counters' values to 0
    for (ii=0; ii<4; ++ii) {
        addr = IA32_PMC0+ii;
        msr_write64(p->cpuid, addr, 0);
    }
    
    // turn off programmable counters
    for (ii=0; ii<4; ++ii) {
        addr = IA32_PERFEVTSEL0+ii;
        msr_write64(p->cpuid, addr, 0);
    }
    
    // clear overflow bits
    msr_write64(p->cpuid, IA32_PERF_GLOBAL_STATUS_RESET, 0);
}


static int pmu_init(pmu_t *p)
{
    int addr;
    int cpuid = sched_getcpu(); // get number of cores sysconf(_SC_NPROCESSORS_ONLN);
    
#if SIR_DEBUG
    printf("pmu_init : current cpuid is %d.\n", cpuid);
#endif
    p->cpuid    = cpuid;
    p->fc_conf  = 0x222;
    p->pc_conf[0]   = 0x414f2e;     // LONGEST_LAT_CACHE.REFERENCE
    p->pc_conf[1]   = 0x41412e;     // LONGEST_LAT_CACHE.MISS
    p->pc_conf[2]   = 0x4100c4;     // BR_INST_RETIRED.ALL_BRANCHES_PS
    p->pc_conf[3]   = 0x4100c5;     // BR_INST_RETIRED.COND_NTAKEN
    for (int ii=4; ii<8; ++ii)
        p->pc_conf[ii] = 0;
    
    memset(p->values, 0, 11*sizeof(uint64_t));
    memset(p->deltas, 0, 11*sizeof(uint64_t));
    
    // turn off counters.
    pmu_close(p);

    return 0;
}


static inline void pmu_set_pc(pmu_t *p, int idx, int evt, int umask, int cmask, int inv, int edge)
{
    p->pc_conf[idx] = (0x41 << 16) | ((cmask & 0xff) << 24) | ((inv & 0x1) << 23) | ((edge & 0x1) << 18) | ((umask & 0xff) << 8) | (evt & 0xff); 
    printf("programmable counter %d : %lx\n", idx, p->pc_conf[idx]);
#if SIR_DEBUG
#endif
}


static inline void pmu_record(pmu_t *p)
{
    uint64_t _tsc;
    uint64_t val;
    uint32_t addr;
    
    __asm__ __volatile__("mfence;lfence");
    rdtsc(_tsc);
    // get fixed counters' values
    for (int ii=0; ii<3; ++ii) {
        addr = (1<<30)+ii;
        val = rdpmc(addr);
        p->deltas[ii] = val - p->values[ii];
        p->values[ii] = val;
    }
    
    // get programmable counters' values
    for (int ii=0; ii<4; ++ii) {
        addr = ii;
        val = rdpmc(addr);
        p->deltas[ii+3] = val - p->values[ii+3];
        p->values[ii+3] = val;
    }
    
    p->tsc_delta    = _tsc - p->tsc;
    p->tsc          = _tsc;
}


static inline int pmu_start(pmu_t * p)
{
    int ret;
    uint64_t fconf = 0x222;
    int ii, addr;
    
    // enable counters globally.
    uint64_t value = 0x700000000;
    for (ii=0; ii<4; ++ii) {
        value |= (1<<ii);
    }
    addr = IA32_PERF_GLOBAL_CTRL;
    ret = msr_write64(p->cpuid, addr, value);
    if (ret != 8 ) {
        return ret;
    }
    
    // enable fixed counters.
    addr = IA32_FIXED_CTR_CTRL;
    ret = msr_write64(p->cpuid, addr, p->fc_conf);
    if (ret != 8) {
        return ret;
    }
    
    // enable programmable counters
    for (int ii=0; ii<4; ++ii) {
        int addr = IA32_PERFEVTSEL0 + ii;
        ret = msr_write64(p->cpuid, addr, p->pc_conf[ii]);
        if (ret != 8)
            return ret;
    }
    
    pmu_record(p);
    return 0;
}




#endif


