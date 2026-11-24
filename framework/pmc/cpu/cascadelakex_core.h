
/*
 *  auto-generated header file that structurely stores the events of intel CPUs.
 *  Author      : hdrt
 *  File name   : cascadelakex_core.h
 *  Date        : 2026-04-27 16:07:56
 *  Source json : https://raw.githubusercontent.com/intel/perfmon/refs/heads/main/CLX/events/cascadelakex_core.json
 */

#ifndef __SIR__cascadelakex_core_h__
#define __SIR__cascadelakex_core_h__

// event index
#define INST_RETIRED__ANY                          0 //Instructions retired from execution.
#define CPU_CLK_UNHALTED__THREAD                   1 //Core cycles when the thread is not in halt state
#define CPU_CLK_UNHALTED__THREAD_ANY               2 //Core cycles when at least one thread on the physical core is not in halt state.
#define CPU_CLK_UNHALTED__REF_TSC                  3 //Reference cycles when the core is not in halt state.
#define LD_BLOCKS__STORE_FORWARD                   4 //Loads blocked due to overlapping with a preceding store that cannot be forwarded.
#define LD_BLOCKS__NO_SR                           5 //The number of times that split load operations are temporarily blocked because all resources for handling the split accesses are in use
#define LD_BLOCKS_PARTIAL__ADDRESS_ALIAS           6 //False dependencies in MOB due to partial compare on address.
#define DTLB_LOAD_MISSES__MISS_CAUSES_A_WALK       7 //Load misses in all DTLB levels that cause page walks
#define DTLB_LOAD_MISSES__WALK_COMPLETED_4K        8 //Page walk completed due to a demand data load to a 4K page
#define DTLB_LOAD_MISSES__WALK_COMPLETED_2M_4M     9 //Page walk completed due to a demand data load to a 2M/4M page
#define DTLB_LOAD_MISSES__WALK_COMPLETED_1G       10 //Page walk completed due to a demand data load to a 1G page
#define DTLB_LOAD_MISSES__WALK_COMPLETED          11 //Load miss in all TLB levels causes a page walk that completes. (All page sizes)
#define DTLB_LOAD_MISSES__WALK_PENDING            12 //Counts 1 per cycle for each PMH that is busy with a page walk for a load. EPT page walk duration are excluded in Skylake.
#define DTLB_LOAD_MISSES__WALK_ACTIVE             13 //Cycles when at least one PMH is busy with a page walk for a load. EPT page walk duration are excluded in Skylake.
#define DTLB_LOAD_MISSES__STLB_HIT                14 //Loads that miss the DTLB and hit the STLB.
#define INT_MISC__RECOVERY_CYCLES                 15 //Core cycles the allocator was stalled due to recovery from earlier clear event for this thread (e.g. misprediction or memory nuke)
#define INT_MISC__RECOVERY_CYCLES_ANY             16 //Core cycles the allocator was stalled due to recovery from earlier clear event for any thread running on the physical core (e.g. misprediction or memory nuke).
#define INT_MISC__CLEARS_COUNT                    17 //Clears speculative count
#define INT_MISC__CLEAR_RESTEER_CYCLES            18 //Cycles the issue-stage is waiting for front-end to fetch from resteered path following branch misprediction or machine clear events.
#define UOPS_ISSUED__ANY                          19 //Uops that Resource Allocation Table (RAT) issues to Reservation Station (RS)
#define UOPS_ISSUED__STALL_CYCLES                 20 //Cycles when Resource Allocation Table (RAT) does not issue Uops to Reservation Station (RS) for the thread
#define UOPS_ISSUED__VECTOR_WIDTH_MISMATCH        21 //Uops inserted at issue-stage in order to preserve upper bits of vector registers.
#define UOPS_ISSUED__SLOW_LEA                     22 //Number of slow LEA uops being allocated. A uop is generally considered SlowLea if it has 3 sources (e.g. 2 sources + immediate) regardless if as a result of LEA instruction or not.
#define ARITH__DIVIDER_ACTIVE                     23 //Cycles when divide unit is busy executing divide or square root operations. Accounts for integer and floating-point operations.
#define L2_RQSTS__DEMAND_DATA_RD_MISS             24 //Demand Data Read miss L2, no rejects
#define L2_RQSTS__RFO_MISS                        25 //RFO requests that miss L2 cache
#define L2_RQSTS__CODE_RD_MISS                    26 //L2 cache misses when fetching instructions
#define L2_RQSTS__ALL_DEMAND_MISS                 27 //Demand requests that miss L2 cache
#define L2_RQSTS__PF_MISS                         28 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that miss L2 cache
#define L2_RQSTS__MISS                            29 //All requests that miss L2 cache
#define L2_RQSTS__DEMAND_DATA_RD_HIT              30 //Demand Data Read requests that hit L2 cache
#define L2_RQSTS__RFO_HIT                         31 //RFO requests that hit L2 cache
#define L2_RQSTS__CODE_RD_HIT                     32 //L2 cache hits when fetching instructions, code reads.
#define L2_RQSTS__PF_HIT                          33 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that hit L2 cache
#define L2_RQSTS__ALL_DEMAND_DATA_RD              34 //Demand Data Read requests
#define L2_RQSTS__ALL_RFO                         35 //RFO requests to L2 cache
#define L2_RQSTS__ALL_CODE_RD                     36 //L2 code requests
#define L2_RQSTS__ALL_DEMAND_REFERENCES           37 //Demand requests to L2 cache
#define L2_RQSTS__ALL_PF                          38 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches
#define L2_RQSTS__REFERENCES                      39 //All L2 requests
#define CORE_POWER__LVL0_TURBO_LICENSE            40 //Core cycles where the core was running in a manner where Turbo may be clipped to the Non-AVX turbo schedule.
#define CORE_POWER__LVL1_TURBO_LICENSE            41 //Core cycles where the core was running in a manner where Turbo may be clipped to the AVX2 turbo schedule.
#define CORE_POWER__LVL2_TURBO_LICENSE            42 //Core cycles where the core was running in a manner where Turbo may be clipped to the AVX512 turbo schedule.
#define CORE_POWER__THROTTLE                      43 //Core cycles the core was throttled due to a pending power level request.
#define LONGEST_LAT_CACHE__MISS                   44 //Core-originated cacheable demand requests missed L3
#define LONGEST_LAT_CACHE__REFERENCE              45 //Core-originated cacheable demand requests that refer to L3
#define SW_PREFETCH_ACCESS__NTA                   46 //Number of PREFETCHNTA instructions executed.
#define SW_PREFETCH_ACCESS__T0                    47 //Number of PREFETCHT0 instructions executed.
#define SW_PREFETCH_ACCESS__T1_T2                 48 //Number of PREFETCHT1 or PREFETCHT2 instructions executed.
#define SW_PREFETCH_ACCESS__PREFETCHW             49 //Number of PREFETCHW instructions executed.
#define SW_PREFETCH_ACCESS__ANY                   50 //Counts the number of PREFETCHNTA, PREFETCHW, PREFETCHT0, PREFETCHT1 or PREFETCHT2 instructions executed.
#define CPU_CLK_UNHALTED__THREAD_P                51 //Thread cycles when thread is not in halt state
#define CPU_CLK_UNHALTED__THREAD_P_ANY            52 //Core cycles when at least one thread on the physical core is not in halt state.
#define CPU_CLK_UNHALTED__RING0_TRANS             53 //Counts when there is a transition from ring 1, 2 or 3 to ring 0.
#define CPU_CLK_THREAD_UNHALTED__REF_XCLK         54 //Core crystal clock cycles when the thread is unhalted.
#define CPU_CLK_THREAD_UNHALTED__REF_XCLK_ANY     55 //Core crystal clock cycles when at least one thread on the physical core is unhalted.
#define CPU_CLK_UNHALTED__REF_XCLK                56 //Core crystal clock cycles when the thread is unhalted.
#define CPU_CLK_UNHALTED__REF_XCLK_ANY            57 //Core crystal clock cycles when at least one thread on the physical core is unhalted.
#define CPU_CLK_THREAD_UNHALTED__ONE_THREAD_ACTIVE  58 //Core crystal clock cycles when this thread is unhalted and the other thread is halted.
#define CPU_CLK_UNHALTED__ONE_THREAD_ACTIVE       59 //Core crystal clock cycles when this thread is unhalted and the other thread is halted.
#define L1D_PEND_MISS__PENDING                    60 //L1D miss outstandings duration in cycles
#define L1D_PEND_MISS__PENDING_CYCLES             61 //Cycles with L1D load Misses outstanding.
#define L1D_PEND_MISS__PENDING_CYCLES_ANY         62 //Cycles with L1D load Misses outstanding from any thread on physical core.
#define L1D_PEND_MISS__FB_FULL                    63 //Number of times a request needed a FB entry but there was no entry available for it. That is the FB unavailability was dominant reason for blocking the request. A request includes cacheable/uncacheable demands that is load, store or SW prefetch.
#define DTLB_STORE_MISSES__MISS_CAUSES_A_WALK     64 //Store misses in all DTLB levels that cause page walks
#define DTLB_STORE_MISSES__WALK_COMPLETED_4K      65 //Page walk completed due to a demand data store to a 4K page
#define DTLB_STORE_MISSES__WALK_COMPLETED_2M_4M   66 //Page walk completed due to a demand data store to a 2M/4M page
#define DTLB_STORE_MISSES__WALK_COMPLETED_1G      67 //Page walk completed due to a demand data store to a 1G page
#define DTLB_STORE_MISSES__WALK_COMPLETED         68 //Store misses in all TLB levels causes a page walk that completes. (All page sizes)
#define DTLB_STORE_MISSES__WALK_PENDING           69 //Counts 1 per cycle for each PMH that is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.
#define DTLB_STORE_MISSES__WALK_ACTIVE            70 //Cycles when at least one PMH is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.
#define DTLB_STORE_MISSES__STLB_HIT               71 //Stores that miss the DTLB and hit the STLB.
#define LOAD_HIT_PRE__SW_PF                       72 //Demand load dispatches that hit L1D fill buffer (FB) allocated for software prefetch.
#define EPT__WALK_PENDING                         73 //Counts 1 per cycle for each PMH that is busy with a EPT (Extended Page Table) walk for any request type.
#define L1D__REPLACEMENT                          74 //L1D data line replacements
#define TX_MEM__ABORT_CONFLICT                    75 //Number of times a transactional abort was signaled due to a data conflict on a transactionally accessed address
#define TX_MEM__ABORT_CAPACITY                    76 //Number of times a transactional abort was signaled due to a data capacity limitation for transactional reads or writes.
#define TX_MEM__ABORT_HLE_STORE_TO_ELIDED_LOCK    77 //Number of times a HLE transactional region aborted due to a non XRELEASE prefixed instruction writing to an elided lock in the elision buffer
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_NOT_EMPTY  78 //Number of times an HLE transactional execution aborted due to NoAllocatedElisionBuffer being non-zero.
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_MISMATCH  79 //Number of times an HLE transactional execution aborted due to XRELEASE lock not satisfying the address and value requirements in the elision buffer
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_UNSUPPORTED_ALIGNMENT  80 //Number of times an HLE transactional execution aborted due to an unsupported read alignment from the elision buffer.
#define TX_MEM__HLE_ELISION_BUFFER_FULL           81 //Number of times HLE lock could not be elided due to ElisionBufferAvailable being zero.
#define INST_DECODED__DECODERS                    82 //Instruction decoders utilized in a cycle
#define PARTIAL_RAT_STALLS__SCOREBOARD            83 //Cycles where the pipeline is stalled due to serializing operations.
#define TX_EXEC__MISC1                            84 //Counts the number of times a class of instructions that may cause a transactional abort was executed. Since this is the count of execution, it may not always cause a transactional abort.
#define TX_EXEC__MISC2                            85 //Counts the number of times a class of instructions (e.g., vzeroupper) that may cause a transactional abort was executed inside a transactional region
#define TX_EXEC__MISC3                            86 //Counts the number of times an instruction execution caused the transactional nest count supported to be exceeded
#define TX_EXEC__MISC4                            87 //Counts the number of times a XBEGIN instruction was executed inside an HLE transactional region.
#define TX_EXEC__MISC5                            88 //Counts the number of times an HLE XACQUIRE instruction was executed inside an RTM transactional region
#define RS_EVENTS__EMPTY_CYCLES                   89 //Cycles when Reservation Station (RS) is empty for the thread
#define RS_EVENTS__EMPTY_END                      90 //Counts end of periods where the Reservation Station (RS) was empty. Could be useful to precisely locate Frontend Latency Bound issues.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_DATA_RD  91 //Offcore outstanding Demand Data Read transactions in uncore queue.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_DATA_RD  92 //Cycles when offcore outstanding Demand Data Read transactions are present in SuperQueue (SQ), queue to uncore
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_DATA_RD_GE_6  93 //Cycles with at least 6 offcore outstanding Demand Data Read transactions in uncore queue.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_CODE_RD  94 //Offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore, every cycle.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_CODE_RD  95 //Cycles with offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_RFO  96 //Offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore, every cycle
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_RFO  97 //Cycles with offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__ALL_DATA_RD  98 //Offcore outstanding cacheable Core Data Read transactions in SuperQueue (SQ), queue to uncore
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DATA_RD  99 //Cycles when offcore outstanding cacheable Core Data Read transactions are present in SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__L3_MISS_DEMAND_DATA_RD 100 //Counts number of Offcore outstanding Demand Data Read requests that miss L3 cache in the superQ every cycle.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_L3_MISS_DEMAND_DATA_RD 101 //Cycles with at least 1 Demand Data Read requests who miss L3 cache in the superQ.
#define OFFCORE_REQUESTS_OUTSTANDING__L3_MISS_DEMAND_DATA_RD_GE_6 102 //Cycles with at least 6 Demand Data Read requests that miss L3 cache in the superQ.
#define IDQ__MITE_UOPS                           103 //Uops delivered to Instruction Decode Queue (IDQ) from MITE path
#define IDQ__MITE_CYCLES                         104 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from MITE path
#define IDQ__DSB_UOPS                            105 //Uops delivered to Instruction Decode Queue (IDQ) from the Decode Stream Buffer (DSB) path
#define IDQ__DSB_CYCLES                          106 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from Decode Stream Buffer (DSB) path
#define IDQ__MS_DSB_CYCLES                       107 //Cycles when uops initiated by Decode Stream Buffer (DSB) are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__ALL_DSB_CYCLES_4_UOPS               108 //Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.DSB_CYCLES_OK]
#define IDQ__ALL_DSB_CYCLES_ANY_UOPS             109 //Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.DSB_CYCLES_ANY]
#define IDQ__DSB_CYCLES_OK                       110 //Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.ALL_DSB_CYCLES_4_UOPS]
#define IDQ__DSB_CYCLES_ANY                      111 //Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.ALL_DSB_CYCLES_ANY_UOPS]
#define IDQ__MS_MITE_UOPS                        112 //Uops initiated by MITE and delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__ALL_MITE_CYCLES_4_UOPS              113 //Cycles MITE is delivering 4 Uops
#define IDQ__ALL_MITE_CYCLES_ANY_UOPS            114 //Cycles MITE is delivering any Uop
#define IDQ__MS_CYCLES                           115 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__MS_SWITCHES                         116 //Number of switches from DSB (Decode Stream Buffer) or MITE (legacy decode pipeline) to the Microcode Sequencer
#define IDQ__MS_UOPS                             117 //Uops delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define ICACHE_16B__IFDATA_STALL                 118 //Cycles where a code fetch is stalled due to L1 instruction cache miss.
#define ICACHE_64B__IFTAG_HIT                    119 //Instruction fetch tag lookups that hit in the instruction cache (L1I). Counts at 64-byte cache-line granularity.
#define ICACHE_64B__IFTAG_MISS                   120 //Instruction fetch tag lookups that miss in the instruction cache (L1I). Counts at 64-byte cache-line granularity.
#define ICACHE_64B__IFTAG_STALL                  121 //Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_TAG.STALLS]
#define ICACHE_TAG__STALLS                       122 //Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_64B.IFTAG_STALL]
#define ITLB_MISSES__MISS_CAUSES_A_WALK          123 //Misses at all ITLB levels that cause page walks
#define ITLB_MISSES__WALK_COMPLETED_4K           124 //Code miss in all TLB levels causes a page walk that completes. (4K)
#define ITLB_MISSES__WALK_COMPLETED_2M_4M        125 //Code miss in all TLB levels causes a page walk that completes. (2M/4M)
#define ITLB_MISSES__WALK_COMPLETED_1G           126 //Code miss in all TLB levels causes a page walk that completes. (1G)
#define ITLB_MISSES__WALK_COMPLETED              127 //Code miss in all TLB levels causes a page walk that completes. (All page sizes)
#define ITLB_MISSES__WALK_PENDING                128 //Counts 1 per cycle for each PMH that is busy with a page walk for an instruction fetch request. EPT page walk duration are excluded in Skylake.
#define ITLB_MISSES__WALK_ACTIVE                 129 //Cycles when at least one PMH is busy with a page walk for code (instruction fetch) request. EPT page walk duration are excluded in Skylake.
#define ITLB_MISSES__STLB_HIT                    130 //Instruction fetch requests that miss the ITLB and hit the STLB.
#define ILD_STALL__LCP                           131 //Stalls caused by changing prefix length of the instruction. [This event is alias to DECODE.LCP]
#define DECODE__LCP                              132 //Stalls caused by changing prefix length of the instruction. [This event is alias to ILD_STALL.LCP]
#define BR_MISP_EXEC__INDIRECT                   133 //Speculative mispredicted indirect branches
#define BR_MISP_EXEC__ALL_BRANCHES               134 //Speculative and retired mispredicted macro conditional branches
#define IDQ_UOPS_NOT_DELIVERED__CORE             135 //Uops not delivered to Resource Allocation Table (RAT) per thread when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_0_UOPS_DELIV__CORE 136 //Cycles per thread when 4 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_1_UOP_DELIV__CORE 137 //Cycles per thread when 3 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_2_UOP_DELIV__CORE 138 //Cycles with less than 2 uops delivered by the front end.
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_3_UOP_DELIV__CORE 139 //Cycles with less than 3 uops delivered by the front end.
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_FE_WAS_OK 140 //Counts cycles FE delivered 4 uops or Resource Allocation Table (RAT) was stalling FE.
#define UOPS_DISPATCHED_PORT__PORT_0             141 //Cycles per thread when uops are executed in port 0
#define UOPS_DISPATCHED_PORT__PORT_1             142 //Cycles per thread when uops are executed in port 1
#define UOPS_DISPATCHED_PORT__PORT_2             143 //Cycles per thread when uops are executed in port 2
#define UOPS_DISPATCHED_PORT__PORT_3             144 //Cycles per thread when uops are executed in port 3
#define UOPS_DISPATCHED_PORT__PORT_4             145 //Cycles per thread when uops are executed in port 4
#define UOPS_DISPATCHED_PORT__PORT_5             146 //Cycles per thread when uops are executed in port 5
#define UOPS_DISPATCHED_PORT__PORT_6             147 //Cycles per thread when uops are executed in port 6
#define UOPS_DISPATCHED_PORT__PORT_7             148 //Cycles per thread when uops are executed in port 7
#define RESOURCE_STALLS__ANY                     149 //Resource-related stall cycles
#define RESOURCE_STALLS__SB                      150 //Cycles stalled due to no store buffers available. (not including draining form sync).
#define CYCLE_ACTIVITY__CYCLES_L2_MISS           151 //Cycles while L2 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_L3_MISS           152 //Cycles while L3 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_TOTAL             153 //Total execution stalls.
#define CYCLE_ACTIVITY__STALLS_L2_MISS           154 //Execution stalls while L2 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_L3_MISS           155 //Execution stalls while L3 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_L1D_MISS          156 //Cycles while L1 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_L1D_MISS          157 //Execution stalls while L1 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_MEM_ANY           158 //Cycles while memory subsystem has an outstanding load.
#define CYCLE_ACTIVITY__STALLS_MEM_ANY           159 //Execution stalls while memory subsystem has an outstanding load.
#define EXE_ACTIVITY__EXE_BOUND_0_PORTS          160 //Cycles where no uops were executed, the Reservation Station was not empty, the Store Buffer was full and there was no outstanding load.
#define EXE_ACTIVITY__1_PORTS_UTIL               161 //Cycles total of 1 uop is executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__2_PORTS_UTIL               162 //Cycles total of 2 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__3_PORTS_UTIL               163 //Cycles total of 3 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__4_PORTS_UTIL               164 //Cycles total of 4 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__BOUND_ON_STORES            165 //Cycles where the Store Buffer was full and no outstanding load.
#define LSD__UOPS                                166 //Number of Uops delivered by the LSD.
#define LSD__CYCLES_ACTIVE                       167 //Cycles Uops delivered by the LSD, but didn't come from the decoder.
#define LSD__CYCLES_4_UOPS                       168 //Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_OK]
#define LSD__CYCLES_OK                           169 //Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_4_UOPS]
#define DSB2MITE_SWITCHES__COUNT                 170 //Decode Stream Buffer (DSB)-to-MITE switches
#define DSB2MITE_SWITCHES__PENALTY_CYCLES        171 //Decode Stream Buffer (DSB)-to-MITE switch true penalty cycles.
#define ITLB__ITLB_FLUSH                         172 //Flushing of the Instruction TLB (ITLB) pages, includes 4k/2M/4M pages.
#define OFFCORE_REQUESTS__DEMAND_DATA_RD         173 //Demand Data Read requests sent to uncore
#define OFFCORE_REQUESTS__DEMAND_CODE_RD         174 //Cacheable and non-cacheable code read requests
#define OFFCORE_REQUESTS__DEMAND_RFO             175 //Demand RFO requests including regular RFOs, locks, ItoM
#define OFFCORE_REQUESTS__ALL_DATA_RD            176 //Demand and prefetch data reads
#define OFFCORE_REQUESTS__L3_MISS_DEMAND_DATA_RD 177 //Demand Data Read requests who miss L3 cache
#define OFFCORE_REQUESTS__ALL_REQUESTS           178 //Any memory transaction that reached the SQ.
#define UOPS_EXECUTED__THREAD                    179 //Counts the number of uops to be executed per-thread each cycle.
#define UOPS_EXECUTED__STALL_CYCLES              180 //Counts number of cycles no uops were dispatched to be executed on this thread.
#define UOPS_EXECUTED__CYCLES_GE_1_UOP_EXEC      181 //Cycles where at least 1 uop was executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_2_UOPS_EXEC     182 //Cycles where at least 2 uops were executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_3_UOPS_EXEC     183 //Cycles where at least 3 uops were executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_4_UOPS_EXEC     184 //Cycles where at least 4 uops were executed per-thread
#define UOPS_EXECUTED__CORE                      185 //Number of uops executed on the core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_1          186 //Cycles at least 1 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_2          187 //Cycles at least 2 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_3          188 //Cycles at least 3 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_4          189 //Cycles at least 4 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_NONE          190 //Cycles with no micro-ops executed from any thread on physical core.
#define UOPS_EXECUTED__X87                       191 //Counts the number of x87 uops dispatched.
#define OFFCORE_REQUESTS_BUFFER__SQ_FULL         192 //Offcore requests buffer cannot take more entries for this thread core.
#define TLB_FLUSH__DTLB_THREAD                   193 //DTLB flush attempts of the thread-specific entries
#define TLB_FLUSH__STLB_ANY                      194 //STLB flush attempts
#define INST_RETIRED__ANY_P                      195 //Number of instructions retired. General Counter - architectural event
#define INST_RETIRED__PREC_DIST                  196 //Precise instruction retired event with HW to reduce effect of PEBS shadow in IP distribution
#define INST_RETIRED__TOTAL_CYCLES_PS            197 //Number of cycles using always true condition applied to  PEBS instructions retired event.
#define INST_RETIRED__NOP                        198 //Number of all retired NOP instructions.
#define OTHER_ASSISTS__ANY                       199 //Number of times a microcode assist is invoked by HW other than FP-assist. Examples include AD (page Access Dirty) and AVX* related assists.
#define UOPS_RETIRED__RETIRE_SLOTS               200 //Retirement slots used.
#define UOPS_RETIRED__STALL_CYCLES               201 //Cycles without actually retired uops.
#define UOPS_RETIRED__TOTAL_CYCLES               202 //Cycles with less than 10 actually retired uops.
#define UOPS_RETIRED__MACRO_FUSED                203 //Number of macro-fused uops retired. (non precise)
#define MACHINE_CLEARS__COUNT                    204 //Number of machine clears (nukes) of any type.
#define MACHINE_CLEARS__MEMORY_ORDERING          205 //Counts the number of machine clears due to memory order conflicts.
#define MACHINE_CLEARS__SMC                      206 //Self-modifying code (SMC) detected.
#define BR_INST_RETIRED__ALL_BRANCHES            207 //All (macro) branch instructions retired.
#define BR_INST_RETIRED__CONDITIONAL             208 //Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.COND]
#define BR_INST_RETIRED__COND                    209 //Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.CONDITIONAL]
#define BR_INST_RETIRED__NEAR_CALL               210 //Direct and indirect near call instructions retired.
#define BR_INST_RETIRED__ALL_BRANCHES_PEBS       211 //All (macro) branch instructions retired.
#define BR_INST_RETIRED__NEAR_RETURN             212 //Return instructions retired.
#define BR_INST_RETIRED__NOT_TAKEN               213 //Not taken branch instructions retired.
#define BR_INST_RETIRED__COND_NTAKEN             214 //Not taken branch instructions retired.
#define BR_INST_RETIRED__NEAR_TAKEN              215 //Taken branch instructions retired.
#define BR_INST_RETIRED__FAR_BRANCH              216 //Far branch instructions retired.
#define BR_MISP_RETIRED__ALL_BRANCHES            217 //All mispredicted macro branch instructions retired.
#define BR_MISP_RETIRED__CONDITIONAL             218 //Mispredicted conditional branch instructions retired.
#define BR_MISP_RETIRED__NEAR_CALL               219 //Mispredicted direct and indirect near call instructions retired.
#define BR_MISP_RETIRED__ALL_BRANCHES_PEBS       220 //Mispredicted macro branch instructions retired.
#define BR_MISP_RETIRED__RET                     221 //This event counts the number of mispredicted ret instructions retired. Non PEBS
#define BR_MISP_RETIRED__NEAR_TAKEN              222 //Number of near branch instructions retired that were mispredicted and taken.
#define FRONTEND_RETIRED__DSB_MISS               223 //Retired Instructions who experienced a critical DSB miss.
#define FRONTEND_RETIRED__L1I_MISS               224 //Retired Instructions who experienced Instruction L1 Cache true miss.
#define FRONTEND_RETIRED__L2_MISS                225 //Retired Instructions who experienced Instruction L2 Cache true miss.
#define FRONTEND_RETIRED__ITLB_MISS              226 //Retired Instructions who experienced iTLB true miss.
#define FRONTEND_RETIRED__STLB_MISS              227 //Retired Instructions who experienced STLB (2nd level TLB) true miss.
#define FRONTEND_RETIRED__LATENCY_GE_2           228 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_2 229 //Retired instructions that are fetched after an interval where the front-end had at least 2 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_4           230 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 4 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_8           231 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 8 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_16          232 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 16 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_32          233 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 32 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_64          234 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 64 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_128         235 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 128 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_256         236 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 256 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_512         237 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 512 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_1 238 //Retired instructions that are fetched after an interval where the front-end had at least 1 bubble-slot for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_3 239 //Retired instructions that are fetched after an interval where the front-end had at least 3 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_1           240 //Retired instructions after front-end starvation of at least 1 cycle
#define FRONTEND_RETIRED__ANY_DSB_MISS           241 //Retired Instructions who experienced DSB miss.
#define FP_ARITH_INST_RETIRED__SCALAR_DOUBLE     242 //Counts once for most SIMD scalar computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__SCALAR_SINGLE     243 //Counts once for most SIMD scalar computational single precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__SCALAR            244 //Counts once for most SIMD scalar computational floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__128B_PACKED_DOUBLE 245 //Counts once for most SIMD 128-bit packed computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__128B_PACKED_SINGLE 246 //Counts once for most SIMD 128-bit packed computational single precision floating-point instruction retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__256B_PACKED_DOUBLE 247 //Counts once for most SIMD 256-bit packed double computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__4_FLOPS           248 //Number of SSE/AVX computational 128-bit packed single and 256-bit packed double precision FP instructions retired; some instructions will count twice as noted below.  Each count represents 2 or/and 4 computation operations, 1 for each element.  Applies to SSE* and AVX* packed single precision and packed double precision FP instructions: ADD SUB HADD HSUB SUBADD MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB count twice as they perform 2 calculations per element.
#define FP_ARITH_INST_RETIRED__8_FLOPS           249 //Number of SSE/AVX computational 256-bit packed single precision and 512-bit packed double precision  FP instructions retired; some instructions will count twice as noted below.  Each count represents 8 computation operations, 1 for each element.  Applies to SSE* and AVX* packed single precision and double precision FP instructions: ADD SUB HADD HSUB SUBADD MUL DIV MIN MAX SQRT RSQRT RSQRT14 RCP RCP14 DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB count twice as they perform 2 calculations per element.
#define FP_ARITH_INST_RETIRED__256B_PACKED_SINGLE 250 //Counts once for most SIMD 256-bit packed single computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__512B_PACKED_DOUBLE 251 //Number of SSE/AVX computational 512-bit packed double precision floating-point instructions retired; some instructions will count twice as noted below.  Each count represents 8 computation operations, one for each element.  Applies to SSE* and AVX* packed double precision floating-point instructions: ADD SUB MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB instructions count twice as they perform 2 calculations per element.
#define FP_ARITH_INST_RETIRED__512B_PACKED_SINGLE 252 //Number of SSE/AVX computational 512-bit packed single precision floating-point instructions retired; some instructions will count twice as noted below.  Each count represents 16 computation operations, one for each element.  Applies to SSE* and AVX* packed single precision floating-point instructions: ADD SUB MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB instructions count twice as they perform 2 calculations per element.
#define FP_ARITH_INST_RETIRED__VECTOR            253 //Number of any Vector retired FP arithmetic instructions
#define HLE_RETIRED__START                       254 //Number of times an HLE execution started.
#define HLE_RETIRED__COMMIT                      255 //Number of times an HLE execution successfully committed
#define HLE_RETIRED__ABORTED                     256 //Number of times an HLE execution aborted due to any reasons (multiple categories may count as one).
#define HLE_RETIRED__ABORTED_MEM                 257 //Number of times an HLE execution aborted due to various memory events (e.g., read/write capacity and conflicts).
#define HLE_RETIRED__ABORTED_TIMER               258 //Number of times an HLE execution aborted due to hardware timer expiration.
#define HLE_RETIRED__ABORTED_UNFRIENDLY          259 //Number of times an HLE execution aborted due to HLE-unfriendly instructions and certain unfriendly events (such as AD assists etc.).
#define HLE_RETIRED__ABORTED_MEMTYPE             260 //Number of times an HLE execution aborted due to incompatible memory type
#define HLE_RETIRED__ABORTED_EVENTS              261 //Number of times an HLE execution aborted due to unfriendly events (such as interrupts).
#define RTM_RETIRED__START                       262 //Number of times an RTM execution started.
#define RTM_RETIRED__COMMIT                      263 //Number of times an RTM execution successfully committed
#define RTM_RETIRED__ABORTED                     264 //Number of times an RTM execution aborted due to any reasons (multiple categories may count as one).
#define RTM_RETIRED__ABORTED_MEM                 265 //Number of times an RTM execution aborted due to various memory events (e.g. read/write capacity and conflicts)
#define RTM_RETIRED__ABORTED_TIMER               266 //Number of times an RTM execution aborted due to uncommon conditions.
#define RTM_RETIRED__ABORTED_UNFRIENDLY          267 //Number of times an RTM execution aborted due to HLE-unfriendly instructions
#define RTM_RETIRED__ABORTED_MEMTYPE             268 //Number of times an RTM execution aborted due to incompatible memory type
#define RTM_RETIRED__ABORTED_EVENTS              269 //Number of times an RTM execution aborted due to none of the previous 4 categories (e.g. interrupt)
#define FP_ASSIST__ANY                           270 //Cycles with any input/output SSE or FP assist
#define HW_INTERRUPTS__RECEIVED                  271 //Number of hardware interrupts received by the processor.
#define ROB_MISC_EVENTS__LBR_INSERTS             272 //Increments whenever there is an update to the LBR array.
#define ROB_MISC_EVENTS__PAUSE_INST              273 //Number of retired PAUSE instructions (that do not end up with a VMExit to the VMM; TSX aborted Instructions may be counted). This event is not supported on first SKL and KBL products.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_4     274 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 4 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_8     275 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 8 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_16    276 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 16 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_32    277 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 32 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_64    278 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 64 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_128   279 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 128 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_256   280 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 256 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_512   281 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 512 cycles.
#define FP_ARITH_INST_RETIRED2__128BIT_PACKED_BF16 282 //Intel AVX-512 computational 512-bit packed BFloat16 instructions retired.
#define FP_ARITH_INST_RETIRED2__256BIT_PACKED_BF16 283 //Intel AVX-512 computational 128-bit packed BFloat16 instructions retired.
#define FP_ARITH_INST_RETIRED2__512BIT_PACKED_BF16 284 //Intel AVX-512 computational 256-bit packed BFloat16 instructions retired.
#define MEM_INST_RETIRED__STLB_MISS_LOADS        285 //Retired load instructions that miss the STLB.
#define MEM_INST_RETIRED__STLB_MISS_STORES       286 //Retired store instructions that miss the STLB.
#define MEM_INST_RETIRED__LOCK_LOADS             287 //Retired load instructions with locked access.
#define MEM_INST_RETIRED__SPLIT_LOADS            288 //Retired load instructions that split across a cacheline boundary.
#define MEM_INST_RETIRED__SPLIT_STORES           289 //Retired store instructions that split across a cacheline boundary.
#define MEM_INST_RETIRED__ALL_LOADS              290 //Retired load instructions.
#define MEM_INST_RETIRED__ALL_STORES             291 //Retired store instructions.
#define MEM_INST_RETIRED__ANY                    292 //All retired memory instructions.
#define MEM_LOAD_RETIRED__L1_HIT                 293 //Retired load instructions with L1 cache hits as data sources
#define MEM_LOAD_RETIRED__L2_HIT                 294 //Retired load instructions with L2 cache hits as data sources
#define MEM_LOAD_RETIRED__L3_HIT                 295 //Retired load instructions with L3 cache hits as data sources
#define MEM_LOAD_RETIRED__L1_MISS                296 //Retired load instructions missed L1 cache as data sources
#define MEM_LOAD_RETIRED__L2_MISS                297 //Retired load instructions missed L2 cache as data sources
#define MEM_LOAD_RETIRED__L3_MISS                298 //Retired load instructions missed L3 cache as data sources
#define MEM_LOAD_RETIRED__FB_HIT                 299 //Retired load instructions which data sources were load missed L1 but hit FB due to preceding miss to the same cache line with data not ready
#define MEM_LOAD_RETIRED__LOCAL_PMM              300 //Retired load instructions with local Intel(R) Optane(TM) DC persistent memory as the data source where the data request missed all caches.
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_MISS       301 //Retired load instructions which data sources were L3 hit and cross-core snoop missed in on-pkg core cache.
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_HIT        302 //Retired load instructions which data sources were L3 and cross-core snoop hits in on-pkg core cache
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_HITM       303 //Retired load instructions which data sources were HitM responses from shared L3
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_NONE       304 //Retired load instructions which data sources were hits in L3 without snoops required
#define MEM_LOAD_L3_MISS_RETIRED__LOCAL_DRAM     305 //Retired load instructions which data sources missed L3 but serviced from local dram
#define MEM_LOAD_L3_MISS_RETIRED__REMOTE_DRAM    306 //Retired load instructions which data sources missed L3 but serviced from remote dram
#define MEM_LOAD_L3_MISS_RETIRED__REMOTE_HITM    307 //Retired load instructions whose data sources was remote HITM
#define MEM_LOAD_L3_MISS_RETIRED__REMOTE_FWD     308 //Retired load instructions whose data sources was forwarded from a remote cache
#define MEM_LOAD_L3_MISS_RETIRED__REMOTE_PMM     309 //Retired load instructions with remote Intel(R) Optane(TM) DC persistent memory as the data source where the data request missed all caches.
#define MEM_LOAD_MISC_RETIRED__UC                310 //Retired instructions with at least 1 uncacheable load or lock.
#define BACLEARS__ANY                            311 //Counts the total number when the front end is resteered, mainly when the BPU cannot provide a correct prediction and this is corrected by other branch handling mechanisms at the front end.
#define CORE_SNOOP_RESPONSE__RSP_IHITI           312 //CORE_SNOOP_RESPONSE.RSP_IHITI
#define CORE_SNOOP_RESPONSE__RSP_IHITFSE         313 //CORE_SNOOP_RESPONSE.RSP_IHITFSE
#define CORE_SNOOP_RESPONSE__RSP_SHITFSE         314 //CORE_SNOOP_RESPONSE.RSP_SHITFSE
#define CORE_SNOOP_RESPONSE__RSP_SFWDM           315 //CORE_SNOOP_RESPONSE.RSP_SFWDM
#define CORE_SNOOP_RESPONSE__RSP_IFWDM           316 //CORE_SNOOP_RESPONSE.RSP_IFWDM
#define CORE_SNOOP_RESPONSE__RSP_IFWDFE          317 //CORE_SNOOP_RESPONSE.RSP_IFWDFE
#define CORE_SNOOP_RESPONSE__RSP_SFWDFE          318 //CORE_SNOOP_RESPONSE.RSP_SFWDFE
#define L2_TRANS__L2_WB                          319 //L2 writebacks that access L2 cache
#define L2_LINES_IN__ALL                         320 //L2 cache lines filling L2
#define L2_LINES_OUT__SILENT                     321 //Counts the number of lines that are silently dropped by L2 cache when triggered by an L2 cache fill. These lines are typically in Shared state. A non-threaded event.
#define L2_LINES_OUT__NON_SILENT                 322 //Counts the number of lines that are evicted by L2 cache when triggered by an L2 cache fill. Those lines can be either in modified state or clean state. Modified lines may either be written back to L3 or directly written to memory and not allocated in L3.  Clean lines may either be allocated in L3 or dropped
#define L2_LINES_OUT__USELESS_PREF               323 //This event is deprecated. Refer to new event L2_LINES_OUT.USELESS_HWPF
#define L2_LINES_OUT__USELESS_HWPF               324 //Counts the number of lines that have been hardware prefetched but not used and now evicted by L2 cache
#define SQ_MISC__SPLIT_LOCK                      325 //Number of cache line split locks sent to uncore.
#define IDI_MISC__WB_UPGRADE                     326 //Counts number of cache lines that are allocated and written back to L3 with the intention that they are more likely to be reused shortly
#define IDI_MISC__WB_DOWNGRADE                   327 //Counts number of cache lines that are dropped and not written back to L3 as they are deemed to be less likely to be reused shortly
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__SNOOP_NONE 328 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 329 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__SNOOP_MISS 330 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 331 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 332 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 333 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE__ANY_SNOOP 334 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__SNOOP_NONE 335 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 336 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__SNOOP_MISS 337 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 338 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 339 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__HITM_OTHER_CORE 340 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M__ANY_SNOOP 341 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__SNOOP_NONE 342 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 343 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__SNOOP_MISS 344 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 345 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 346 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__HITM_OTHER_CORE 347 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E__ANY_SNOOP 348 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__SNOOP_NONE 349 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 350 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__SNOOP_MISS 351 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 352 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 353 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__HITM_OTHER_CORE 354 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S__ANY_SNOOP 355 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__SNOOP_NONE 356 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 357 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__SNOOP_MISS 358 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 359 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 360 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__HITM_OTHER_CORE 361 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F__ANY_SNOOP 362 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__SNOOP_NONE 363 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__NO_SNOOP_NEEDED 364 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__SNOOP_MISS 365 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 366 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 367 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__HITM_OTHER_CORE 368 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__ANY_SNOOP 369 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 370 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 371 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 372 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 373 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 374 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 375 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 376 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 377 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 378 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 379 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 380 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 381 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 382 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 383 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__SNOOP_NONE 384 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__NO_SNOOP_NEEDED 385 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__SNOOP_MISS 386 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 387 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 388 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__HITM_OTHER_CORE 389 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__ANY_SNOOP 390 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__SNOOP_NONE 391 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 392 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__SNOOP_MISS 393 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 394 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 395 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__HITM_OTHER_CORE 396 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE__ANY_SNOOP 397 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__SNOOP_NONE 398 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__NO_SNOOP_NEEDED 399 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__SNOOP_MISS 400 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 401 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__HIT_OTHER_CORE_FWD 402 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__HITM_OTHER_CORE 403 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M__ANY_SNOOP 404 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__SNOOP_NONE 405 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__NO_SNOOP_NEEDED 406 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__SNOOP_MISS 407 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 408 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__HIT_OTHER_CORE_FWD 409 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__HITM_OTHER_CORE 410 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E__ANY_SNOOP 411 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__SNOOP_NONE 412 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__NO_SNOOP_NEEDED 413 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__SNOOP_MISS 414 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 415 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__HIT_OTHER_CORE_FWD 416 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__HITM_OTHER_CORE 417 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S__ANY_SNOOP 418 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__SNOOP_NONE 419 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__NO_SNOOP_NEEDED 420 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__SNOOP_MISS 421 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 422 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__HIT_OTHER_CORE_FWD 423 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__HITM_OTHER_CORE 424 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F__ANY_SNOOP 425 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__SNOOP_NONE 426 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__NO_SNOOP_NEEDED 427 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__SNOOP_MISS 428 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 429 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__HIT_OTHER_CORE_FWD 430 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__HITM_OTHER_CORE 431 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__ANY_SNOOP 432 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 433 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 434 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 435 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 436 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 437 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 438 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 439 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 440 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 441 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 442 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 443 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 444 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 445 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 446 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__SNOOP_NONE 447 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__NO_SNOOP_NEEDED 448 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__SNOOP_MISS 449 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 450 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__HIT_OTHER_CORE_FWD 451 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__HITM_OTHER_CORE 452 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__ANY_SNOOP 453 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__SNOOP_NONE 454 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 455 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__SNOOP_MISS 456 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 457 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 458 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 459 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE__ANY_SNOOP 460 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__SNOOP_NONE 461 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 462 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__SNOOP_MISS 463 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 464 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 465 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__HITM_OTHER_CORE 466 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M__ANY_SNOOP 467 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__SNOOP_NONE 468 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 469 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__SNOOP_MISS 470 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 471 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 472 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__HITM_OTHER_CORE 473 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E__ANY_SNOOP 474 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__SNOOP_NONE 475 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 476 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__SNOOP_MISS 477 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 478 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 479 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__HITM_OTHER_CORE 480 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S__ANY_SNOOP 481 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__SNOOP_NONE 482 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 483 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__SNOOP_MISS 484 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 485 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 486 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__HITM_OTHER_CORE 487 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F__ANY_SNOOP 488 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__SNOOP_NONE 489 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__NO_SNOOP_NEEDED 490 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__SNOOP_MISS 491 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 492 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 493 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__HITM_OTHER_CORE 494 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__ANY_SNOOP 495 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 496 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 497 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 498 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 499 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 500 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 501 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 502 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 503 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 504 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 505 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 506 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 507 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 508 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 509 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__SNOOP_NONE 510 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__NO_SNOOP_NEEDED 511 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__SNOOP_MISS 512 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 513 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 514 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__HITM_OTHER_CORE 515 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__ANY_SNOOP 516 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__SNOOP_NONE 517 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 518 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__SNOOP_MISS 519 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 520 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 521 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 522 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE__ANY_SNOOP 523 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__SNOOP_NONE 524 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 525 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__SNOOP_MISS 526 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 527 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 528 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__HITM_OTHER_CORE 529 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M__ANY_SNOOP 530 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__SNOOP_NONE 531 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 532 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__SNOOP_MISS 533 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 534 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 535 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__HITM_OTHER_CORE 536 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E__ANY_SNOOP 537 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__SNOOP_NONE 538 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 539 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__SNOOP_MISS 540 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 541 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 542 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__HITM_OTHER_CORE 543 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S__ANY_SNOOP 544 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__SNOOP_NONE 545 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 546 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__SNOOP_MISS 547 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 548 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 549 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__HITM_OTHER_CORE 550 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F__ANY_SNOOP 551 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__SNOOP_NONE 552 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__NO_SNOOP_NEEDED 553 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__SNOOP_MISS 554 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 555 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 556 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__HITM_OTHER_CORE 557 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__ANY_SNOOP 558 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 559 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 560 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 561 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 562 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 563 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 564 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 565 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 566 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 567 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 568 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 569 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 570 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 571 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 572 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__SNOOP_NONE 573 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__NO_SNOOP_NEEDED 574 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__SNOOP_MISS 575 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 576 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 577 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__HITM_OTHER_CORE 578 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__ANY_SNOOP 579 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__SNOOP_NONE 580 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 581 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__SNOOP_MISS 582 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 583 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 584 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__HITM_OTHER_CORE 585 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE__ANY_SNOOP 586 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__SNOOP_NONE 587 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__NO_SNOOP_NEEDED 588 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__SNOOP_MISS 589 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 590 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__HIT_OTHER_CORE_FWD 591 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__HITM_OTHER_CORE 592 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M__ANY_SNOOP 593 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__SNOOP_NONE 594 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__NO_SNOOP_NEEDED 595 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__SNOOP_MISS 596 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 597 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__HIT_OTHER_CORE_FWD 598 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__HITM_OTHER_CORE 599 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E__ANY_SNOOP 600 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__SNOOP_NONE 601 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__NO_SNOOP_NEEDED 602 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__SNOOP_MISS 603 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 604 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__HIT_OTHER_CORE_FWD 605 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__HITM_OTHER_CORE 606 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S__ANY_SNOOP 607 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__SNOOP_NONE 608 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__NO_SNOOP_NEEDED 609 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__SNOOP_MISS 610 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 611 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__HIT_OTHER_CORE_FWD 612 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__HITM_OTHER_CORE 613 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F__ANY_SNOOP 614 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__SNOOP_NONE 615 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__NO_SNOOP_NEEDED 616 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__SNOOP_MISS 617 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 618 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__HIT_OTHER_CORE_FWD 619 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__HITM_OTHER_CORE 620 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__ANY_SNOOP 621 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 622 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 623 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 624 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 625 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 626 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 627 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 628 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 629 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 630 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 631 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 632 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 633 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 634 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 635 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__SNOOP_NONE 636 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__NO_SNOOP_NEEDED 637 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__SNOOP_MISS 638 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 639 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__HIT_OTHER_CORE_FWD 640 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__HITM_OTHER_CORE 641 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__ANY_SNOOP 642 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__SNOOP_NONE 643 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 644 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__SNOOP_MISS 645 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 646 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 647 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 648 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE__ANY_SNOOP 649 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__SNOOP_NONE 650 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 651 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__SNOOP_MISS 652 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 653 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 654 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__HITM_OTHER_CORE 655 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M__ANY_SNOOP 656 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__SNOOP_NONE 657 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 658 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__SNOOP_MISS 659 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 660 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 661 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__HITM_OTHER_CORE 662 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E__ANY_SNOOP 663 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__SNOOP_NONE 664 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 665 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__SNOOP_MISS 666 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 667 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 668 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__HITM_OTHER_CORE 669 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S__ANY_SNOOP 670 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__SNOOP_NONE 671 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 672 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__SNOOP_MISS 673 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 674 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 675 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__HITM_OTHER_CORE 676 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F__ANY_SNOOP 677 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__SNOOP_NONE 678 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__NO_SNOOP_NEEDED 679 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__SNOOP_MISS 680 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 681 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 682 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__HITM_OTHER_CORE 683 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__ANY_SNOOP 684 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 685 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 686 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 687 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 688 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 689 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 690 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 691 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 692 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 693 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 694 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 695 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 696 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 697 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 698 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__SNOOP_NONE 699 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__NO_SNOOP_NEEDED 700 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__SNOOP_MISS 701 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 702 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 703 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__HITM_OTHER_CORE 704 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__ANY_SNOOP 705 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__SNOOP_NONE 706 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 707 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__SNOOP_MISS 708 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 709 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 710 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__HITM_OTHER_CORE 711 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE__ANY_SNOOP 712 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__SNOOP_NONE 713 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__NO_SNOOP_NEEDED 714 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__SNOOP_MISS 715 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 716 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__HIT_OTHER_CORE_FWD 717 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__HITM_OTHER_CORE 718 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M__ANY_SNOOP 719 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__SNOOP_NONE 720 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__NO_SNOOP_NEEDED 721 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__SNOOP_MISS 722 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 723 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__HIT_OTHER_CORE_FWD 724 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__HITM_OTHER_CORE 725 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E__ANY_SNOOP 726 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__SNOOP_NONE 727 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__NO_SNOOP_NEEDED 728 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__SNOOP_MISS 729 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 730 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__HIT_OTHER_CORE_FWD 731 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__HITM_OTHER_CORE 732 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S__ANY_SNOOP 733 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__SNOOP_NONE 734 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__NO_SNOOP_NEEDED 735 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__SNOOP_MISS 736 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 737 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__HIT_OTHER_CORE_FWD 738 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__HITM_OTHER_CORE 739 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F__ANY_SNOOP 740 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__SNOOP_NONE 741 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__NO_SNOOP_NEEDED 742 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__SNOOP_MISS 743 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 744 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__HIT_OTHER_CORE_FWD 745 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__HITM_OTHER_CORE 746 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__ANY_SNOOP 747 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 748 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 749 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 750 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 751 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 752 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 753 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 754 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 755 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 756 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 757 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 758 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 759 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 760 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 761 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__SNOOP_NONE 762 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__NO_SNOOP_NEEDED 763 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__SNOOP_MISS 764 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 765 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__HIT_OTHER_CORE_FWD 766 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__HITM_OTHER_CORE 767 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__ANY_SNOOP 768 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__SNOOP_NONE 769 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 770 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__SNOOP_MISS 771 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 772 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 773 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__HITM_OTHER_CORE 774 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE__ANY_SNOOP 775 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__SNOOP_NONE 776 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__NO_SNOOP_NEEDED 777 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__SNOOP_MISS 778 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 779 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__HIT_OTHER_CORE_FWD 780 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__HITM_OTHER_CORE 781 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M__ANY_SNOOP 782 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__SNOOP_NONE 783 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__NO_SNOOP_NEEDED 784 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__SNOOP_MISS 785 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 786 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__HIT_OTHER_CORE_FWD 787 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__HITM_OTHER_CORE 788 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E__ANY_SNOOP 789 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__SNOOP_NONE 790 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__NO_SNOOP_NEEDED 791 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__SNOOP_MISS 792 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 793 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__HIT_OTHER_CORE_FWD 794 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__HITM_OTHER_CORE 795 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S__ANY_SNOOP 796 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__SNOOP_NONE 797 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__NO_SNOOP_NEEDED 798 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__SNOOP_MISS 799 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 800 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__HIT_OTHER_CORE_FWD 801 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__HITM_OTHER_CORE 802 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F__ANY_SNOOP 803 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__SNOOP_NONE 804 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__NO_SNOOP_NEEDED 805 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__SNOOP_MISS 806 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 807 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__HIT_OTHER_CORE_FWD 808 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__HITM_OTHER_CORE 809 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__ANY_SNOOP 810 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 811 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 812 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 813 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 814 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 815 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 816 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 817 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 818 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 819 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 820 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 821 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 822 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 823 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 824 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__SNOOP_NONE 825 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__NO_SNOOP_NEEDED 826 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__SNOOP_MISS 827 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 828 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__HIT_OTHER_CORE_FWD 829 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__HITM_OTHER_CORE 830 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__ANY_SNOOP 831 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__SNOOP_NONE 832 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 833 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__SNOOP_MISS 834 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 835 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 836 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__HITM_OTHER_CORE 837 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE__ANY_SNOOP 838 //This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__SNOOP_NONE 839 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__NO_SNOOP_NEEDED 840 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__SNOOP_MISS 841 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 842 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__HIT_OTHER_CORE_FWD 843 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__HITM_OTHER_CORE 844 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M__ANY_SNOOP 845 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__SNOOP_NONE 846 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__NO_SNOOP_NEEDED 847 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__SNOOP_MISS 848 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 849 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__HIT_OTHER_CORE_FWD 850 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__HITM_OTHER_CORE 851 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E__ANY_SNOOP 852 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__SNOOP_NONE 853 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__NO_SNOOP_NEEDED 854 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__SNOOP_MISS 855 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 856 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__HIT_OTHER_CORE_FWD 857 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__HITM_OTHER_CORE 858 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S__ANY_SNOOP 859 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__SNOOP_NONE 860 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__NO_SNOOP_NEEDED 861 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__SNOOP_MISS 862 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 863 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__HIT_OTHER_CORE_FWD 864 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__HITM_OTHER_CORE 865 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F__ANY_SNOOP 866 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__SNOOP_NONE 867 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__NO_SNOOP_NEEDED 868 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__SNOOP_MISS 869 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 870 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__HIT_OTHER_CORE_FWD 871 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__HITM_OTHER_CORE 872 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__ANY_SNOOP 873 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 874 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 875 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 876 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 877 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 878 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 879 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 880 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 881 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 882 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 883 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 884 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 885 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 886 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 887 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__SNOOP_NONE 888 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__NO_SNOOP_NEEDED 889 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__SNOOP_MISS 890 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 891 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__HIT_OTHER_CORE_FWD 892 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__HITM_OTHER_CORE 893 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__ANY_SNOOP 894 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__SNOOP_NONE 895 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 896 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__SNOOP_MISS 897 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 898 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 899 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 900 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE__ANY_SNOOP 901 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__SNOOP_NONE 902 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 903 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__SNOOP_MISS 904 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 905 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 906 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__HITM_OTHER_CORE 907 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M__ANY_SNOOP 908 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__SNOOP_NONE 909 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 910 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__SNOOP_MISS 911 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 912 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 913 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__HITM_OTHER_CORE 914 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E__ANY_SNOOP 915 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__SNOOP_NONE 916 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 917 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__SNOOP_MISS 918 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 919 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 920 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__HITM_OTHER_CORE 921 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S__ANY_SNOOP 922 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__SNOOP_NONE 923 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 924 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__SNOOP_MISS 925 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 926 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 927 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__HITM_OTHER_CORE 928 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F__ANY_SNOOP 929 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__SNOOP_NONE 930 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__NO_SNOOP_NEEDED 931 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__SNOOP_MISS 932 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 933 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 934 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__HITM_OTHER_CORE 935 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__ANY_SNOOP 936 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 937 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 938 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 939 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 940 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 941 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 942 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 943 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 944 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 945 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 946 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 947 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 948 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 949 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 950 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__SNOOP_NONE 951 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__NO_SNOOP_NEEDED 952 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__SNOOP_MISS 953 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 954 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 955 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__HITM_OTHER_CORE 956 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__ANY_SNOOP 957 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__SNOOP_NONE 958 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 959 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__SNOOP_MISS 960 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 961 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 962 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__HITM_OTHER_CORE 963 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE__ANY_SNOOP 964 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__SNOOP_NONE 965 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__NO_SNOOP_NEEDED 966 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__SNOOP_MISS 967 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 968 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__HIT_OTHER_CORE_FWD 969 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__HITM_OTHER_CORE 970 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M__ANY_SNOOP 971 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__SNOOP_NONE 972 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__NO_SNOOP_NEEDED 973 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__SNOOP_MISS 974 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 975 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__HIT_OTHER_CORE_FWD 976 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__HITM_OTHER_CORE 977 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E__ANY_SNOOP 978 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__SNOOP_NONE 979 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__NO_SNOOP_NEEDED 980 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__SNOOP_MISS 981 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 982 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__HIT_OTHER_CORE_FWD 983 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__HITM_OTHER_CORE 984 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S__ANY_SNOOP 985 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__SNOOP_NONE 986 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__NO_SNOOP_NEEDED 987 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__SNOOP_MISS 988 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 989 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__HIT_OTHER_CORE_FWD 990 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__HITM_OTHER_CORE 991 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F__ANY_SNOOP 992 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__SNOOP_NONE 993 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__NO_SNOOP_NEEDED 994 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__SNOOP_MISS 995 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 996 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__HIT_OTHER_CORE_FWD 997 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__HITM_OTHER_CORE 998 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__ANY_SNOOP 999 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 1000 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1001 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 1002 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1003 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1004 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1005 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 1006 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1007 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1008 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1009 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1010 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1011 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1012 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1013 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__SNOOP_NONE 1014 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__NO_SNOOP_NEEDED 1015 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__SNOOP_MISS 1016 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 1017 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__HIT_OTHER_CORE_FWD 1018 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__HITM_OTHER_CORE 1019 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__ANY_SNOOP 1020 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__SNOOP_NONE 1021 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 1022 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__SNOOP_MISS 1023 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1024 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1025 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__HITM_OTHER_CORE 1026 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE__ANY_SNOOP 1027 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__SNOOP_NONE 1028 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__NO_SNOOP_NEEDED 1029 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__SNOOP_MISS 1030 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1031 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__HIT_OTHER_CORE_FWD 1032 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__HITM_OTHER_CORE 1033 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M__ANY_SNOOP 1034 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__SNOOP_NONE 1035 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__NO_SNOOP_NEEDED 1036 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__SNOOP_MISS 1037 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1038 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__HIT_OTHER_CORE_FWD 1039 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__HITM_OTHER_CORE 1040 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E__ANY_SNOOP 1041 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__SNOOP_NONE 1042 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__NO_SNOOP_NEEDED 1043 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__SNOOP_MISS 1044 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1045 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__HIT_OTHER_CORE_FWD 1046 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__HITM_OTHER_CORE 1047 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S__ANY_SNOOP 1048 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__SNOOP_NONE 1049 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__NO_SNOOP_NEEDED 1050 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__SNOOP_MISS 1051 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1052 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__HIT_OTHER_CORE_FWD 1053 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__HITM_OTHER_CORE 1054 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F__ANY_SNOOP 1055 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__SNOOP_NONE 1056 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__NO_SNOOP_NEEDED 1057 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__SNOOP_MISS 1058 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 1059 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__HIT_OTHER_CORE_FWD 1060 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__HITM_OTHER_CORE 1061 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__ANY_SNOOP 1062 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 1063 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1064 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 1065 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1066 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1067 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1068 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 1069 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1070 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1071 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1072 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1073 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1074 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1075 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1076 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__SNOOP_NONE 1077 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__NO_SNOOP_NEEDED 1078 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__SNOOP_MISS 1079 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 1080 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__HIT_OTHER_CORE_FWD 1081 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__HITM_OTHER_CORE 1082 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__ANY_SNOOP 1083 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__SNOOP_NONE 1084 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 1085 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__SNOOP_MISS 1086 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1087 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1088 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__HITM_OTHER_CORE 1089 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE__ANY_SNOOP 1090 //This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__SNOOP_NONE 1091 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__NO_SNOOP_NEEDED 1092 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__SNOOP_MISS 1093 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1094 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__HIT_OTHER_CORE_FWD 1095 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__HITM_OTHER_CORE 1096 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M__ANY_SNOOP 1097 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__SNOOP_NONE 1098 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__NO_SNOOP_NEEDED 1099 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__SNOOP_MISS 1100 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1101 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__HIT_OTHER_CORE_FWD 1102 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__HITM_OTHER_CORE 1103 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E__ANY_SNOOP 1104 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__SNOOP_NONE 1105 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__NO_SNOOP_NEEDED 1106 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__SNOOP_MISS 1107 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1108 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__HIT_OTHER_CORE_FWD 1109 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__HITM_OTHER_CORE 1110 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S__ANY_SNOOP 1111 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__SNOOP_NONE 1112 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__NO_SNOOP_NEEDED 1113 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__SNOOP_MISS 1114 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1115 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__HIT_OTHER_CORE_FWD 1116 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__HITM_OTHER_CORE 1117 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F__ANY_SNOOP 1118 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__SNOOP_NONE 1119 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__NO_SNOOP_NEEDED 1120 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__SNOOP_MISS 1121 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 1122 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__HIT_OTHER_CORE_FWD 1123 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__HITM_OTHER_CORE 1124 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__ANY_SNOOP 1125 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 1126 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1127 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 1128 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1129 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1130 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1131 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 1132 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1133 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1134 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1135 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1136 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1137 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1138 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1139 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__SNOOP_NONE 1140 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__NO_SNOOP_NEEDED 1141 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__SNOOP_MISS 1142 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 1143 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__HIT_OTHER_CORE_FWD 1144 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__HITM_OTHER_CORE 1145 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__ANY_SNOOP 1146 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__SNOOP_NONE 1147 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__NO_SNOOP_NEEDED 1148 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__SNOOP_MISS 1149 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1150 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1151 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__HITM_OTHER_CORE 1152 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE__ANY_SNOOP 1153 //This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__SNOOP_NONE 1154 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__NO_SNOOP_NEEDED 1155 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__SNOOP_MISS 1156 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1157 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__HIT_OTHER_CORE_FWD 1158 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__HITM_OTHER_CORE 1159 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M__ANY_SNOOP 1160 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__SNOOP_NONE 1161 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__NO_SNOOP_NEEDED 1162 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__SNOOP_MISS 1163 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1164 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__HIT_OTHER_CORE_FWD 1165 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__HITM_OTHER_CORE 1166 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E__ANY_SNOOP 1167 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__SNOOP_NONE 1168 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__NO_SNOOP_NEEDED 1169 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__SNOOP_MISS 1170 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1171 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__HIT_OTHER_CORE_FWD 1172 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__HITM_OTHER_CORE 1173 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S__ANY_SNOOP 1174 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__SNOOP_NONE 1175 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__NO_SNOOP_NEEDED 1176 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__SNOOP_MISS 1177 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1178 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__HIT_OTHER_CORE_FWD 1179 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__HITM_OTHER_CORE 1180 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F__ANY_SNOOP 1181 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__SNOOP_NONE 1182 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__NO_SNOOP_NEEDED 1183 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__SNOOP_MISS 1184 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__HIT_OTHER_CORE_NO_FWD 1185 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__HIT_OTHER_CORE_FWD 1186 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__HITM_OTHER_CORE 1187 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__ANY_SNOOP 1188 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__SNOOP_NONE 1189 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1190 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS 1191 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1192 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1193 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1194 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__ANY_SNOOP 1195 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1196 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1197 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1198 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1199 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1200 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1201 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1202 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__SNOOP_NONE 1203 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__NO_SNOOP_NEEDED 1204 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__SNOOP_MISS 1205 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.SNOOP_MISS
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__HIT_OTHER_CORE_NO_FWD 1206 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__HIT_OTHER_CORE_FWD 1207 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__HITM_OTHER_CORE 1208 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__ANY_SNOOP 1209 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=ANY_RESPONSE 1210 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1211 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1212 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1213 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=ANY_RESPONSE 1214 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1215 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1216 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT__SNOOP_HIT_WITH_FWD 1217 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=ANY_RESPONSE 1218 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1219 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1220 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1221 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=ANY_RESPONSE 1222 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1223 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1224 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1225 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=ANY_RESPONSE 1226 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1227 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1228 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT__SNOOP_HIT_WITH_FWD 1229 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=ANY_RESPONSE 1230 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1231 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1232 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1233 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=ANY_RESPONSE 1234 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1235 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1236 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT__SNOOP_HIT_WITH_FWD 1237 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=ANY_RESPONSE 1238 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1239 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1240 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT__SNOOP_HIT_WITH_FWD 1241 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=ANY_RESPONSE 1242 //This event is deprecated. Refer to new event OCR.OTHER.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1243 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1244 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_HIT__SNOOP_HIT_WITH_FWD 1245 //This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=ANY_RESPONSE 1246 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1247 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1248 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1249 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=ANY_RESPONSE 1250 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1251 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1252 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT__SNOOP_HIT_WITH_FWD 1253 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=ANY_RESPONSE 1254 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1255 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1256 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT__SNOOP_HIT_WITH_FWD 1257 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=ANY_RESPONSE 1258 //This event is deprecated. Refer to new event OCR.ALL_RFO.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1259 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1260 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT__SNOOP_HIT_WITH_FWD 1261 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=ANY_RESPONSE 1262 //This event is deprecated. Refer to new event OCR.ALL_READS.ANY_RESPONSE
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 1263 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 1264 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT__SNOOP_HIT_WITH_FWD 1265 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_HIT_WITH_FWD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__REMOTE_HITM 1266 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__REMOTE_HITM 1267 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__REMOTE_HITM 1268 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__REMOTE_HITM 1269 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__REMOTE_HITM 1270 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__REMOTE_HITM 1271 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__REMOTE_HITM 1272 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__REMOTE_HITM 1273 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__REMOTE_HITM 1274 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__REMOTE_HITM 1275 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__REMOTE_HITM 1276 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__REMOTE_HITM 1277 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__REMOTE_HITM 1278 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__REMOTE_HITM 1279 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.REMOTE_HITM
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1280 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS__REMOTE_HIT_FORWARD 1281 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1282 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1283 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS__REMOTE_HIT_FORWARD 1284 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1285 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS__REMOTE_HIT_FORWARD 1286 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS__REMOTE_HIT_FORWARD 1287 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=OTHER:response=L3_MISS__REMOTE_HIT_FORWARD 1288 //This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1289 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS__REMOTE_HIT_FORWARD 1290 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS__REMOTE_HIT_FORWARD 1291 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS__REMOTE_HIT_FORWARD 1292 //This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS__REMOTE_HIT_FORWARD 1293 //This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1294 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1295 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1296 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1297 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1298 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1299 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1300 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1301 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1302 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1303 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1304 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1305 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1306 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1307 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1308 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1309 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1310 //This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1311 //This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1312 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1313 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1314 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1315 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1316 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1317 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1318 //This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1319 //This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 1320 //This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM__SNOOP_NONE 1321 //This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1322 //This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1323 //This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1324 //This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1325 //This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1326 //This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1327 //This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1328 //This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1329 //This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1330 //This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1331 //This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1332 //This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1333 //This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1334 //This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM__ANY_SNOOP 1335 //This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 1336 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 1337 //Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 1338 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1339 //Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1340 //Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__HITM_OTHER_CORE 1341 //Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 1342 //Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_HIT_M__SNOOP_NONE 1343 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_M__NO_SNOOP_NEEDED 1344 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_HIT_M__SNOOP_MISS 1345 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1346 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 1347 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_M__HITM_OTHER_CORE 1348 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_HIT_M__ANY_SNOOP 1349 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_HIT_E__SNOOP_NONE 1350 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_E__NO_SNOOP_NEEDED 1351 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_HIT_E__SNOOP_MISS 1352 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1353 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 1354 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_E__HITM_OTHER_CORE 1355 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_HIT_E__ANY_SNOOP 1356 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_HIT_S__SNOOP_NONE 1357 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_S__NO_SNOOP_NEEDED 1358 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_HIT_S__SNOOP_MISS 1359 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1360 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 1361 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_S__HITM_OTHER_CORE 1362 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_HIT_S__ANY_SNOOP 1363 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_HIT_F__SNOOP_NONE 1364 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_F__NO_SNOOP_NEEDED 1365 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_HIT_F__SNOOP_MISS 1366 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1367 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 1368 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT_F__HITM_OTHER_CORE 1369 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_HIT_F__ANY_SNOOP 1370 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_NONE  1371 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE
#define OCR__DEMAND_DATA_RD__L3_HIT__NO_SNOOP_NEEDED 1372 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_MISS  1373 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS
#define OCR__DEMAND_DATA_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 1374 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT__HIT_OTHER_CORE_FWD 1375 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT__HITM_OTHER_CORE 1376 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_HIT__ANY_SNOOP   1377 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1378 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1379 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1380 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1381 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1382 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1383 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1384 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1385 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1386 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1387 //Counts demand data reads
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1388 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1389 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1390 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1391 //Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__L3_MISS__SNOOP_NONE 1392 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE
#define OCR__DEMAND_DATA_RD__L3_MISS__NO_SNOOP_NEEDED 1393 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__DEMAND_DATA_RD__L3_MISS__SNOOP_MISS 1394 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS
#define OCR__DEMAND_DATA_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 1395 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS__HIT_OTHER_CORE_FWD 1396 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS__HITM_OTHER_CORE 1397 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__DEMAND_DATA_RD__L3_MISS__ANY_SNOOP  1398 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP
#define OCR__DEMAND_RFO__SUPPLIER_NONE__SNOOP_NONE 1399 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__SUPPLIER_NONE__NO_SNOOP_NEEDED 1400 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__SUPPLIER_NONE__SNOOP_MISS 1401 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1402 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1403 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__SUPPLIER_NONE__HITM_OTHER_CORE 1404 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__SUPPLIER_NONE__ANY_SNOOP 1405 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_HIT_M__SNOOP_NONE    1406 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_M__NO_SNOOP_NEEDED 1407 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_HIT_M__SNOOP_MISS    1408 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1409 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT_M__HIT_OTHER_CORE_FWD 1410 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_HIT_M__HITM_OTHER_CORE 1411 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_HIT_M__ANY_SNOOP     1412 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_HIT_E__SNOOP_NONE    1413 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_E__NO_SNOOP_NEEDED 1414 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_HIT_E__SNOOP_MISS    1415 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1416 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT_E__HIT_OTHER_CORE_FWD 1417 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_HIT_E__HITM_OTHER_CORE 1418 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_HIT_E__ANY_SNOOP     1419 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_HIT_S__SNOOP_NONE    1420 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_S__NO_SNOOP_NEEDED 1421 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_HIT_S__SNOOP_MISS    1422 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1423 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT_S__HIT_OTHER_CORE_FWD 1424 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_HIT_S__HITM_OTHER_CORE 1425 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_HIT_S__ANY_SNOOP     1426 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_HIT_F__SNOOP_NONE    1427 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_F__NO_SNOOP_NEEDED 1428 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_HIT_F__SNOOP_MISS    1429 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1430 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT_F__HIT_OTHER_CORE_FWD 1431 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_HIT_F__HITM_OTHER_CORE 1432 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_HIT_F__ANY_SNOOP     1433 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_NONE      1434 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.SNOOP_NONE
#define OCR__DEMAND_RFO__L3_HIT__NO_SNOOP_NEEDED 1435 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_MISS      1436 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.SNOOP_MISS
#define OCR__DEMAND_RFO__L3_HIT__HIT_OTHER_CORE_NO_FWD 1437 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT__HIT_OTHER_CORE_FWD 1438 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_HIT__HITM_OTHER_CORE 1439 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_HIT__ANY_SNOOP       1440 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1441 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1442 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1443 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1444 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1445 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1446 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1447 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1448 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1449 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1450 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1451 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1452 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1453 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1454 //Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__DEMAND_RFO__L3_MISS__SNOOP_NONE     1455 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.SNOOP_NONE
#define OCR__DEMAND_RFO__L3_MISS__NO_SNOOP_NEEDED 1456 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OCR__DEMAND_RFO__L3_MISS__SNOOP_MISS     1457 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.SNOOP_MISS
#define OCR__DEMAND_RFO__L3_MISS__HIT_OTHER_CORE_NO_FWD 1458 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_RFO__L3_MISS__HIT_OTHER_CORE_FWD 1459 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_RFO__L3_MISS__HITM_OTHER_CORE 1460 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE
#define OCR__DEMAND_RFO__L3_MISS__ANY_SNOOP      1461 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_NONE 1462 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 1463 //Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_MISS 1464 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1465 //Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1466 //Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__HITM_OTHER_CORE 1467 //Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__SUPPLIER_NONE__ANY_SNOOP 1468 //Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_HIT_M__SNOOP_NONE 1469 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_M__NO_SNOOP_NEEDED 1470 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_HIT_M__SNOOP_MISS 1471 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1472 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 1473 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_M__HITM_OTHER_CORE 1474 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_HIT_M__ANY_SNOOP 1475 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_HIT_E__SNOOP_NONE 1476 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_E__NO_SNOOP_NEEDED 1477 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_HIT_E__SNOOP_MISS 1478 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1479 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 1480 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_E__HITM_OTHER_CORE 1481 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_HIT_E__ANY_SNOOP 1482 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_HIT_S__SNOOP_NONE 1483 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_S__NO_SNOOP_NEEDED 1484 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_HIT_S__SNOOP_MISS 1485 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1486 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 1487 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_S__HITM_OTHER_CORE 1488 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_HIT_S__ANY_SNOOP 1489 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_HIT_F__SNOOP_NONE 1490 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_F__NO_SNOOP_NEEDED 1491 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_HIT_F__SNOOP_MISS 1492 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1493 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 1494 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT_F__HITM_OTHER_CORE 1495 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_HIT_F__ANY_SNOOP 1496 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_NONE  1497 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE
#define OCR__DEMAND_CODE_RD__L3_HIT__NO_SNOOP_NEEDED 1498 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_MISS  1499 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS
#define OCR__DEMAND_CODE_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 1500 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT__HIT_OTHER_CORE_FWD 1501 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT__HITM_OTHER_CORE 1502 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_HIT__ANY_SNOOP   1503 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1504 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1505 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1506 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1507 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1508 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1509 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1510 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1511 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1512 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1513 //Counts all demand code reads
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1514 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1515 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1516 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1517 //Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__L3_MISS__SNOOP_NONE 1518 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE
#define OCR__DEMAND_CODE_RD__L3_MISS__NO_SNOOP_NEEDED 1519 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__DEMAND_CODE_RD__L3_MISS__SNOOP_MISS 1520 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS
#define OCR__DEMAND_CODE_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 1521 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS__HIT_OTHER_CORE_FWD 1522 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS__HITM_OTHER_CORE 1523 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__DEMAND_CODE_RD__L3_MISS__ANY_SNOOP  1524 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 1525 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 1526 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 1527 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1528 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1529 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__HITM_OTHER_CORE 1530 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 1531 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_HIT_M__SNOOP_NONE 1532 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_M__NO_SNOOP_NEEDED 1533 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_HIT_M__SNOOP_MISS 1534 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1535 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 1536 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_M__HITM_OTHER_CORE 1537 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_HIT_M__ANY_SNOOP  1538 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_HIT_E__SNOOP_NONE 1539 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_E__NO_SNOOP_NEEDED 1540 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_HIT_E__SNOOP_MISS 1541 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1542 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 1543 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_E__HITM_OTHER_CORE 1544 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_HIT_E__ANY_SNOOP  1545 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_HIT_S__SNOOP_NONE 1546 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_S__NO_SNOOP_NEEDED 1547 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_HIT_S__SNOOP_MISS 1548 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1549 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 1550 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_S__HITM_OTHER_CORE 1551 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_HIT_S__ANY_SNOOP  1552 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_HIT_F__SNOOP_NONE 1553 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_F__NO_SNOOP_NEEDED 1554 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_HIT_F__SNOOP_MISS 1555 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1556 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 1557 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT_F__HITM_OTHER_CORE 1558 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_HIT_F__ANY_SNOOP  1559 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_HIT__SNOOP_NONE   1560 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_NONE
#define OCR__PF_L2_DATA_RD__L3_HIT__NO_SNOOP_NEEDED 1561 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_HIT__SNOOP_MISS   1562 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_MISS
#define OCR__PF_L2_DATA_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 1563 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT__HIT_OTHER_CORE_FWD 1564 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT__HITM_OTHER_CORE 1565 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_HIT__ANY_SNOOP    1566 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1567 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1568 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1569 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1570 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1571 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1572 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1573 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1574 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1575 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1576 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1577 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1578 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1579 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1580 //Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__L3_MISS__SNOOP_NONE  1581 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_NONE
#define OCR__PF_L2_DATA_RD__L3_MISS__NO_SNOOP_NEEDED 1582 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__PF_L2_DATA_RD__L3_MISS__SNOOP_MISS  1583 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_MISS
#define OCR__PF_L2_DATA_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 1584 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS__HIT_OTHER_CORE_FWD 1585 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS__HITM_OTHER_CORE 1586 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__PF_L2_DATA_RD__L3_MISS__ANY_SNOOP   1587 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP
#define OCR__PF_L2_RFO__SUPPLIER_NONE__SNOOP_NONE 1588 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__SUPPLIER_NONE__NO_SNOOP_NEEDED 1589 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__SUPPLIER_NONE__SNOOP_MISS 1590 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1591 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1592 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__SUPPLIER_NONE__HITM_OTHER_CORE 1593 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__SUPPLIER_NONE__ANY_SNOOP 1594 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_HIT_M__SNOOP_NONE     1595 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_M__NO_SNOOP_NEEDED 1596 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_HIT_M__SNOOP_MISS     1597 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1598 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT_M__HIT_OTHER_CORE_FWD 1599 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_HIT_M__HITM_OTHER_CORE 1600 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_HIT_M__ANY_SNOOP      1601 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_HIT_E__SNOOP_NONE     1602 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_E__NO_SNOOP_NEEDED 1603 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_HIT_E__SNOOP_MISS     1604 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1605 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT_E__HIT_OTHER_CORE_FWD 1606 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_HIT_E__HITM_OTHER_CORE 1607 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_HIT_E__ANY_SNOOP      1608 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_HIT_S__SNOOP_NONE     1609 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_S__NO_SNOOP_NEEDED 1610 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_HIT_S__SNOOP_MISS     1611 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1612 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT_S__HIT_OTHER_CORE_FWD 1613 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_HIT_S__HITM_OTHER_CORE 1614 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_HIT_S__ANY_SNOOP      1615 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_HIT_F__SNOOP_NONE     1616 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_F__NO_SNOOP_NEEDED 1617 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_HIT_F__SNOOP_MISS     1618 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1619 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT_F__HIT_OTHER_CORE_FWD 1620 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_HIT_F__HITM_OTHER_CORE 1621 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_HIT_F__ANY_SNOOP      1622 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_HIT__SNOOP_NONE       1623 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.SNOOP_NONE
#define OCR__PF_L2_RFO__L3_HIT__NO_SNOOP_NEEDED  1624 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_HIT__SNOOP_MISS       1625 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.SNOOP_MISS
#define OCR__PF_L2_RFO__L3_HIT__HIT_OTHER_CORE_NO_FWD 1626 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT__HIT_OTHER_CORE_FWD 1627 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_HIT__HITM_OTHER_CORE  1628 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_HIT__ANY_SNOOP        1629 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1630 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1631 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1632 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1633 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1634 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1635 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1636 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1637 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1638 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1639 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1640 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1641 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1642 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1643 //Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__PF_L2_RFO__L3_MISS__SNOOP_NONE      1644 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.SNOOP_NONE
#define OCR__PF_L2_RFO__L3_MISS__NO_SNOOP_NEEDED 1645 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OCR__PF_L2_RFO__L3_MISS__SNOOP_MISS      1646 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.SNOOP_MISS
#define OCR__PF_L2_RFO__L3_MISS__HIT_OTHER_CORE_NO_FWD 1647 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L2_RFO__L3_MISS__HIT_OTHER_CORE_FWD 1648 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__PF_L2_RFO__L3_MISS__HITM_OTHER_CORE 1649 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE
#define OCR__PF_L2_RFO__L3_MISS__ANY_SNOOP       1650 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 1651 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 1652 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 1653 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1654 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1655 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__HITM_OTHER_CORE 1656 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 1657 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_HIT_M__SNOOP_NONE 1658 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_M__NO_SNOOP_NEEDED 1659 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_HIT_M__SNOOP_MISS 1660 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1661 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 1662 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_M__HITM_OTHER_CORE 1663 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_HIT_M__ANY_SNOOP  1664 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_HIT_E__SNOOP_NONE 1665 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_E__NO_SNOOP_NEEDED 1666 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_HIT_E__SNOOP_MISS 1667 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1668 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 1669 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_E__HITM_OTHER_CORE 1670 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_HIT_E__ANY_SNOOP  1671 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_HIT_S__SNOOP_NONE 1672 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_S__NO_SNOOP_NEEDED 1673 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_HIT_S__SNOOP_MISS 1674 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1675 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 1676 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_S__HITM_OTHER_CORE 1677 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_HIT_S__ANY_SNOOP  1678 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_HIT_F__SNOOP_NONE 1679 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_F__NO_SNOOP_NEEDED 1680 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_HIT_F__SNOOP_MISS 1681 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1682 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 1683 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT_F__HITM_OTHER_CORE 1684 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_HIT_F__ANY_SNOOP  1685 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_HIT__SNOOP_NONE   1686 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_NONE
#define OCR__PF_L3_DATA_RD__L3_HIT__NO_SNOOP_NEEDED 1687 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_HIT__SNOOP_MISS   1688 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_MISS
#define OCR__PF_L3_DATA_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 1689 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT__HIT_OTHER_CORE_FWD 1690 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT__HITM_OTHER_CORE 1691 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_HIT__ANY_SNOOP    1692 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1693 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1694 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1695 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1696 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1697 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1698 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1699 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1700 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1701 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1702 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1703 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1704 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1705 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1706 //Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__L3_MISS__SNOOP_NONE  1707 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_NONE
#define OCR__PF_L3_DATA_RD__L3_MISS__NO_SNOOP_NEEDED 1708 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__PF_L3_DATA_RD__L3_MISS__SNOOP_MISS  1709 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_MISS
#define OCR__PF_L3_DATA_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 1710 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS__HIT_OTHER_CORE_FWD 1711 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS__HITM_OTHER_CORE 1712 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__PF_L3_DATA_RD__L3_MISS__ANY_SNOOP   1713 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP
#define OCR__PF_L3_RFO__SUPPLIER_NONE__SNOOP_NONE 1714 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__SUPPLIER_NONE__NO_SNOOP_NEEDED 1715 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__SUPPLIER_NONE__SNOOP_MISS 1716 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1717 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1718 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__SUPPLIER_NONE__HITM_OTHER_CORE 1719 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__SUPPLIER_NONE__ANY_SNOOP 1720 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_HIT_M__SNOOP_NONE     1721 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_M__NO_SNOOP_NEEDED 1722 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_HIT_M__SNOOP_MISS     1723 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1724 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT_M__HIT_OTHER_CORE_FWD 1725 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_HIT_M__HITM_OTHER_CORE 1726 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_HIT_M__ANY_SNOOP      1727 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_HIT_E__SNOOP_NONE     1728 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_E__NO_SNOOP_NEEDED 1729 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_HIT_E__SNOOP_MISS     1730 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1731 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT_E__HIT_OTHER_CORE_FWD 1732 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_HIT_E__HITM_OTHER_CORE 1733 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_HIT_E__ANY_SNOOP      1734 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_HIT_S__SNOOP_NONE     1735 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_S__NO_SNOOP_NEEDED 1736 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_HIT_S__SNOOP_MISS     1737 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1738 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT_S__HIT_OTHER_CORE_FWD 1739 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_HIT_S__HITM_OTHER_CORE 1740 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_HIT_S__ANY_SNOOP      1741 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_HIT_F__SNOOP_NONE     1742 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_F__NO_SNOOP_NEEDED 1743 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_HIT_F__SNOOP_MISS     1744 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1745 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT_F__HIT_OTHER_CORE_FWD 1746 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_HIT_F__HITM_OTHER_CORE 1747 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_HIT_F__ANY_SNOOP      1748 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_HIT__SNOOP_NONE       1749 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.SNOOP_NONE
#define OCR__PF_L3_RFO__L3_HIT__NO_SNOOP_NEEDED  1750 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_HIT__SNOOP_MISS       1751 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.SNOOP_MISS
#define OCR__PF_L3_RFO__L3_HIT__HIT_OTHER_CORE_NO_FWD 1752 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT__HIT_OTHER_CORE_FWD 1753 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_HIT__HITM_OTHER_CORE  1754 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_HIT__ANY_SNOOP        1755 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1756 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1757 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1758 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1759 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1760 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1761 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1762 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1763 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1764 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1765 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1766 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1767 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1768 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1769 //Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__PF_L3_RFO__L3_MISS__SNOOP_NONE      1770 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.SNOOP_NONE
#define OCR__PF_L3_RFO__L3_MISS__NO_SNOOP_NEEDED 1771 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OCR__PF_L3_RFO__L3_MISS__SNOOP_MISS      1772 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.SNOOP_MISS
#define OCR__PF_L3_RFO__L3_MISS__HIT_OTHER_CORE_NO_FWD 1773 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L3_RFO__L3_MISS__HIT_OTHER_CORE_FWD 1774 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__PF_L3_RFO__L3_MISS__HITM_OTHER_CORE 1775 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE
#define OCR__PF_L3_RFO__L3_MISS__ANY_SNOOP       1776 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__SNOOP_NONE 1777 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__NO_SNOOP_NEEDED 1778 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__SNOOP_MISS 1779 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1780 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1781 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__HITM_OTHER_CORE 1782 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__SUPPLIER_NONE__ANY_SNOOP 1783 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_HIT_M__SNOOP_NONE 1784 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_M__NO_SNOOP_NEEDED 1785 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_HIT_M__SNOOP_MISS 1786 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1787 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_M__HIT_OTHER_CORE_FWD 1788 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_M__HITM_OTHER_CORE 1789 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_HIT_M__ANY_SNOOP  1790 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_HIT_E__SNOOP_NONE 1791 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_E__NO_SNOOP_NEEDED 1792 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_HIT_E__SNOOP_MISS 1793 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1794 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_E__HIT_OTHER_CORE_FWD 1795 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_E__HITM_OTHER_CORE 1796 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_HIT_E__ANY_SNOOP  1797 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_HIT_S__SNOOP_NONE 1798 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_S__NO_SNOOP_NEEDED 1799 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_HIT_S__SNOOP_MISS 1800 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1801 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_S__HIT_OTHER_CORE_FWD 1802 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_S__HITM_OTHER_CORE 1803 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_HIT_S__ANY_SNOOP  1804 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_HIT_F__SNOOP_NONE 1805 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_F__NO_SNOOP_NEEDED 1806 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_HIT_F__SNOOP_MISS 1807 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1808 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_F__HIT_OTHER_CORE_FWD 1809 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT_F__HITM_OTHER_CORE 1810 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_HIT_F__ANY_SNOOP  1811 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_HIT__SNOOP_NONE   1812 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_NONE
#define OCR__PF_L1D_AND_SW__L3_HIT__NO_SNOOP_NEEDED 1813 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_HIT__SNOOP_MISS   1814 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_MISS
#define OCR__PF_L1D_AND_SW__L3_HIT__HIT_OTHER_CORE_NO_FWD 1815 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT__HIT_OTHER_CORE_FWD 1816 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT__HITM_OTHER_CORE 1817 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_HIT__ANY_SNOOP    1818 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1819 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1820 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1821 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1822 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1823 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1824 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1825 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1826 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1827 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1828 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1829 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1830 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1831 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1832 //Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__L3_MISS__SNOOP_NONE  1833 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_NONE
#define OCR__PF_L1D_AND_SW__L3_MISS__NO_SNOOP_NEEDED 1834 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED
#define OCR__PF_L1D_AND_SW__L3_MISS__SNOOP_MISS  1835 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_MISS
#define OCR__PF_L1D_AND_SW__L3_MISS__HIT_OTHER_CORE_NO_FWD 1836 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS__HIT_OTHER_CORE_FWD 1837 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS__HITM_OTHER_CORE 1838 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE
#define OCR__PF_L1D_AND_SW__L3_MISS__ANY_SNOOP   1839 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP
#define OCR__OTHER__SUPPLIER_NONE__SNOOP_NONE    1840 //Counts any other requests
#define OCR__OTHER__SUPPLIER_NONE__NO_SNOOP_NEEDED 1841 //Counts any other requests  OCR.OTHER.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__OTHER__SUPPLIER_NONE__SNOOP_MISS    1842 //Counts any other requests
#define OCR__OTHER__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1843 //Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1844 //Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__OTHER__SUPPLIER_NONE__HITM_OTHER_CORE 1845 //Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__OTHER__SUPPLIER_NONE__ANY_SNOOP     1846 //Counts any other requests  OCR.OTHER.SUPPLIER_NONE.ANY_SNOOP
#define OCR__OTHER__L3_HIT_M__SNOOP_NONE         1847 //Counts any other requests
#define OCR__OTHER__L3_HIT_M__NO_SNOOP_NEEDED    1848 //Counts any other requests  OCR.OTHER.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_HIT_M__SNOOP_MISS         1849 //Counts any other requests
#define OCR__OTHER__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1850 //Counts any other requests  OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_HIT_M__HIT_OTHER_CORE_FWD 1851 //Counts any other requests  OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_HIT_M__HITM_OTHER_CORE    1852 //Counts any other requests  OCR.OTHER.L3_HIT_M.HITM_OTHER_CORE
#define OCR__OTHER__L3_HIT_M__ANY_SNOOP          1853 //Counts any other requests  OCR.OTHER.L3_HIT_M.ANY_SNOOP
#define OCR__OTHER__L3_HIT_E__SNOOP_NONE         1854 //Counts any other requests
#define OCR__OTHER__L3_HIT_E__NO_SNOOP_NEEDED    1855 //Counts any other requests  OCR.OTHER.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_HIT_E__SNOOP_MISS         1856 //Counts any other requests
#define OCR__OTHER__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1857 //Counts any other requests  OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_HIT_E__HIT_OTHER_CORE_FWD 1858 //Counts any other requests  OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_HIT_E__HITM_OTHER_CORE    1859 //Counts any other requests  OCR.OTHER.L3_HIT_E.HITM_OTHER_CORE
#define OCR__OTHER__L3_HIT_E__ANY_SNOOP          1860 //Counts any other requests  OCR.OTHER.L3_HIT_E.ANY_SNOOP
#define OCR__OTHER__L3_HIT_S__SNOOP_NONE         1861 //Counts any other requests
#define OCR__OTHER__L3_HIT_S__NO_SNOOP_NEEDED    1862 //Counts any other requests  OCR.OTHER.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_HIT_S__SNOOP_MISS         1863 //Counts any other requests
#define OCR__OTHER__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1864 //Counts any other requests  OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_HIT_S__HIT_OTHER_CORE_FWD 1865 //Counts any other requests  OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_HIT_S__HITM_OTHER_CORE    1866 //Counts any other requests  OCR.OTHER.L3_HIT_S.HITM_OTHER_CORE
#define OCR__OTHER__L3_HIT_S__ANY_SNOOP          1867 //Counts any other requests  OCR.OTHER.L3_HIT_S.ANY_SNOOP
#define OCR__OTHER__L3_HIT_F__SNOOP_NONE         1868 //Counts any other requests
#define OCR__OTHER__L3_HIT_F__NO_SNOOP_NEEDED    1869 //Counts any other requests  OCR.OTHER.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_HIT_F__SNOOP_MISS         1870 //Counts any other requests
#define OCR__OTHER__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1871 //Counts any other requests  OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_HIT_F__HIT_OTHER_CORE_FWD 1872 //Counts any other requests  OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_HIT_F__HITM_OTHER_CORE    1873 //Counts any other requests  OCR.OTHER.L3_HIT_F.HITM_OTHER_CORE
#define OCR__OTHER__L3_HIT_F__ANY_SNOOP          1874 //Counts any other requests  OCR.OTHER.L3_HIT_F.ANY_SNOOP
#define OCR__OTHER__L3_HIT__SNOOP_NONE           1875 //Counts any other requests OCR.OTHER.L3_HIT.SNOOP_NONE
#define OCR__OTHER__L3_HIT__NO_SNOOP_NEEDED      1876 //Counts any other requests OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_HIT__SNOOP_MISS           1877 //Counts any other requests OCR.OTHER.L3_HIT.SNOOP_MISS
#define OCR__OTHER__L3_HIT__HIT_OTHER_CORE_NO_FWD 1878 //Counts any other requests OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_HIT__HIT_OTHER_CORE_FWD   1879 //Counts any other requests OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_HIT__HITM_OTHER_CORE      1880 //Counts any other requests OCR.OTHER.L3_HIT.HITM_OTHER_CORE OCR.OTHER.L3_HIT.HITM_OTHER_CORE
#define OCR__OTHER__L3_HIT__ANY_SNOOP            1881 //Counts any other requests OCR.OTHER.L3_HIT.ANY_SNOOP OCR.OTHER.L3_HIT.ANY_SNOOP
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1882 //Counts any other requests
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1883 //Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1884 //Counts any other requests
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1885 //Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1886 //Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1887 //Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1888 //Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1889 //Counts any other requests
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1890 //Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1891 //Counts any other requests
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1892 //Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1893 //Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1894 //Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__OTHER__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1895 //Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__OTHER__L3_MISS__SNOOP_NONE          1896 //Counts any other requests OCR.OTHER.L3_MISS.SNOOP_NONE
#define OCR__OTHER__L3_MISS__NO_SNOOP_NEEDED     1897 //Counts any other requests OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED
#define OCR__OTHER__L3_MISS__SNOOP_MISS          1898 //Counts any other requests OCR.OTHER.L3_MISS.SNOOP_MISS
#define OCR__OTHER__L3_MISS__HIT_OTHER_CORE_NO_FWD 1899 //Counts any other requests OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__OTHER__L3_MISS__HIT_OTHER_CORE_FWD  1900 //Counts any other requests OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__OTHER__L3_MISS__HITM_OTHER_CORE     1901 //Counts any other requests OCR.OTHER.L3_MISS.HITM_OTHER_CORE OCR.OTHER.L3_MISS.HITM_OTHER_CORE
#define OCR__OTHER__L3_MISS__ANY_SNOOP           1902 //Counts any other requests OCR.OTHER.L3_MISS.ANY_SNOOP OCR.OTHER.L3_MISS.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 1903 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 1904 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 1905 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1906 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1907 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__HITM_OTHER_CORE 1908 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 1909 //OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__SNOOP_NONE 1910 //OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__NO_SNOOP_NEEDED 1911 //OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__SNOOP_MISS 1912 //OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1913 //OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 1914 //OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__HITM_OTHER_CORE 1915 //OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_HIT_M__ANY_SNOOP 1916 //OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__SNOOP_NONE 1917 //OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__NO_SNOOP_NEEDED 1918 //OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__SNOOP_MISS 1919 //OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1920 //OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 1921 //OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__HITM_OTHER_CORE 1922 //OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_HIT_E__ANY_SNOOP 1923 //OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__SNOOP_NONE 1924 //OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__NO_SNOOP_NEEDED 1925 //OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__SNOOP_MISS 1926 //OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1927 //OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 1928 //OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__HITM_OTHER_CORE 1929 //OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_HIT_S__ANY_SNOOP 1930 //OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__SNOOP_NONE 1931 //OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__NO_SNOOP_NEEDED 1932 //OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__SNOOP_MISS 1933 //OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1934 //OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 1935 //OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__HITM_OTHER_CORE 1936 //OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_HIT_F__ANY_SNOOP 1937 //OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_HIT__SNOOP_NONE  1938 //OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_HIT__NO_SNOOP_NEEDED 1939 //OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_HIT__SNOOP_MISS  1940 //OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 1941 //OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT__HIT_OTHER_CORE_FWD 1942 //OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT__HITM_OTHER_CORE 1943 //OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_HIT__ANY_SNOOP   1944 //OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 1945 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 1946 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 1947 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 1948 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 1949 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 1950 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 1951 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 1952 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 1953 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 1954 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 1955 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 1956 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 1957 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 1958 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__L3_MISS__SNOOP_NONE 1959 //OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__L3_MISS__NO_SNOOP_NEEDED 1960 //OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__ALL_PF_DATA_RD__L3_MISS__SNOOP_MISS 1961 //OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS
#define OCR__ALL_PF_DATA_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 1962 //OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS__HIT_OTHER_CORE_FWD 1963 //OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS__HITM_OTHER_CORE 1964 //OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__ALL_PF_DATA_RD__L3_MISS__ANY_SNOOP  1965 //OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__SNOOP_NONE 1966 //OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__NO_SNOOP_NEEDED 1967 //OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__SNOOP_MISS 1968 //OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 1969 //OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 1970 //OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__HITM_OTHER_CORE 1971 //OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__SUPPLIER_NONE__ANY_SNOOP 1972 //OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_HIT_M__SNOOP_NONE    1973 //OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_HIT_M__NO_SNOOP_NEEDED 1974 //OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_HIT_M__SNOOP_MISS    1975 //OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 1976 //OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT_M__HIT_OTHER_CORE_FWD 1977 //OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_HIT_M__HITM_OTHER_CORE 1978 //OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_HIT_M__ANY_SNOOP     1979 //OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_HIT_E__SNOOP_NONE    1980 //OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_HIT_E__NO_SNOOP_NEEDED 1981 //OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_HIT_E__SNOOP_MISS    1982 //OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 1983 //OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT_E__HIT_OTHER_CORE_FWD 1984 //OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_HIT_E__HITM_OTHER_CORE 1985 //OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_HIT_E__ANY_SNOOP     1986 //OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_HIT_S__SNOOP_NONE    1987 //OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_HIT_S__NO_SNOOP_NEEDED 1988 //OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_HIT_S__SNOOP_MISS    1989 //OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 1990 //OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT_S__HIT_OTHER_CORE_FWD 1991 //OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_HIT_S__HITM_OTHER_CORE 1992 //OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_HIT_S__ANY_SNOOP     1993 //OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_HIT_F__SNOOP_NONE    1994 //OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_HIT_F__NO_SNOOP_NEEDED 1995 //OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_HIT_F__SNOOP_MISS    1996 //OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 1997 //OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT_F__HIT_OTHER_CORE_FWD 1998 //OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_HIT_F__HITM_OTHER_CORE 1999 //OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_HIT_F__ANY_SNOOP     2000 //OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_HIT__SNOOP_NONE      2001 //OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_HIT__NO_SNOOP_NEEDED 2002 //OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_HIT__SNOOP_MISS      2003 //OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_HIT__HIT_OTHER_CORE_NO_FWD 2004 //OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT__HIT_OTHER_CORE_FWD 2005 //OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_HIT__HITM_OTHER_CORE 2006 //OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_HIT__ANY_SNOOP       2007 //OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 2008 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 2009 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 2010 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 2011 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 2012 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 2013 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 2014 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 2015 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 2016 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 2017 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 2018 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 2019 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 2020 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 2021 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__ALL_PF_RFO__L3_MISS__SNOOP_NONE     2022 //OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE
#define OCR__ALL_PF_RFO__L3_MISS__NO_SNOOP_NEEDED 2023 //OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OCR__ALL_PF_RFO__L3_MISS__SNOOP_MISS     2024 //OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS
#define OCR__ALL_PF_RFO__L3_MISS__HIT_OTHER_CORE_NO_FWD 2025 //OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_PF_RFO__L3_MISS__HIT_OTHER_CORE_FWD 2026 //OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__ALL_PF_RFO__L3_MISS__HITM_OTHER_CORE 2027 //OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE
#define OCR__ALL_PF_RFO__L3_MISS__ANY_SNOOP      2028 //OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 2029 //OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_NONE
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__NO_SNOOP_NEEDED 2030 //OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 2031 //OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_MISS
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 2032 //OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 2033 //OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__HITM_OTHER_CORE 2034 //OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 2035 //OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_HIT_M__SNOOP_NONE   2036 //OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_HIT_M__NO_SNOOP_NEEDED 2037 //OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_HIT_M__SNOOP_MISS   2038 //OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 2039 //OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT_M__HIT_OTHER_CORE_FWD 2040 //OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_HIT_M__HITM_OTHER_CORE 2041 //OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_HIT_M__ANY_SNOOP    2042 //OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_HIT_E__SNOOP_NONE   2043 //OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_HIT_E__NO_SNOOP_NEEDED 2044 //OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_HIT_E__SNOOP_MISS   2045 //OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 2046 //OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT_E__HIT_OTHER_CORE_FWD 2047 //OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_HIT_E__HITM_OTHER_CORE 2048 //OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_HIT_E__ANY_SNOOP    2049 //OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_HIT_S__SNOOP_NONE   2050 //OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_HIT_S__NO_SNOOP_NEEDED 2051 //OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_HIT_S__SNOOP_MISS   2052 //OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 2053 //OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT_S__HIT_OTHER_CORE_FWD 2054 //OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_HIT_S__HITM_OTHER_CORE 2055 //OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_HIT_S__ANY_SNOOP    2056 //OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_HIT_F__SNOOP_NONE   2057 //OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_HIT_F__NO_SNOOP_NEEDED 2058 //OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_HIT_F__SNOOP_MISS   2059 //OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 2060 //OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT_F__HIT_OTHER_CORE_FWD 2061 //OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_HIT_F__HITM_OTHER_CORE 2062 //OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_HIT_F__ANY_SNOOP    2063 //OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_HIT__SNOOP_NONE     2064 //OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_HIT__NO_SNOOP_NEEDED 2065 //OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_HIT__SNOOP_MISS     2066 //OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_HIT__HIT_OTHER_CORE_NO_FWD 2067 //OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT__HIT_OTHER_CORE_FWD 2068 //OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_HIT__HITM_OTHER_CORE 2069 //OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_HIT__ANY_SNOOP      2070 //OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 2071 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 2072 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 2073 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 2074 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 2075 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 2076 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 2077 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 2078 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 2079 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 2080 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 2081 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 2082 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 2083 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 2084 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__ALL_DATA_RD__L3_MISS__SNOOP_NONE    2085 //OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE
#define OCR__ALL_DATA_RD__L3_MISS__NO_SNOOP_NEEDED 2086 //OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED
#define OCR__ALL_DATA_RD__L3_MISS__SNOOP_MISS    2087 //OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS
#define OCR__ALL_DATA_RD__L3_MISS__HIT_OTHER_CORE_NO_FWD 2088 //OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_DATA_RD__L3_MISS__HIT_OTHER_CORE_FWD 2089 //OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__ALL_DATA_RD__L3_MISS__HITM_OTHER_CORE 2090 //OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE
#define OCR__ALL_DATA_RD__L3_MISS__ANY_SNOOP     2091 //OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP
#define OCR__ALL_RFO__SUPPLIER_NONE__SNOOP_NONE  2092 //OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_NONE
#define OCR__ALL_RFO__SUPPLIER_NONE__NO_SNOOP_NEEDED 2093 //OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__SUPPLIER_NONE__SNOOP_MISS  2094 //OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_MISS
#define OCR__ALL_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 2095 //OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 2096 //OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__SUPPLIER_NONE__HITM_OTHER_CORE 2097 //OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__ALL_RFO__SUPPLIER_NONE__ANY_SNOOP   2098 //OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP
#define OCR__ALL_RFO__L3_HIT_M__SNOOP_NONE       2099 //OCR.ALL_RFO.L3_HIT_M.SNOOP_NONE
#define OCR__ALL_RFO__L3_HIT_M__NO_SNOOP_NEEDED  2100 //OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_HIT_M__SNOOP_MISS       2101 //OCR.ALL_RFO.L3_HIT_M.SNOOP_MISS
#define OCR__ALL_RFO__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 2102 //OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_HIT_M__HIT_OTHER_CORE_FWD 2103 //OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_HIT_M__HITM_OTHER_CORE  2104 //OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_HIT_M__ANY_SNOOP        2105 //OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP
#define OCR__ALL_RFO__L3_HIT_E__SNOOP_NONE       2106 //OCR.ALL_RFO.L3_HIT_E.SNOOP_NONE
#define OCR__ALL_RFO__L3_HIT_E__NO_SNOOP_NEEDED  2107 //OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_HIT_E__SNOOP_MISS       2108 //OCR.ALL_RFO.L3_HIT_E.SNOOP_MISS
#define OCR__ALL_RFO__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 2109 //OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_HIT_E__HIT_OTHER_CORE_FWD 2110 //OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_HIT_E__HITM_OTHER_CORE  2111 //OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_HIT_E__ANY_SNOOP        2112 //OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP
#define OCR__ALL_RFO__L3_HIT_S__SNOOP_NONE       2113 //OCR.ALL_RFO.L3_HIT_S.SNOOP_NONE
#define OCR__ALL_RFO__L3_HIT_S__NO_SNOOP_NEEDED  2114 //OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_HIT_S__SNOOP_MISS       2115 //OCR.ALL_RFO.L3_HIT_S.SNOOP_MISS
#define OCR__ALL_RFO__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 2116 //OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_HIT_S__HIT_OTHER_CORE_FWD 2117 //OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_HIT_S__HITM_OTHER_CORE  2118 //OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_HIT_S__ANY_SNOOP        2119 //OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP
#define OCR__ALL_RFO__L3_HIT_F__SNOOP_NONE       2120 //OCR.ALL_RFO.L3_HIT_F.SNOOP_NONE
#define OCR__ALL_RFO__L3_HIT_F__NO_SNOOP_NEEDED  2121 //OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_HIT_F__SNOOP_MISS       2122 //OCR.ALL_RFO.L3_HIT_F.SNOOP_MISS
#define OCR__ALL_RFO__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 2123 //OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_HIT_F__HIT_OTHER_CORE_FWD 2124 //OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_HIT_F__HITM_OTHER_CORE  2125 //OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_HIT_F__ANY_SNOOP        2126 //OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP
#define OCR__ALL_RFO__L3_HIT__SNOOP_NONE         2127 //OCR.ALL_RFO.L3_HIT.SNOOP_NONE OCR.ALL_RFO.L3_HIT.SNOOP_NONE
#define OCR__ALL_RFO__L3_HIT__NO_SNOOP_NEEDED    2128 //OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_HIT__SNOOP_MISS         2129 //OCR.ALL_RFO.L3_HIT.SNOOP_MISS OCR.ALL_RFO.L3_HIT.SNOOP_MISS
#define OCR__ALL_RFO__L3_HIT__HIT_OTHER_CORE_NO_FWD 2130 //OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_HIT__HIT_OTHER_CORE_FWD 2131 //OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_HIT__HITM_OTHER_CORE    2132 //OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_HIT__ANY_SNOOP          2133 //OCR.ALL_RFO.L3_HIT.ANY_SNOOP OCR.ALL_RFO.L3_HIT.ANY_SNOOP OCR.ALL_RFO.L3_HIT.ANY_SNOOP
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 2134 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 2135 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 2136 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 2137 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 2138 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 2139 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 2140 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 2141 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 2142 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 2143 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 2144 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 2145 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 2146 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 2147 //OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__ALL_RFO__L3_MISS__SNOOP_NONE        2148 //OCR.ALL_RFO.L3_MISS.SNOOP_NONE OCR.ALL_RFO.L3_MISS.SNOOP_NONE
#define OCR__ALL_RFO__L3_MISS__NO_SNOOP_NEEDED   2149 //OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED
#define OCR__ALL_RFO__L3_MISS__SNOOP_MISS        2150 //OCR.ALL_RFO.L3_MISS.SNOOP_MISS OCR.ALL_RFO.L3_MISS.SNOOP_MISS
#define OCR__ALL_RFO__L3_MISS__HIT_OTHER_CORE_NO_FWD 2151 //OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_RFO__L3_MISS__HIT_OTHER_CORE_FWD 2152 //OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__ALL_RFO__L3_MISS__HITM_OTHER_CORE   2153 //OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE
#define OCR__ALL_RFO__L3_MISS__ANY_SNOOP         2154 //OCR.ALL_RFO.L3_MISS.ANY_SNOOP OCR.ALL_RFO.L3_MISS.ANY_SNOOP OCR.ALL_RFO.L3_MISS.ANY_SNOOP
#define OCR__ALL_READS__SUPPLIER_NONE__SNOOP_NONE 2155 //OCR.ALL_READS.SUPPLIER_NONE.SNOOP_NONE
#define OCR__ALL_READS__SUPPLIER_NONE__NO_SNOOP_NEEDED 2156 //OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED
#define OCR__ALL_READS__SUPPLIER_NONE__SNOOP_MISS 2157 //OCR.ALL_READS.SUPPLIER_NONE.SNOOP_MISS
#define OCR__ALL_READS__SUPPLIER_NONE__HIT_OTHER_CORE_NO_FWD 2158 //OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__SUPPLIER_NONE__HIT_OTHER_CORE_FWD 2159 //OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__SUPPLIER_NONE__HITM_OTHER_CORE 2160 //OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE
#define OCR__ALL_READS__SUPPLIER_NONE__ANY_SNOOP 2161 //OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP
#define OCR__ALL_READS__L3_HIT_M__SNOOP_NONE     2162 //OCR.ALL_READS.L3_HIT_M.SNOOP_NONE
#define OCR__ALL_READS__L3_HIT_M__NO_SNOOP_NEEDED 2163 //OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_HIT_M__SNOOP_MISS     2164 //OCR.ALL_READS.L3_HIT_M.SNOOP_MISS
#define OCR__ALL_READS__L3_HIT_M__HIT_OTHER_CORE_NO_FWD 2165 //OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_HIT_M__HIT_OTHER_CORE_FWD 2166 //OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_HIT_M__HITM_OTHER_CORE 2167 //OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_HIT_M__ANY_SNOOP      2168 //OCR.ALL_READS.L3_HIT_M.ANY_SNOOP  OCR.ALL_READS.L3_HIT_M.ANY_SNOOP
#define OCR__ALL_READS__L3_HIT_E__SNOOP_NONE     2169 //OCR.ALL_READS.L3_HIT_E.SNOOP_NONE
#define OCR__ALL_READS__L3_HIT_E__NO_SNOOP_NEEDED 2170 //OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_HIT_E__SNOOP_MISS     2171 //OCR.ALL_READS.L3_HIT_E.SNOOP_MISS
#define OCR__ALL_READS__L3_HIT_E__HIT_OTHER_CORE_NO_FWD 2172 //OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_HIT_E__HIT_OTHER_CORE_FWD 2173 //OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_HIT_E__HITM_OTHER_CORE 2174 //OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_HIT_E__ANY_SNOOP      2175 //OCR.ALL_READS.L3_HIT_E.ANY_SNOOP  OCR.ALL_READS.L3_HIT_E.ANY_SNOOP
#define OCR__ALL_READS__L3_HIT_S__SNOOP_NONE     2176 //OCR.ALL_READS.L3_HIT_S.SNOOP_NONE
#define OCR__ALL_READS__L3_HIT_S__NO_SNOOP_NEEDED 2177 //OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_HIT_S__SNOOP_MISS     2178 //OCR.ALL_READS.L3_HIT_S.SNOOP_MISS
#define OCR__ALL_READS__L3_HIT_S__HIT_OTHER_CORE_NO_FWD 2179 //OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_HIT_S__HIT_OTHER_CORE_FWD 2180 //OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_HIT_S__HITM_OTHER_CORE 2181 //OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_HIT_S__ANY_SNOOP      2182 //OCR.ALL_READS.L3_HIT_S.ANY_SNOOP  OCR.ALL_READS.L3_HIT_S.ANY_SNOOP
#define OCR__ALL_READS__L3_HIT_F__SNOOP_NONE     2183 //OCR.ALL_READS.L3_HIT_F.SNOOP_NONE
#define OCR__ALL_READS__L3_HIT_F__NO_SNOOP_NEEDED 2184 //OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_HIT_F__SNOOP_MISS     2185 //OCR.ALL_READS.L3_HIT_F.SNOOP_MISS
#define OCR__ALL_READS__L3_HIT_F__HIT_OTHER_CORE_NO_FWD 2186 //OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_HIT_F__HIT_OTHER_CORE_FWD 2187 //OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_HIT_F__HITM_OTHER_CORE 2188 //OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_HIT_F__ANY_SNOOP      2189 //OCR.ALL_READS.L3_HIT_F.ANY_SNOOP  OCR.ALL_READS.L3_HIT_F.ANY_SNOOP
#define OCR__ALL_READS__L3_HIT__SNOOP_NONE       2190 //OCR.ALL_READS.L3_HIT.SNOOP_NONE OCR.ALL_READS.L3_HIT.SNOOP_NONE
#define OCR__ALL_READS__L3_HIT__NO_SNOOP_NEEDED  2191 //OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_HIT__SNOOP_MISS       2192 //OCR.ALL_READS.L3_HIT.SNOOP_MISS OCR.ALL_READS.L3_HIT.SNOOP_MISS
#define OCR__ALL_READS__L3_HIT__HIT_OTHER_CORE_NO_FWD 2193 //OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_HIT__HIT_OTHER_CORE_FWD 2194 //OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_HIT__HITM_OTHER_CORE  2195 //OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_HIT__ANY_SNOOP        2196 //OCR.ALL_READS.L3_HIT.ANY_SNOOP OCR.ALL_READS.L3_HIT.ANY_SNOOP OCR.ALL_READS.L3_HIT.ANY_SNOOP
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__SNOOP_NONE 2197 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_NONE
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__NO_SNOOP_NEEDED 2198 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__SNOOP_MISS 2199 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_NO_FWD 2200 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__HIT_OTHER_CORE_FWD 2201 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__HITM_OTHER_CORE 2202 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__ANY_SNOOP 2203 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_NONE 2204 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__NO_SNOOP_NEEDED 2205 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__SNOOP_MISS 2206 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_NO_FWD 2207 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__HIT_OTHER_CORE_FWD 2208 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__HITM_OTHER_CORE 2209 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_MISS_REMOTE_HOP1_DRAM__ANY_SNOOP 2210 //OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP
#define OCR__ALL_READS__L3_MISS__SNOOP_NONE      2211 //OCR.ALL_READS.L3_MISS.SNOOP_NONE OCR.ALL_READS.L3_MISS.SNOOP_NONE
#define OCR__ALL_READS__L3_MISS__NO_SNOOP_NEEDED 2212 //OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED
#define OCR__ALL_READS__L3_MISS__SNOOP_MISS      2213 //OCR.ALL_READS.L3_MISS.SNOOP_MISS OCR.ALL_READS.L3_MISS.SNOOP_MISS
#define OCR__ALL_READS__L3_MISS__HIT_OTHER_CORE_NO_FWD 2214 //OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD
#define OCR__ALL_READS__L3_MISS__HIT_OTHER_CORE_FWD 2215 //OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD
#define OCR__ALL_READS__L3_MISS__HITM_OTHER_CORE 2216 //OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE
#define OCR__ALL_READS__L3_MISS__ANY_SNOOP       2217 //OCR.ALL_READS.L3_MISS.ANY_SNOOP OCR.ALL_READS.L3_MISS.ANY_SNOOP OCR.ALL_READS.L3_MISS.ANY_SNOOP
#define OCR__DEMAND_DATA_RD__ANY_RESPONSE        2218 //Counts demand data reads have any response type.
#define OCR__DEMAND_DATA_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2219 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2220 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2221 //Counts demand data reads
#define OCR__DEMAND_RFO__ANY_RESPONSE            2222 //Counts all demand data writes (RFOs) have any response type.
#define OCR__DEMAND_RFO__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2223 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2224 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_HIT_WITH_FWD 2225 //Counts all demand data writes (RFOs)
#define OCR__DEMAND_CODE_RD__ANY_RESPONSE        2226 //Counts all demand code reads have any response type.
#define OCR__DEMAND_CODE_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2227 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2228 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2229 //Counts all demand code reads
#define OCR__PF_L2_DATA_RD__ANY_RESPONSE         2230 //Counts prefetch (that bring data to L2) data reads have any response type.
#define OCR__PF_L2_DATA_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2231 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2232 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L2_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2233 //Counts prefetch (that bring data to L2) data reads
#define OCR__PF_L2_RFO__ANY_RESPONSE             2234 //Counts all prefetch (that bring data to L2) RFOs have any response type.
#define OCR__PF_L2_RFO__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2235 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L2_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2236 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L2_RFO__L3_HIT__SNOOP_HIT_WITH_FWD 2237 //Counts all prefetch (that bring data to L2) RFOs
#define OCR__PF_L3_DATA_RD__ANY_RESPONSE         2238 //Counts all prefetch (that bring data to LLC only) data reads have any response type.
#define OCR__PF_L3_DATA_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2239 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2240 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L3_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2241 //Counts all prefetch (that bring data to LLC only) data reads
#define OCR__PF_L3_RFO__ANY_RESPONSE             2242 //Counts all prefetch (that bring data to LLC only) RFOs have any response type.
#define OCR__PF_L3_RFO__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2243 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L3_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2244 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L3_RFO__L3_HIT__SNOOP_HIT_WITH_FWD 2245 //Counts all prefetch (that bring data to LLC only) RFOs
#define OCR__PF_L1D_AND_SW__ANY_RESPONSE         2246 //Counts L1 data cache hardware prefetch requests and software prefetch requests have any response type.
#define OCR__PF_L1D_AND_SW__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2247 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2248 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__PF_L1D_AND_SW__L3_HIT__SNOOP_HIT_WITH_FWD 2249 //Counts L1 data cache hardware prefetch requests and software prefetch requests
#define OCR__OTHER__ANY_RESPONSE                 2250 //Counts any other requests have any response type.
#define OCR__OTHER__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2251 //Counts any other requests OCR.OTHER.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2252 //Counts any other requests OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__OTHER__L3_HIT__SNOOP_HIT_WITH_FWD   2253 //Counts any other requests
#define OCR__ALL_PF_DATA_RD__ANY_RESPONSE        2254 //OCR.ALL_PF_DATA_RD.ANY_RESPONSE have any response type.
#define OCR__ALL_PF_DATA_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2255 //OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2256 //OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_PF_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2257 //OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OCR__ALL_PF_RFO__ANY_RESPONSE            2258 //OCR.ALL_PF_RFO.ANY_RESPONSE have any response type.
#define OCR__ALL_PF_RFO__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2259 //OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_PF_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2260 //OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_PF_RFO__L3_HIT__SNOOP_HIT_WITH_FWD 2261 //OCR.ALL_PF_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OCR__ALL_DATA_RD__ANY_RESPONSE           2262 //OCR.ALL_DATA_RD.ANY_RESPONSE have any response type.
#define OCR__ALL_DATA_RD__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2263 //OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2264 //OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD 2265 //OCR.ALL_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD
#define OCR__ALL_RFO__ANY_RESPONSE               2266 //OCR.ALL_RFO.ANY_RESPONSE have any response type.
#define OCR__ALL_RFO__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2267 //OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2268 //OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_RFO__L3_HIT__SNOOP_HIT_WITH_FWD 2269 //OCR.ALL_RFO.L3_HIT.SNOOP_HIT_WITH_FWD
#define OCR__ALL_READS__ANY_RESPONSE             2270 //OCR.ALL_READS.ANY_RESPONSE have any response type.
#define OCR__ALL_READS__L3_MISS_REMOTE_DRAM__SNOOP_MISS_OR_NO_FWD 2271 //OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_READS__L3_MISS_LOCAL_DRAM__SNOOP_MISS_OR_NO_FWD 2272 //OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD
#define OCR__ALL_READS__L3_HIT__SNOOP_HIT_WITH_FWD 2273 //OCR.ALL_READS.L3_HIT.SNOOP_HIT_WITH_FWD
#define OCR__DEMAND_DATA_RD__L3_MISS__REMOTE_HITM 2274 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HITM
#define OCR__DEMAND_RFO__L3_MISS__REMOTE_HITM    2275 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.REMOTE_HITM
#define OCR__DEMAND_CODE_RD__L3_MISS__REMOTE_HITM 2276 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HITM
#define OCR__PF_L2_DATA_RD__L3_MISS__REMOTE_HITM 2277 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HITM
#define OCR__PF_L2_RFO__L3_MISS__REMOTE_HITM     2278 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.REMOTE_HITM
#define OCR__PF_L3_DATA_RD__L3_MISS__REMOTE_HITM 2279 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HITM
#define OCR__PF_L3_RFO__L3_MISS__REMOTE_HITM     2280 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.REMOTE_HITM
#define OCR__PF_L1D_AND_SW__L3_MISS__REMOTE_HITM 2281 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HITM
#define OCR__OTHER__L3_MISS__REMOTE_HITM         2282 //Counts any other requests OCR.OTHER.L3_MISS.REMOTE_HITM
#define OCR__ALL_PF_DATA_RD__L3_MISS__REMOTE_HITM 2283 //OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM
#define OCR__ALL_PF_RFO__L3_MISS__REMOTE_HITM    2284 //OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM
#define OCR__ALL_DATA_RD__L3_MISS__REMOTE_HITM   2285 //OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM
#define OCR__ALL_RFO__L3_MISS__REMOTE_HITM       2286 //OCR.ALL_RFO.L3_MISS.REMOTE_HITM OCR.ALL_RFO.L3_MISS.REMOTE_HITM
#define OCR__ALL_READS__L3_MISS__REMOTE_HITM     2287 //OCR.ALL_READS.L3_MISS.REMOTE_HITM OCR.ALL_READS.L3_MISS.REMOTE_HITM
#define OCR__DEMAND_DATA_RD__L3_MISS__REMOTE_HIT_FORWARD 2288 //Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__DEMAND_RFO__L3_MISS__REMOTE_HIT_FORWARD 2289 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__DEMAND_CODE_RD__L3_MISS__REMOTE_HIT_FORWARD 2290 //Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__PF_L2_DATA_RD__L3_MISS__REMOTE_HIT_FORWARD 2291 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__PF_L2_RFO__L3_MISS__REMOTE_HIT_FORWARD 2292 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__PF_L3_DATA_RD__L3_MISS__REMOTE_HIT_FORWARD 2293 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__PF_L3_RFO__L3_MISS__REMOTE_HIT_FORWARD 2294 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__PF_L1D_AND_SW__L3_MISS__REMOTE_HIT_FORWARD 2295 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__OTHER__L3_MISS__REMOTE_HIT_FORWARD  2296 //Counts any other requests OCR.OTHER.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__ALL_PF_DATA_RD__L3_MISS__REMOTE_HIT_FORWARD 2297 //OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__ALL_PF_RFO__L3_MISS__REMOTE_HIT_FORWARD 2298 //OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__ALL_DATA_RD__L3_MISS__REMOTE_HIT_FORWARD 2299 //OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__ALL_RFO__L3_MISS__REMOTE_HIT_FORWARD 2300 //OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__ALL_READS__L3_MISS__REMOTE_HIT_FORWARD 2301 //OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD
#define OCR__DEMAND_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2302 //Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__DEMAND_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2303 //Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__DEMAND_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2304 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__DEMAND_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2305 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__DEMAND_CODE_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2306 //Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__DEMAND_CODE_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2307 //Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__PF_L2_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2308 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__PF_L2_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2309 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__PF_L2_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2310 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__PF_L2_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2311 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__PF_L3_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2312 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__PF_L3_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2313 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__PF_L3_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2314 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__PF_L3_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2315 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__PF_L1D_AND_SW__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2316 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__PF_L1D_AND_SW__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2317 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__OTHER__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2318 //Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__OTHER__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2319 //Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__ALL_PF_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2320 //OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__ALL_PF_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2321 //OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__ALL_PF_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2322 //OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__ALL_PF_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2323 //OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__ALL_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2324 //OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__ALL_DATA_RD__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2325 //OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__ALL_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2326 //OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__ALL_RFO__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2327 //OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__ALL_READS__PMM_HIT_LOCAL_PMM__SNOOP_NOT_NEEDED 2328 //OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED
#define OCR__ALL_READS__PMM_HIT_LOCAL_PMM__SNOOP_NONE 2329 //OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE
#define OCR__DEMAND_DATA_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2330 //Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__DEMAND_RFO__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2331 //Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__DEMAND_CODE_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2332 //Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__PF_L2_DATA_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2333 //Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__PF_L2_RFO__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2334 //Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__PF_L3_DATA_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2335 //Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__PF_L3_RFO__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2336 //Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__PF_L1D_AND_SW__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2337 //Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__OTHER__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2338 //Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__ALL_PF_DATA_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2339 //OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__ALL_PF_RFO__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2340 //OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__ALL_DATA_RD__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2341 //OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__ALL_RFO__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2342 //OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define OCR__ALL_READS__PMM_HIT_LOCAL_PMM__ANY_SNOOP 2343 //OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP
#define ICACHE_16B__IFDATA_STALL_C1_E1 2344 //
#define FP_ARITH_INST_RETIRED__128B_PACKED_DOUBLE_U0XFC  2345//
#define L1D_PEND_MISS__FB_FULL_C1 2346 //
#define DTLB_LOAD_MISSES__STLB_HIT_C1 2347 //OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP
// fake events
// event fields
typedef struct {
    int event_code;
    int umask;
    const char *event_name;
    const char *brief_descrip;
    int cmask;
    int inv;
    int edge;
} pmc_event_t;

// static event list
static pmc_event_t pmc_event_list[] = {
    {
        0x00,
        0x01,
        "INST_RETIRED.ANY",
        "Instructions retired from execution.",
        0,
        0,
        0
    },
    {
        0x00,
        0x02,
        "CPU_CLK_UNHALTED.THREAD",
        "Core cycles when the thread is not in halt state",
        0,
        0,
        0
    },
    {
        0x00,
        0x02,
        "CPU_CLK_UNHALTED.THREAD_ANY",
        "Core cycles when at least one thread on the physical core is not in halt state.",
        0,
        0,
        0
    },
    {
        0x00,
        0x03,
        "CPU_CLK_UNHALTED.REF_TSC",
        "Reference cycles when the core is not in halt state.",
        0,
        0,
        0
    },
    {
        0x03,
        0x02,
        "LD_BLOCKS.STORE_FORWARD",
        "Loads blocked due to overlapping with a preceding store that cannot be forwarded.",
        0,
        0,
        0
    },
    {
        0x03,
        0x08,
        "LD_BLOCKS.NO_SR",
        "The number of times that split load operations are temporarily blocked because all resources for handling the split accesses are in use",
        0,
        0,
        0
    },
    {
        0x07,
        0x01,
        "LD_BLOCKS_PARTIAL.ADDRESS_ALIAS",
        "False dependencies in MOB due to partial compare on address.",
        0,
        0,
        0
    },
    {
        0x08,
        0x01,
        "DTLB_LOAD_MISSES.MISS_CAUSES_A_WALK",
        "Load misses in all DTLB levels that cause page walks",
        0,
        0,
        0
    },
    {
        0x08,
        0x02,
        "DTLB_LOAD_MISSES.WALK_COMPLETED_4K",
        "Page walk completed due to a demand data load to a 4K page",
        0,
        0,
        0
    },
    {
        0x08,
        0x04,
        "DTLB_LOAD_MISSES.WALK_COMPLETED_2M_4M",
        "Page walk completed due to a demand data load to a 2M/4M page",
        0,
        0,
        0
    },
    {
        0x08,
        0x08,
        "DTLB_LOAD_MISSES.WALK_COMPLETED_1G",
        "Page walk completed due to a demand data load to a 1G page",
        0,
        0,
        0
    },
    {
        0x08,
        0x0e,
        "DTLB_LOAD_MISSES.WALK_COMPLETED",
        "Load miss in all TLB levels causes a page walk that completes. (All page sizes)",
        0,
        0,
        0
    },
    {
        0x08,
        0x10,
        "DTLB_LOAD_MISSES.WALK_PENDING",
        "Counts 1 per cycle for each PMH that is busy with a page walk for a load. EPT page walk duration are excluded in Skylake.",
        0,
        0,
        0
    },
    {
        0x08,
        0x10,
        "DTLB_LOAD_MISSES.WALK_ACTIVE",
        "Cycles when at least one PMH is busy with a page walk for a load. EPT page walk duration are excluded in Skylake.",
        1,
        0,
        0
    },
    {
        0x08,
        0x20,
        "DTLB_LOAD_MISSES.STLB_HIT",
        "Loads that miss the DTLB and hit the STLB.",
        0,
        0,
        0
    },
    {
        0x0D,
        0x01,
        "INT_MISC.RECOVERY_CYCLES",
        "Core cycles the allocator was stalled due to recovery from earlier clear event for this thread (e.g. misprediction or memory nuke)",
        0,
        0,
        0
    },
    {
        0x0D,
        0x01,
        "INT_MISC.RECOVERY_CYCLES_ANY",
        "Core cycles the allocator was stalled due to recovery from earlier clear event for any thread running on the physical core (e.g. misprediction or memory nuke).",
        0,
        0,
        0
    },
    {
        0x0D,
        0x01,
        "INT_MISC.CLEARS_COUNT",
        "Clears speculative count",
        1,
        0,
        1
    },
    {
        0x0D,
        0x80,
        "INT_MISC.CLEAR_RESTEER_CYCLES",
        "Cycles the issue-stage is waiting for front-end to fetch from resteered path following branch misprediction or machine clear events.",
        0,
        0,
        0
    },
    {
        0x0E,
        0x01,
        "UOPS_ISSUED.ANY",
        "Uops that Resource Allocation Table (RAT) issues to Reservation Station (RS)",
        0,
        0,
        0
    },
    {
        0x0E,
        0x01,
        "UOPS_ISSUED.STALL_CYCLES",
        "Cycles when Resource Allocation Table (RAT) does not issue Uops to Reservation Station (RS) for the thread",
        1,
        1,
        0
    },
    {
        0x0E,
        0x02,
        "UOPS_ISSUED.VECTOR_WIDTH_MISMATCH",
        "Uops inserted at issue-stage in order to preserve upper bits of vector registers.",
        0,
        0,
        0
    },
    {
        0x0E,
        0x20,
        "UOPS_ISSUED.SLOW_LEA",
        "Number of slow LEA uops being allocated. A uop is generally considered SlowLea if it has 3 sources (e.g. 2 sources + immediate) regardless if as a result of LEA instruction or not.",
        0,
        0,
        0
    },
    {
        0x14,
        0x01,
        "ARITH.DIVIDER_ACTIVE",
        "Cycles when divide unit is busy executing divide or square root operations. Accounts for integer and floating-point operations.",
        1,
        0,
        0
    },
    {
        0x24,
        0x21,
        "L2_RQSTS.DEMAND_DATA_RD_MISS",
        "Demand Data Read miss L2, no rejects",
        0,
        0,
        0
    },
    {
        0x24,
        0x22,
        "L2_RQSTS.RFO_MISS",
        "RFO requests that miss L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0x24,
        "L2_RQSTS.CODE_RD_MISS",
        "L2 cache misses when fetching instructions",
        0,
        0,
        0
    },
    {
        0x24,
        0x27,
        "L2_RQSTS.ALL_DEMAND_MISS",
        "Demand requests that miss L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0x38,
        "L2_RQSTS.PF_MISS",
        "Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that miss L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0x3F,
        "L2_RQSTS.MISS",
        "All requests that miss L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xc1,
        "L2_RQSTS.DEMAND_DATA_RD_HIT",
        "Demand Data Read requests that hit L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xc2,
        "L2_RQSTS.RFO_HIT",
        "RFO requests that hit L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xc4,
        "L2_RQSTS.CODE_RD_HIT",
        "L2 cache hits when fetching instructions, code reads.",
        0,
        0,
        0
    },
    {
        0x24,
        0xd8,
        "L2_RQSTS.PF_HIT",
        "Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that hit L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xE1,
        "L2_RQSTS.ALL_DEMAND_DATA_RD",
        "Demand Data Read requests",
        0,
        0,
        0
    },
    {
        0x24,
        0xE2,
        "L2_RQSTS.ALL_RFO",
        "RFO requests to L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xE4,
        "L2_RQSTS.ALL_CODE_RD",
        "L2 code requests",
        0,
        0,
        0
    },
    {
        0x24,
        0xe7,
        "L2_RQSTS.ALL_DEMAND_REFERENCES",
        "Demand requests to L2 cache",
        0,
        0,
        0
    },
    {
        0x24,
        0xF8,
        "L2_RQSTS.ALL_PF",
        "Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches",
        0,
        0,
        0
    },
    {
        0x24,
        0xFF,
        "L2_RQSTS.REFERENCES",
        "All L2 requests",
        0,
        0,
        0
    },
    {
        0x28,
        0x07,
        "CORE_POWER.LVL0_TURBO_LICENSE",
        "Core cycles where the core was running in a manner where Turbo may be clipped to the Non-AVX turbo schedule.",
        0,
        0,
        0
    },
    {
        0x28,
        0x18,
        "CORE_POWER.LVL1_TURBO_LICENSE",
        "Core cycles where the core was running in a manner where Turbo may be clipped to the AVX2 turbo schedule.",
        0,
        0,
        0
    },
    {
        0x28,
        0x20,
        "CORE_POWER.LVL2_TURBO_LICENSE",
        "Core cycles where the core was running in a manner where Turbo may be clipped to the AVX512 turbo schedule.",
        0,
        0,
        0
    },
    {
        0x28,
        0x40,
        "CORE_POWER.THROTTLE",
        "Core cycles the core was throttled due to a pending power level request.",
        0,
        0,
        0
    },
    {
        0x2E,
        0x41,
        "LONGEST_LAT_CACHE.MISS",
        "Core-originated cacheable demand requests missed L3",
        0,
        0,
        0
    },
    {
        0x2E,
        0x4F,
        "LONGEST_LAT_CACHE.REFERENCE",
        "Core-originated cacheable demand requests that refer to L3",
        0,
        0,
        0
    },
    {
        0x32,
        0x01,
        "SW_PREFETCH_ACCESS.NTA",
        "Number of PREFETCHNTA instructions executed.",
        0,
        0,
        0
    },
    {
        0x32,
        0x02,
        "SW_PREFETCH_ACCESS.T0",
        "Number of PREFETCHT0 instructions executed.",
        0,
        0,
        0
    },
    {
        0x32,
        0x04,
        "SW_PREFETCH_ACCESS.T1_T2",
        "Number of PREFETCHT1 or PREFETCHT2 instructions executed.",
        0,
        0,
        0
    },
    {
        0x32,
        0x08,
        "SW_PREFETCH_ACCESS.PREFETCHW",
        "Number of PREFETCHW instructions executed.",
        0,
        0,
        0
    },
    {
        0x32,
        0x0F,
        "SW_PREFETCH_ACCESS.ANY",
        "Counts the number of PREFETCHNTA, PREFETCHW, PREFETCHT0, PREFETCHT1 or PREFETCHT2 instructions executed.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x00,
        "CPU_CLK_UNHALTED.THREAD_P",
        "Thread cycles when thread is not in halt state",
        0,
        0,
        0
    },
    {
        0x3C,
        0x00,
        "CPU_CLK_UNHALTED.THREAD_P_ANY",
        "Core cycles when at least one thread on the physical core is not in halt state.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x00,
        "CPU_CLK_UNHALTED.RING0_TRANS",
        "Counts when there is a transition from ring 1, 2 or 3 to ring 0.",
        1,
        0,
        1
    },
    {
        0x3C,
        0x01,
        "CPU_CLK_THREAD_UNHALTED.REF_XCLK",
        "Core crystal clock cycles when the thread is unhalted.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x01,
        "CPU_CLK_THREAD_UNHALTED.REF_XCLK_ANY",
        "Core crystal clock cycles when at least one thread on the physical core is unhalted.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x01,
        "CPU_CLK_UNHALTED.REF_XCLK",
        "Core crystal clock cycles when the thread is unhalted.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x01,
        "CPU_CLK_UNHALTED.REF_XCLK_ANY",
        "Core crystal clock cycles when at least one thread on the physical core is unhalted.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x02,
        "CPU_CLK_THREAD_UNHALTED.ONE_THREAD_ACTIVE",
        "Core crystal clock cycles when this thread is unhalted and the other thread is halted.",
        0,
        0,
        0
    },
    {
        0x3C,
        0x02,
        "CPU_CLK_UNHALTED.ONE_THREAD_ACTIVE",
        "Core crystal clock cycles when this thread is unhalted and the other thread is halted.",
        0,
        0,
        0
    },
    {
        0x48,
        0x01,
        "L1D_PEND_MISS.PENDING",
        "L1D miss outstandings duration in cycles",
        0,
        0,
        0
    },
    {
        0x48,
        0x01,
        "L1D_PEND_MISS.PENDING_CYCLES",
        "Cycles with L1D load Misses outstanding.",
        1,
        0,
        0
    },
    {
        0x48,
        0x01,
        "L1D_PEND_MISS.PENDING_CYCLES_ANY",
        "Cycles with L1D load Misses outstanding from any thread on physical core.",
        1,
        0,
        0
    },
    {
        0x48,
        0x02,
        "L1D_PEND_MISS.FB_FULL",
        "Number of times a request needed a FB entry but there was no entry available for it. That is the FB unavailability was dominant reason for blocking the request. A request includes cacheable/uncacheable demands that is load, store or SW prefetch.",
        0,
        0,
        0
    },
    {
        0x49,
        0x01,
        "DTLB_STORE_MISSES.MISS_CAUSES_A_WALK",
        "Store misses in all DTLB levels that cause page walks",
        0,
        0,
        0
    },
    {
        0x49,
        0x02,
        "DTLB_STORE_MISSES.WALK_COMPLETED_4K",
        "Page walk completed due to a demand data store to a 4K page",
        0,
        0,
        0
    },
    {
        0x49,
        0x04,
        "DTLB_STORE_MISSES.WALK_COMPLETED_2M_4M",
        "Page walk completed due to a demand data store to a 2M/4M page",
        0,
        0,
        0
    },
    {
        0x49,
        0x08,
        "DTLB_STORE_MISSES.WALK_COMPLETED_1G",
        "Page walk completed due to a demand data store to a 1G page",
        0,
        0,
        0
    },
    {
        0x49,
        0x0e,
        "DTLB_STORE_MISSES.WALK_COMPLETED",
        "Store misses in all TLB levels causes a page walk that completes. (All page sizes)",
        0,
        0,
        0
    },
    {
        0x49,
        0x10,
        "DTLB_STORE_MISSES.WALK_PENDING",
        "Counts 1 per cycle for each PMH that is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.",
        0,
        0,
        0
    },
    {
        0x49,
        0x10,
        "DTLB_STORE_MISSES.WALK_ACTIVE",
        "Cycles when at least one PMH is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.",
        1,
        0,
        0
    },
    {
        0x49,
        0x20,
        "DTLB_STORE_MISSES.STLB_HIT",
        "Stores that miss the DTLB and hit the STLB.",
        0,
        0,
        0
    },
    {
        0x4C,
        0x01,
        "LOAD_HIT_PRE.SW_PF",
        "Demand load dispatches that hit L1D fill buffer (FB) allocated for software prefetch.",
        0,
        0,
        0
    },
    {
        0x4f,
        0x10,
        "EPT.WALK_PENDING",
        "Counts 1 per cycle for each PMH that is busy with a EPT (Extended Page Table) walk for any request type.",
        0,
        0,
        0
    },
    {
        0x51,
        0x01,
        "L1D.REPLACEMENT",
        "L1D data line replacements",
        0,
        0,
        0
    },
    {
        0x54,
        0x01,
        "TX_MEM.ABORT_CONFLICT",
        "Number of times a transactional abort was signaled due to a data conflict on a transactionally accessed address",
        0,
        0,
        0
    },
    {
        0x54,
        0x02,
        "TX_MEM.ABORT_CAPACITY",
        "Number of times a transactional abort was signaled due to a data capacity limitation for transactional reads or writes.",
        0,
        0,
        0
    },
    {
        0x54,
        0x04,
        "TX_MEM.ABORT_HLE_STORE_TO_ELIDED_LOCK",
        "Number of times a HLE transactional region aborted due to a non XRELEASE prefixed instruction writing to an elided lock in the elision buffer",
        0,
        0,
        0
    },
    {
        0x54,
        0x08,
        "TX_MEM.ABORT_HLE_ELISION_BUFFER_NOT_EMPTY",
        "Number of times an HLE transactional execution aborted due to NoAllocatedElisionBuffer being non-zero.",
        0,
        0,
        0
    },
    {
        0x54,
        0x10,
        "TX_MEM.ABORT_HLE_ELISION_BUFFER_MISMATCH",
        "Number of times an HLE transactional execution aborted due to XRELEASE lock not satisfying the address and value requirements in the elision buffer",
        0,
        0,
        0
    },
    {
        0x54,
        0x20,
        "TX_MEM.ABORT_HLE_ELISION_BUFFER_UNSUPPORTED_ALIGNMENT",
        "Number of times an HLE transactional execution aborted due to an unsupported read alignment from the elision buffer.",
        0,
        0,
        0
    },
    {
        0x54,
        0x40,
        "TX_MEM.HLE_ELISION_BUFFER_FULL",
        "Number of times HLE lock could not be elided due to ElisionBufferAvailable being zero.",
        0,
        0,
        0
    },
    {
        0x55,
        0x01,
        "INST_DECODED.DECODERS",
        "Instruction decoders utilized in a cycle",
        0,
        0,
        0
    },
    {
        0x59,
        0x01,
        "PARTIAL_RAT_STALLS.SCOREBOARD",
        "Cycles where the pipeline is stalled due to serializing operations.",
        0,
        0,
        0
    },
    {
        0x5d,
        0x01,
        "TX_EXEC.MISC1",
        "Counts the number of times a class of instructions that may cause a transactional abort was executed. Since this is the count of execution, it may not always cause a transactional abort.",
        0,
        0,
        0
    },
    {
        0x5d,
        0x02,
        "TX_EXEC.MISC2",
        "Counts the number of times a class of instructions (e.g., vzeroupper) that may cause a transactional abort was executed inside a transactional region",
        0,
        0,
        0
    },
    {
        0x5d,
        0x04,
        "TX_EXEC.MISC3",
        "Counts the number of times an instruction execution caused the transactional nest count supported to be exceeded",
        0,
        0,
        0
    },
    {
        0x5d,
        0x08,
        "TX_EXEC.MISC4",
        "Counts the number of times a XBEGIN instruction was executed inside an HLE transactional region.",
        0,
        0,
        0
    },
    {
        0x5d,
        0x10,
        "TX_EXEC.MISC5",
        "Counts the number of times an HLE XACQUIRE instruction was executed inside an RTM transactional region",
        0,
        0,
        0
    },
    {
        0x5E,
        0x01,
        "RS_EVENTS.EMPTY_CYCLES",
        "Cycles when Reservation Station (RS) is empty for the thread",
        0,
        0,
        0
    },
    {
        0x5E,
        0x01,
        "RS_EVENTS.EMPTY_END",
        "Counts end of periods where the Reservation Station (RS) was empty. Could be useful to precisely locate Frontend Latency Bound issues.",
        1,
        1,
        1
    },
    {
        0x60,
        0x01,
        "OFFCORE_REQUESTS_OUTSTANDING.DEMAND_DATA_RD",
        "Offcore outstanding Demand Data Read transactions in uncore queue.",
        0,
        0,
        0
    },
    {
        0x60,
        0x01,
        "OFFCORE_REQUESTS_OUTSTANDING.CYCLES_WITH_DEMAND_DATA_RD",
        "Cycles when offcore outstanding Demand Data Read transactions are present in SuperQueue (SQ), queue to uncore",
        1,
        0,
        0
    },
    {
        0x60,
        0x01,
        "OFFCORE_REQUESTS_OUTSTANDING.DEMAND_DATA_RD_GE_6",
        "Cycles with at least 6 offcore outstanding Demand Data Read transactions in uncore queue.",
        6,
        0,
        0
    },
    {
        0x60,
        0x02,
        "OFFCORE_REQUESTS_OUTSTANDING.DEMAND_CODE_RD",
        "Offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore, every cycle.",
        0,
        0,
        0
    },
    {
        0x60,
        0x02,
        "OFFCORE_REQUESTS_OUTSTANDING.CYCLES_WITH_DEMAND_CODE_RD",
        "Cycles with offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore.",
        1,
        0,
        0
    },
    {
        0x60,
        0x04,
        "OFFCORE_REQUESTS_OUTSTANDING.DEMAND_RFO",
        "Offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore, every cycle",
        0,
        0,
        0
    },
    {
        0x60,
        0x04,
        "OFFCORE_REQUESTS_OUTSTANDING.CYCLES_WITH_DEMAND_RFO",
        "Cycles with offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore.",
        1,
        0,
        0
    },
    {
        0x60,
        0x08,
        "OFFCORE_REQUESTS_OUTSTANDING.ALL_DATA_RD",
        "Offcore outstanding cacheable Core Data Read transactions in SuperQueue (SQ), queue to uncore",
        0,
        0,
        0
    },
    {
        0x60,
        0x08,
        "OFFCORE_REQUESTS_OUTSTANDING.CYCLES_WITH_DATA_RD",
        "Cycles when offcore outstanding cacheable Core Data Read transactions are present in SuperQueue (SQ), queue to uncore.",
        1,
        0,
        0
    },
    {
        0x60,
        0x10,
        "OFFCORE_REQUESTS_OUTSTANDING.L3_MISS_DEMAND_DATA_RD",
        "Counts number of Offcore outstanding Demand Data Read requests that miss L3 cache in the superQ every cycle.",
        0,
        0,
        0
    },
    {
        0x60,
        0x10,
        "OFFCORE_REQUESTS_OUTSTANDING.CYCLES_WITH_L3_MISS_DEMAND_DATA_RD",
        "Cycles with at least 1 Demand Data Read requests who miss L3 cache in the superQ.",
        1,
        0,
        0
    },
    {
        0x60,
        0x10,
        "OFFCORE_REQUESTS_OUTSTANDING.L3_MISS_DEMAND_DATA_RD_GE_6",
        "Cycles with at least 6 Demand Data Read requests that miss L3 cache in the superQ.",
        6,
        0,
        0
    },
    {
        0x79,
        0x04,
        "IDQ.MITE_UOPS",
        "Uops delivered to Instruction Decode Queue (IDQ) from MITE path",
        0,
        0,
        0
    },
    {
        0x79,
        0x04,
        "IDQ.MITE_CYCLES",
        "Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from MITE path",
        1,
        0,
        0
    },
    {
        0x79,
        0x08,
        "IDQ.DSB_UOPS",
        "Uops delivered to Instruction Decode Queue (IDQ) from the Decode Stream Buffer (DSB) path",
        0,
        0,
        0
    },
    {
        0x79,
        0x08,
        "IDQ.DSB_CYCLES",
        "Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from Decode Stream Buffer (DSB) path",
        1,
        0,
        0
    },
    {
        0x79,
        0x10,
        "IDQ.MS_DSB_CYCLES",
        "Cycles when uops initiated by Decode Stream Buffer (DSB) are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy",
        1,
        0,
        0
    },
    {
        0x79,
        0x18,
        "IDQ.ALL_DSB_CYCLES_4_UOPS",
        "Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.DSB_CYCLES_OK]",
        4,
        0,
        0
    },
    {
        0x79,
        0x18,
        "IDQ.ALL_DSB_CYCLES_ANY_UOPS",
        "Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.DSB_CYCLES_ANY]",
        1,
        0,
        0
    },
    {
        0x79,
        0x18,
        "IDQ.DSB_CYCLES_OK",
        "Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.ALL_DSB_CYCLES_4_UOPS]",
        4,
        0,
        0
    },
    {
        0x79,
        0x18,
        "IDQ.DSB_CYCLES_ANY",
        "Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.ALL_DSB_CYCLES_ANY_UOPS]",
        1,
        0,
        0
    },
    {
        0x79,
        0x20,
        "IDQ.MS_MITE_UOPS",
        "Uops initiated by MITE and delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy",
        0,
        0,
        0
    },
    {
        0x79,
        0x24,
        "IDQ.ALL_MITE_CYCLES_4_UOPS",
        "Cycles MITE is delivering 4 Uops",
        4,
        0,
        0
    },
    {
        0x79,
        0x24,
        "IDQ.ALL_MITE_CYCLES_ANY_UOPS",
        "Cycles MITE is delivering any Uop",
        1,
        0,
        0
    },
    {
        0x79,
        0x30,
        "IDQ.MS_CYCLES",
        "Cycles when uops are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy",
        1,
        0,
        0
    },
    {
        0x79,
        0x30,
        "IDQ.MS_SWITCHES",
        "Number of switches from DSB (Decode Stream Buffer) or MITE (legacy decode pipeline) to the Microcode Sequencer",
        1,
        0,
        1
    },
    {
        0x79,
        0x30,
        "IDQ.MS_UOPS",
        "Uops delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy",
        0,
        0,
        0
    },
    {
        0x80,
        0x04,
        "ICACHE_16B.IFDATA_STALL",
        "Cycles where a code fetch is stalled due to L1 instruction cache miss.",
        0,
        0,
        0
    },
    {
        0x83,
        0x01,
        "ICACHE_64B.IFTAG_HIT",
        "Instruction fetch tag lookups that hit in the instruction cache (L1I). Counts at 64-byte cache-line granularity.",
        0,
        0,
        0
    },
    {
        0x83,
        0x02,
        "ICACHE_64B.IFTAG_MISS",
        "Instruction fetch tag lookups that miss in the instruction cache (L1I). Counts at 64-byte cache-line granularity.",
        0,
        0,
        0
    },
    {
        0x83,
        0x04,
        "ICACHE_64B.IFTAG_STALL",
        "Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_TAG.STALLS]",
        0,
        0,
        0
    },
    {
        0x83,
        0x04,
        "ICACHE_TAG.STALLS",
        "Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_64B.IFTAG_STALL]",
        0,
        0,
        0
    },
    {
        0x85,
        0x01,
        "ITLB_MISSES.MISS_CAUSES_A_WALK",
        "Misses at all ITLB levels that cause page walks",
        0,
        0,
        0
    },
    {
        0x85,
        0x02,
        "ITLB_MISSES.WALK_COMPLETED_4K",
        "Code miss in all TLB levels causes a page walk that completes. (4K)",
        0,
        0,
        0
    },
    {
        0x85,
        0x04,
        "ITLB_MISSES.WALK_COMPLETED_2M_4M",
        "Code miss in all TLB levels causes a page walk that completes. (2M/4M)",
        0,
        0,
        0
    },
    {
        0x85,
        0x08,
        "ITLB_MISSES.WALK_COMPLETED_1G",
        "Code miss in all TLB levels causes a page walk that completes. (1G)",
        0,
        0,
        0
    },
    {
        0x85,
        0x0e,
        "ITLB_MISSES.WALK_COMPLETED",
        "Code miss in all TLB levels causes a page walk that completes. (All page sizes)",
        0,
        0,
        0
    },
    {
        0x85,
        0x10,
        "ITLB_MISSES.WALK_PENDING",
        "Counts 1 per cycle for each PMH that is busy with a page walk for an instruction fetch request. EPT page walk duration are excluded in Skylake.",
        0,
        0,
        0
    },
    {
        0x85,
        0x10,
        "ITLB_MISSES.WALK_ACTIVE",
        "Cycles when at least one PMH is busy with a page walk for code (instruction fetch) request. EPT page walk duration are excluded in Skylake.",
        1,
        0,
        0
    },
    {
        0x85,
        0x20,
        "ITLB_MISSES.STLB_HIT",
        "Instruction fetch requests that miss the ITLB and hit the STLB.",
        0,
        0,
        0
    },
    {
        0x87,
        0x01,
        "ILD_STALL.LCP",
        "Stalls caused by changing prefix length of the instruction. [This event is alias to DECODE.LCP]",
        0,
        0,
        0
    },
    {
        0x87,
        0x01,
        "DECODE.LCP",
        "Stalls caused by changing prefix length of the instruction. [This event is alias to ILD_STALL.LCP]",
        0,
        0,
        0
    },
    {
        0x89,
        0xe4,
        "BR_MISP_EXEC.INDIRECT",
        "Speculative mispredicted indirect branches",
        0,
        0,
        0
    },
    {
        0x89,
        0xFF,
        "BR_MISP_EXEC.ALL_BRANCHES",
        "Speculative and retired mispredicted macro conditional branches",
        0,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CORE",
        "Uops not delivered to Resource Allocation Table (RAT) per thread when backend of the machine is not stalled",
        0,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CYCLES_0_UOPS_DELIV.CORE",
        "Cycles per thread when 4 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled",
        4,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CYCLES_LE_1_UOP_DELIV.CORE",
        "Cycles per thread when 3 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled",
        3,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CYCLES_LE_2_UOP_DELIV.CORE",
        "Cycles with less than 2 uops delivered by the front end.",
        2,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CYCLES_LE_3_UOP_DELIV.CORE",
        "Cycles with less than 3 uops delivered by the front end.",
        1,
        0,
        0
    },
    {
        0x9C,
        0x01,
        "IDQ_UOPS_NOT_DELIVERED.CYCLES_FE_WAS_OK",
        "Counts cycles FE delivered 4 uops or Resource Allocation Table (RAT) was stalling FE.",
        1,
        1,
        0
    },
    {
        0xA1,
        0x01,
        "UOPS_DISPATCHED_PORT.PORT_0",
        "Cycles per thread when uops are executed in port 0",
        0,
        0,
        0
    },
    {
        0xA1,
        0x02,
        "UOPS_DISPATCHED_PORT.PORT_1",
        "Cycles per thread when uops are executed in port 1",
        0,
        0,
        0
    },
    {
        0xA1,
        0x04,
        "UOPS_DISPATCHED_PORT.PORT_2",
        "Cycles per thread when uops are executed in port 2",
        0,
        0,
        0
    },
    {
        0xA1,
        0x08,
        "UOPS_DISPATCHED_PORT.PORT_3",
        "Cycles per thread when uops are executed in port 3",
        0,
        0,
        0
    },
    {
        0xA1,
        0x10,
        "UOPS_DISPATCHED_PORT.PORT_4",
        "Cycles per thread when uops are executed in port 4",
        0,
        0,
        0
    },
    {
        0xA1,
        0x20,
        "UOPS_DISPATCHED_PORT.PORT_5",
        "Cycles per thread when uops are executed in port 5",
        0,
        0,
        0
    },
    {
        0xA1,
        0x40,
        "UOPS_DISPATCHED_PORT.PORT_6",
        "Cycles per thread when uops are executed in port 6",
        0,
        0,
        0
    },
    {
        0xA1,
        0x80,
        "UOPS_DISPATCHED_PORT.PORT_7",
        "Cycles per thread when uops are executed in port 7",
        0,
        0,
        0
    },
    {
        0xa2,
        0x01,
        "RESOURCE_STALLS.ANY",
        "Resource-related stall cycles",
        0,
        0,
        0
    },
    {
        0xA2,
        0x08,
        "RESOURCE_STALLS.SB",
        "Cycles stalled due to no store buffers available. (not including draining form sync).",
        0,
        0,
        0
    },
    {
        0xA3,
        0x01,
        "CYCLE_ACTIVITY.CYCLES_L2_MISS",
        "Cycles while L2 cache miss demand load is outstanding.",
        1,
        0,
        0
    },
    {
        0xA3,
        0x02,
        "CYCLE_ACTIVITY.CYCLES_L3_MISS",
        "Cycles while L3 cache miss demand load is outstanding.",
        2,
        0,
        0
    },
    {
        0xA3,
        0x04,
        "CYCLE_ACTIVITY.STALLS_TOTAL",
        "Total execution stalls.",
        4,
        0,
        0
    },
    {
        0xA3,
        0x05,
        "CYCLE_ACTIVITY.STALLS_L2_MISS",
        "Execution stalls while L2 cache miss demand load is outstanding.",
        5,
        0,
        0
    },
    {
        0xA3,
        0x06,
        "CYCLE_ACTIVITY.STALLS_L3_MISS",
        "Execution stalls while L3 cache miss demand load is outstanding.",
        6,
        0,
        0
    },
    {
        0xA3,
        0x08,
        "CYCLE_ACTIVITY.CYCLES_L1D_MISS",
        "Cycles while L1 cache miss demand load is outstanding.",
        8,
        0,
        0
    },
    {
        0xA3,
        0x0C,
        "CYCLE_ACTIVITY.STALLS_L1D_MISS",
        "Execution stalls while L1 cache miss demand load is outstanding.",
        12,
        0,
        0
    },
    {
        0xA3,
        0x10,
        "CYCLE_ACTIVITY.CYCLES_MEM_ANY",
        "Cycles while memory subsystem has an outstanding load.",
        16,
        0,
        0
    },
    {
        0xA3,
        0x14,
        "CYCLE_ACTIVITY.STALLS_MEM_ANY",
        "Execution stalls while memory subsystem has an outstanding load.",
        20,
        0,
        0
    },
    {
        0xA6,
        0x01,
        "EXE_ACTIVITY.EXE_BOUND_0_PORTS",
        "Cycles where no uops were executed, the Reservation Station was not empty, the Store Buffer was full and there was no outstanding load.",
        0,
        0,
        0
    },
    {
        0xA6,
        0x02,
        "EXE_ACTIVITY.1_PORTS_UTIL",
        "Cycles total of 1 uop is executed on all ports and Reservation Station was not empty.",
        0,
        0,
        0
    },
    {
        0xA6,
        0x04,
        "EXE_ACTIVITY.2_PORTS_UTIL",
        "Cycles total of 2 uops are executed on all ports and Reservation Station was not empty.",
        0,
        0,
        0
    },
    {
        0xA6,
        0x08,
        "EXE_ACTIVITY.3_PORTS_UTIL",
        "Cycles total of 3 uops are executed on all ports and Reservation Station was not empty.",
        0,
        0,
        0
    },
    {
        0xA6,
        0x10,
        "EXE_ACTIVITY.4_PORTS_UTIL",
        "Cycles total of 4 uops are executed on all ports and Reservation Station was not empty.",
        0,
        0,
        0
    },
    {
        0xA6,
        0x40,
        "EXE_ACTIVITY.BOUND_ON_STORES",
        "Cycles where the Store Buffer was full and no outstanding load.",
        0,
        0,
        0
    },
    {
        0xA8,
        0x01,
        "LSD.UOPS",
        "Number of Uops delivered by the LSD.",
        0,
        0,
        0
    },
    {
        0xA8,
        0x01,
        "LSD.CYCLES_ACTIVE",
        "Cycles Uops delivered by the LSD, but didn't come from the decoder.",
        1,
        0,
        0
    },
    {
        0xA8,
        0x01,
        "LSD.CYCLES_4_UOPS",
        "Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_OK]",
        4,
        0,
        0
    },
    {
        0xA8,
        0x01,
        "LSD.CYCLES_OK",
        "Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_4_UOPS]",
        4,
        0,
        0
    },
    {
        0xAB,
        0x01,
        "DSB2MITE_SWITCHES.COUNT",
        "Decode Stream Buffer (DSB)-to-MITE switches",
        0,
        0,
        0
    },
    {
        0xAB,
        0x02,
        "DSB2MITE_SWITCHES.PENALTY_CYCLES",
        "Decode Stream Buffer (DSB)-to-MITE switch true penalty cycles.",
        0,
        0,
        0
    },
    {
        0xAE,
        0x01,
        "ITLB.ITLB_FLUSH",
        "Flushing of the Instruction TLB (ITLB) pages, includes 4k/2M/4M pages.",
        0,
        0,
        0
    },
    {
        0xB0,
        0x01,
        "OFFCORE_REQUESTS.DEMAND_DATA_RD",
        "Demand Data Read requests sent to uncore",
        0,
        0,
        0
    },
    {
        0xB0,
        0x02,
        "OFFCORE_REQUESTS.DEMAND_CODE_RD",
        "Cacheable and non-cacheable code read requests",
        0,
        0,
        0
    },
    {
        0xB0,
        0x04,
        "OFFCORE_REQUESTS.DEMAND_RFO",
        "Demand RFO requests including regular RFOs, locks, ItoM",
        0,
        0,
        0
    },
    {
        0xB0,
        0x08,
        "OFFCORE_REQUESTS.ALL_DATA_RD",
        "Demand and prefetch data reads",
        0,
        0,
        0
    },
    {
        0xB0,
        0x10,
        "OFFCORE_REQUESTS.L3_MISS_DEMAND_DATA_RD",
        "Demand Data Read requests who miss L3 cache",
        0,
        0,
        0
    },
    {
        0xB0,
        0x80,
        "OFFCORE_REQUESTS.ALL_REQUESTS",
        "Any memory transaction that reached the SQ.",
        0,
        0,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.THREAD",
        "Counts the number of uops to be executed per-thread each cycle.",
        0,
        0,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.STALL_CYCLES",
        "Counts number of cycles no uops were dispatched to be executed on this thread.",
        1,
        1,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.CYCLES_GE_1_UOP_EXEC",
        "Cycles where at least 1 uop was executed per-thread",
        1,
        0,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.CYCLES_GE_2_UOPS_EXEC",
        "Cycles where at least 2 uops were executed per-thread",
        2,
        0,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.CYCLES_GE_3_UOPS_EXEC",
        "Cycles where at least 3 uops were executed per-thread",
        3,
        0,
        0
    },
    {
        0xB1,
        0x01,
        "UOPS_EXECUTED.CYCLES_GE_4_UOPS_EXEC",
        "Cycles where at least 4 uops were executed per-thread",
        4,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE",
        "Number of uops executed on the core.",
        0,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE_CYCLES_GE_1",
        "Cycles at least 1 micro-op is executed from any thread on physical core.",
        1,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE_CYCLES_GE_2",
        "Cycles at least 2 micro-op is executed from any thread on physical core.",
        2,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE_CYCLES_GE_3",
        "Cycles at least 3 micro-op is executed from any thread on physical core.",
        3,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE_CYCLES_GE_4",
        "Cycles at least 4 micro-op is executed from any thread on physical core.",
        4,
        0,
        0
    },
    {
        0xB1,
        0x02,
        "UOPS_EXECUTED.CORE_CYCLES_NONE",
        "Cycles with no micro-ops executed from any thread on physical core.",
        1,
        1,
        0
    },
    {
        0xB1,
        0x10,
        "UOPS_EXECUTED.X87",
        "Counts the number of x87 uops dispatched.",
        0,
        0,
        0
    },
    {
        0xB2,
        0x01,
        "OFFCORE_REQUESTS_BUFFER.SQ_FULL",
        "Offcore requests buffer cannot take more entries for this thread core.",
        0,
        0,
        0
    },
    {
        0xBD,
        0x01,
        "TLB_FLUSH.DTLB_THREAD",
        "DTLB flush attempts of the thread-specific entries",
        0,
        0,
        0
    },
    {
        0xBD,
        0x20,
        "TLB_FLUSH.STLB_ANY",
        "STLB flush attempts",
        0,
        0,
        0
    },
    {
        0xC0,
        0x00,
        "INST_RETIRED.ANY_P",
        "Number of instructions retired. General Counter - architectural event",
        0,
        0,
        0
    },
    {
        0xC0,
        0x01,
        "INST_RETIRED.PREC_DIST",
        "Precise instruction retired event with HW to reduce effect of PEBS shadow in IP distribution",
        0,
        0,
        0
    },
    {
        0xC0,
        0x01,
        "INST_RETIRED.TOTAL_CYCLES_PS",
        "Number of cycles using always true condition applied to  PEBS instructions retired event.",
        10,
        1,
        0
    },
    {
        0xC0,
        0x02,
        "INST_RETIRED.NOP",
        "Number of all retired NOP instructions.",
        0,
        0,
        0
    },
    {
        0xC1,
        0x3F,
        "OTHER_ASSISTS.ANY",
        "Number of times a microcode assist is invoked by HW other than FP-assist. Examples include AD (page Access Dirty) and AVX* related assists.",
        0,
        0,
        0
    },
    {
        0xC2,
        0x02,
        "UOPS_RETIRED.RETIRE_SLOTS",
        "Retirement slots used.",
        0,
        0,
        0
    },
    {
        0xC2,
        0x02,
        "UOPS_RETIRED.STALL_CYCLES",
        "Cycles without actually retired uops.",
        1,
        1,
        0
    },
    {
        0xC2,
        0x02,
        "UOPS_RETIRED.TOTAL_CYCLES",
        "Cycles with less than 10 actually retired uops.",
        16,
        1,
        0
    },
    {
        0xc2,
        0x04,
        "UOPS_RETIRED.MACRO_FUSED",
        "Number of macro-fused uops retired. (non precise)",
        0,
        0,
        0
    },
    {
        0xC3,
        0x01,
        "MACHINE_CLEARS.COUNT",
        "Number of machine clears (nukes) of any type.",
        1,
        0,
        1
    },
    {
        0xC3,
        0x02,
        "MACHINE_CLEARS.MEMORY_ORDERING",
        "Counts the number of machine clears due to memory order conflicts.",
        0,
        0,
        0
    },
    {
        0xC3,
        0x04,
        "MACHINE_CLEARS.SMC",
        "Self-modifying code (SMC) detected.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x00,
        "BR_INST_RETIRED.ALL_BRANCHES",
        "All (macro) branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x01,
        "BR_INST_RETIRED.CONDITIONAL",
        "Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.COND]",
        0,
        0,
        0
    },
    {
        0xC4,
        0x01,
        "BR_INST_RETIRED.COND",
        "Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.CONDITIONAL]",
        0,
        0,
        0
    },
    {
        0xC4,
        0x02,
        "BR_INST_RETIRED.NEAR_CALL",
        "Direct and indirect near call instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x04,
        "BR_INST_RETIRED.ALL_BRANCHES_PEBS",
        "All (macro) branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x08,
        "BR_INST_RETIRED.NEAR_RETURN",
        "Return instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x10,
        "BR_INST_RETIRED.NOT_TAKEN",
        "Not taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0x10,
        "BR_INST_RETIRED.COND_NTAKEN",
        "Not taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x20,
        "BR_INST_RETIRED.NEAR_TAKEN",
        "Taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC4,
        0x40,
        "BR_INST_RETIRED.FAR_BRANCH",
        "Far branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC5,
        0x00,
        "BR_MISP_RETIRED.ALL_BRANCHES",
        "All mispredicted macro branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC5,
        0x01,
        "BR_MISP_RETIRED.CONDITIONAL",
        "Mispredicted conditional branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC5,
        0x02,
        "BR_MISP_RETIRED.NEAR_CALL",
        "Mispredicted direct and indirect near call instructions retired.",
        0,
        0,
        0
    },
    {
        0xC5,
        0x04,
        "BR_MISP_RETIRED.ALL_BRANCHES_PEBS",
        "Mispredicted macro branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xC5,
        0x08,
        "BR_MISP_RETIRED.RET",
        "This event counts the number of mispredicted ret instructions retired. Non PEBS",
        0,
        0,
        0
    },
    {
        0xC5,
        0x20,
        "BR_MISP_RETIRED.NEAR_TAKEN",
        "Number of near branch instructions retired that were mispredicted and taken.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.DSB_MISS",
        "Retired Instructions who experienced a critical DSB miss.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.L1I_MISS",
        "Retired Instructions who experienced Instruction L1 Cache true miss.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.L2_MISS",
        "Retired Instructions who experienced Instruction L2 Cache true miss.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.ITLB_MISS",
        "Retired Instructions who experienced iTLB true miss.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.STLB_MISS",
        "Retired Instructions who experienced STLB (2nd level TLB) true miss.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_2",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 2 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_2_BUBBLES_GE_2",
        "Retired instructions that are fetched after an interval where the front-end had at least 2 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_4",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 4 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_8",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 8 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_16",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 16 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_32",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 32 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_64",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 64 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_128",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 128 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_256",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 256 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_512",
        "Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 512 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_2_BUBBLES_GE_1",
        "Retired instructions that are fetched after an interval where the front-end had at least 1 bubble-slot for a period of 2 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_2_BUBBLES_GE_3",
        "Retired instructions that are fetched after an interval where the front-end had at least 3 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.",
        0,
        0,
        0
    },
    {
        0xc6,
        0x01,
        "FRONTEND_RETIRED.LATENCY_GE_1",
        "Retired instructions after front-end starvation of at least 1 cycle",
        0,
        0,
        0
    },
    {
        0xC6,
        0x01,
        "FRONTEND_RETIRED.ANY_DSB_MISS",
        "Retired Instructions who experienced DSB miss.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x01,
        "FP_ARITH_INST_RETIRED.SCALAR_DOUBLE",
        "Counts once for most SIMD scalar computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x02,
        "FP_ARITH_INST_RETIRED.SCALAR_SINGLE",
        "Counts once for most SIMD scalar computational single precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x03,
        "FP_ARITH_INST_RETIRED.SCALAR",
        "Counts once for most SIMD scalar computational floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x04,
        "FP_ARITH_INST_RETIRED.128B_PACKED_DOUBLE",
        "Counts once for most SIMD 128-bit packed computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x08,
        "FP_ARITH_INST_RETIRED.128B_PACKED_SINGLE",
        "Counts once for most SIMD 128-bit packed computational single precision floating-point instruction retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x10,
        "FP_ARITH_INST_RETIRED.256B_PACKED_DOUBLE",
        "Counts once for most SIMD 256-bit packed double computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x18,
        "FP_ARITH_INST_RETIRED.4_FLOPS",
        "Number of SSE/AVX computational 128-bit packed single and 256-bit packed double precision FP instructions retired; some instructions will count twice as noted below.  Each count represents 2 or/and 4 computation operations, 1 for each element.  Applies to SSE* and AVX* packed single precision and packed double precision FP instructions: ADD SUB HADD HSUB SUBADD MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB count twice as they perform 2 calculations per element.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x18,
        "FP_ARITH_INST_RETIRED.8_FLOPS",
        "Number of SSE/AVX computational 256-bit packed single precision and 512-bit packed double precision  FP instructions retired; some instructions will count twice as noted below.  Each count represents 8 computation operations, 1 for each element.  Applies to SSE* and AVX* packed single precision and double precision FP instructions: ADD SUB HADD HSUB SUBADD MUL DIV MIN MAX SQRT RSQRT RSQRT14 RCP RCP14 DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB count twice as they perform 2 calculations per element.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x20,
        "FP_ARITH_INST_RETIRED.256B_PACKED_SINGLE",
        "Counts once for most SIMD 256-bit packed single computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x40,
        "FP_ARITH_INST_RETIRED.512B_PACKED_DOUBLE",
        "Number of SSE/AVX computational 512-bit packed double precision floating-point instructions retired; some instructions will count twice as noted below.  Each count represents 8 computation operations, one for each element.  Applies to SSE* and AVX* packed double precision floating-point instructions: ADD SUB MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB instructions count twice as they perform 2 calculations per element.",
        0,
        0,
        0
    },
    {
        0xC7,
        0x80,
        "FP_ARITH_INST_RETIRED.512B_PACKED_SINGLE",
        "Number of SSE/AVX computational 512-bit packed single precision floating-point instructions retired; some instructions will count twice as noted below.  Each count represents 16 computation operations, one for each element.  Applies to SSE* and AVX* packed single precision floating-point instructions: ADD SUB MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB instructions count twice as they perform 2 calculations per element.",
        0,
        0,
        0
    },
    {
        0xC7,
        0xFC,
        "FP_ARITH_INST_RETIRED.VECTOR",
        "Number of any Vector retired FP arithmetic instructions",
        0,
        0,
        0
    },
    {
        0xC8,
        0x01,
        "HLE_RETIRED.START",
        "Number of times an HLE execution started.",
        0,
        0,
        0
    },
    {
        0xC8,
        0x02,
        "HLE_RETIRED.COMMIT",
        "Number of times an HLE execution successfully committed",
        0,
        0,
        0
    },
    {
        0xC8,
        0x04,
        "HLE_RETIRED.ABORTED",
        "Number of times an HLE execution aborted due to any reasons (multiple categories may count as one).",
        0,
        0,
        0
    },
    {
        0xC8,
        0x08,
        "HLE_RETIRED.ABORTED_MEM",
        "Number of times an HLE execution aborted due to various memory events (e.g., read/write capacity and conflicts).",
        0,
        0,
        0
    },
    {
        0xC8,
        0x10,
        "HLE_RETIRED.ABORTED_TIMER",
        "Number of times an HLE execution aborted due to hardware timer expiration.",
        0,
        0,
        0
    },
    {
        0xC8,
        0x20,
        "HLE_RETIRED.ABORTED_UNFRIENDLY",
        "Number of times an HLE execution aborted due to HLE-unfriendly instructions and certain unfriendly events (such as AD assists etc.).",
        0,
        0,
        0
    },
    {
        0xC8,
        0x40,
        "HLE_RETIRED.ABORTED_MEMTYPE",
        "Number of times an HLE execution aborted due to incompatible memory type",
        0,
        0,
        0
    },
    {
        0xC8,
        0x80,
        "HLE_RETIRED.ABORTED_EVENTS",
        "Number of times an HLE execution aborted due to unfriendly events (such as interrupts).",
        0,
        0,
        0
    },
    {
        0xC9,
        0x01,
        "RTM_RETIRED.START",
        "Number of times an RTM execution started.",
        0,
        0,
        0
    },
    {
        0xC9,
        0x02,
        "RTM_RETIRED.COMMIT",
        "Number of times an RTM execution successfully committed",
        0,
        0,
        0
    },
    {
        0xC9,
        0x04,
        "RTM_RETIRED.ABORTED",
        "Number of times an RTM execution aborted due to any reasons (multiple categories may count as one).",
        0,
        0,
        0
    },
    {
        0xC9,
        0x08,
        "RTM_RETIRED.ABORTED_MEM",
        "Number of times an RTM execution aborted due to various memory events (e.g. read/write capacity and conflicts)",
        0,
        0,
        0
    },
    {
        0xC9,
        0x10,
        "RTM_RETIRED.ABORTED_TIMER",
        "Number of times an RTM execution aborted due to uncommon conditions.",
        0,
        0,
        0
    },
    {
        0xC9,
        0x20,
        "RTM_RETIRED.ABORTED_UNFRIENDLY",
        "Number of times an RTM execution aborted due to HLE-unfriendly instructions",
        0,
        0,
        0
    },
    {
        0xC9,
        0x40,
        "RTM_RETIRED.ABORTED_MEMTYPE",
        "Number of times an RTM execution aborted due to incompatible memory type",
        0,
        0,
        0
    },
    {
        0xC9,
        0x80,
        "RTM_RETIRED.ABORTED_EVENTS",
        "Number of times an RTM execution aborted due to none of the previous 4 categories (e.g. interrupt)",
        0,
        0,
        0
    },
    {
        0xCA,
        0x1E,
        "FP_ASSIST.ANY",
        "Cycles with any input/output SSE or FP assist",
        1,
        0,
        0
    },
    {
        0xCB,
        0x01,
        "HW_INTERRUPTS.RECEIVED",
        "Number of hardware interrupts received by the processor.",
        0,
        0,
        0
    },
    {
        0xCC,
        0x20,
        "ROB_MISC_EVENTS.LBR_INSERTS",
        "Increments whenever there is an update to the LBR array.",
        0,
        0,
        0
    },
    {
        0xCC,
        0x40,
        "ROB_MISC_EVENTS.PAUSE_INST",
        "Number of retired PAUSE instructions (that do not end up with a VMExit to the VMM; TSX aborted Instructions may be counted). This event is not supported on first SKL and KBL products.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_4",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 4 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_8",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 8 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_16",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 16 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_32",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 32 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_64",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 64 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_128",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 128 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_256",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 256 cycles.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "MEM_TRANS_RETIRED.LOAD_LATENCY_GT_512",
        "Counts randomly selected loads when the latency from first dispatch to completion is greater than 512 cycles.",
        0,
        0,
        0
    },
    {
        0xCF,
        0x20,
        "FP_ARITH_INST_RETIRED2.128BIT_PACKED_BF16",
        "Intel AVX-512 computational 512-bit packed BFloat16 instructions retired.",
        0,
        0,
        0
    },
    {
        0xCF,
        0x40,
        "FP_ARITH_INST_RETIRED2.256BIT_PACKED_BF16",
        "Intel AVX-512 computational 128-bit packed BFloat16 instructions retired.",
        0,
        0,
        0
    },
    {
        0xCF,
        0x80,
        "FP_ARITH_INST_RETIRED2.512BIT_PACKED_BF16",
        "Intel AVX-512 computational 256-bit packed BFloat16 instructions retired.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x11,
        "MEM_INST_RETIRED.STLB_MISS_LOADS",
        "Retired load instructions that miss the STLB.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x12,
        "MEM_INST_RETIRED.STLB_MISS_STORES",
        "Retired store instructions that miss the STLB.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x21,
        "MEM_INST_RETIRED.LOCK_LOADS",
        "Retired load instructions with locked access.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x41,
        "MEM_INST_RETIRED.SPLIT_LOADS",
        "Retired load instructions that split across a cacheline boundary.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x42,
        "MEM_INST_RETIRED.SPLIT_STORES",
        "Retired store instructions that split across a cacheline boundary.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x81,
        "MEM_INST_RETIRED.ALL_LOADS",
        "Retired load instructions.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x82,
        "MEM_INST_RETIRED.ALL_STORES",
        "Retired store instructions.",
        0,
        0,
        0
    },
    {
        0xD0,
        0x83,
        "MEM_INST_RETIRED.ANY",
        "All retired memory instructions.",
        0,
        0,
        0
    },
    {
        0xD1,
        0x01,
        "MEM_LOAD_RETIRED.L1_HIT",
        "Retired load instructions with L1 cache hits as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x02,
        "MEM_LOAD_RETIRED.L2_HIT",
        "Retired load instructions with L2 cache hits as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x04,
        "MEM_LOAD_RETIRED.L3_HIT",
        "Retired load instructions with L3 cache hits as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x08,
        "MEM_LOAD_RETIRED.L1_MISS",
        "Retired load instructions missed L1 cache as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x10,
        "MEM_LOAD_RETIRED.L2_MISS",
        "Retired load instructions missed L2 cache as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x20,
        "MEM_LOAD_RETIRED.L3_MISS",
        "Retired load instructions missed L3 cache as data sources",
        0,
        0,
        0
    },
    {
        0xD1,
        0x40,
        "MEM_LOAD_RETIRED.FB_HIT",
        "Retired load instructions which data sources were load missed L1 but hit FB due to preceding miss to the same cache line with data not ready",
        0,
        0,
        0
    },
    {
        0xD1,
        0x80,
        "MEM_LOAD_RETIRED.LOCAL_PMM",
        "Retired load instructions with local Intel(R) Optane(TM) DC persistent memory as the data source where the data request missed all caches.",
        0,
        0,
        0
    },
    {
        0xD2,
        0x01,
        "MEM_LOAD_L3_HIT_RETIRED.XSNP_MISS",
        "Retired load instructions which data sources were L3 hit and cross-core snoop missed in on-pkg core cache.",
        0,
        0,
        0
    },
    {
        0xD2,
        0x02,
        "MEM_LOAD_L3_HIT_RETIRED.XSNP_HIT",
        "Retired load instructions which data sources were L3 and cross-core snoop hits in on-pkg core cache",
        0,
        0,
        0
    },
    {
        0xD2,
        0x04,
        "MEM_LOAD_L3_HIT_RETIRED.XSNP_HITM",
        "Retired load instructions which data sources were HitM responses from shared L3",
        0,
        0,
        0
    },
    {
        0xD2,
        0x08,
        "MEM_LOAD_L3_HIT_RETIRED.XSNP_NONE",
        "Retired load instructions which data sources were hits in L3 without snoops required",
        0,
        0,
        0
    },
    {
        0xD3,
        0x01,
        "MEM_LOAD_L3_MISS_RETIRED.LOCAL_DRAM",
        "Retired load instructions which data sources missed L3 but serviced from local dram",
        0,
        0,
        0
    },
    {
        0xD3,
        0x02,
        "MEM_LOAD_L3_MISS_RETIRED.REMOTE_DRAM",
        "Retired load instructions which data sources missed L3 but serviced from remote dram",
        0,
        0,
        0
    },
    {
        0xD3,
        0x04,
        "MEM_LOAD_L3_MISS_RETIRED.REMOTE_HITM",
        "Retired load instructions whose data sources was remote HITM",
        0,
        0,
        0
    },
    {
        0xD3,
        0x08,
        "MEM_LOAD_L3_MISS_RETIRED.REMOTE_FWD",
        "Retired load instructions whose data sources was forwarded from a remote cache",
        0,
        0,
        0
    },
    {
        0xD3,
        0x10,
        "MEM_LOAD_L3_MISS_RETIRED.REMOTE_PMM",
        "Retired load instructions with remote Intel(R) Optane(TM) DC persistent memory as the data source where the data request missed all caches.",
        0,
        0,
        0
    },
    {
        0xD4,
        0x04,
        "MEM_LOAD_MISC_RETIRED.UC",
        "Retired instructions with at least 1 uncacheable load or lock.",
        0,
        0,
        0
    },
    {
        0xE6,
        0x01,
        "BACLEARS.ANY",
        "Counts the total number when the front end is resteered, mainly when the BPU cannot provide a correct prediction and this is corrected by other branch handling mechanisms at the front end.",
        0,
        0,
        0
    },
    {
        0xEF,
        0x01,
        "CORE_SNOOP_RESPONSE.RSP_IHITI",
        "CORE_SNOOP_RESPONSE.RSP_IHITI",
        0,
        0,
        0
    },
    {
        0xEF,
        0x02,
        "CORE_SNOOP_RESPONSE.RSP_IHITFSE",
        "CORE_SNOOP_RESPONSE.RSP_IHITFSE",
        0,
        0,
        0
    },
    {
        0xEF,
        0x04,
        "CORE_SNOOP_RESPONSE.RSP_SHITFSE",
        "CORE_SNOOP_RESPONSE.RSP_SHITFSE",
        0,
        0,
        0
    },
    {
        0xEF,
        0x08,
        "CORE_SNOOP_RESPONSE.RSP_SFWDM",
        "CORE_SNOOP_RESPONSE.RSP_SFWDM",
        0,
        0,
        0
    },
    {
        0xEF,
        0x10,
        "CORE_SNOOP_RESPONSE.RSP_IFWDM",
        "CORE_SNOOP_RESPONSE.RSP_IFWDM",
        0,
        0,
        0
    },
    {
        0xEF,
        0x20,
        "CORE_SNOOP_RESPONSE.RSP_IFWDFE",
        "CORE_SNOOP_RESPONSE.RSP_IFWDFE",
        0,
        0,
        0
    },
    {
        0xEF,
        0x40,
        "CORE_SNOOP_RESPONSE.RSP_SFWDFE",
        "CORE_SNOOP_RESPONSE.RSP_SFWDFE",
        0,
        0,
        0
    },
    {
        0xF0,
        0x40,
        "L2_TRANS.L2_WB",
        "L2 writebacks that access L2 cache",
        0,
        0,
        0
    },
    {
        0xF1,
        0x1F,
        "L2_LINES_IN.ALL",
        "L2 cache lines filling L2",
        0,
        0,
        0
    },
    {
        0xF2,
        0x01,
        "L2_LINES_OUT.SILENT",
        "Counts the number of lines that are silently dropped by L2 cache when triggered by an L2 cache fill. These lines are typically in Shared state. A non-threaded event.",
        0,
        0,
        0
    },
    {
        0xF2,
        0x02,
        "L2_LINES_OUT.NON_SILENT",
        "Counts the number of lines that are evicted by L2 cache when triggered by an L2 cache fill. Those lines can be either in modified state or clean state. Modified lines may either be written back to L3 or directly written to memory and not allocated in L3.  Clean lines may either be allocated in L3 or dropped",
        0,
        0,
        0
    },
    {
        0xF2,
        0x04,
        "L2_LINES_OUT.USELESS_PREF",
        "This event is deprecated. Refer to new event L2_LINES_OUT.USELESS_HWPF",
        0,
        0,
        0
    },
    {
        0xF2,
        0x04,
        "L2_LINES_OUT.USELESS_HWPF",
        "Counts the number of lines that have been hardware prefetched but not used and now evicted by L2 cache",
        0,
        0,
        0
    },
    {
        0xF4,
        0x10,
        "SQ_MISC.SPLIT_LOCK",
        "Number of cache line split locks sent to uncore.",
        0,
        0,
        0
    },
    {
        0xFE,
        0x02,
        "IDI_MISC.WB_UPGRADE",
        "Counts number of cache lines that are allocated and written back to L3 with the intention that they are more likely to be reused shortly",
        0,
        0,
        0
    },
    {
        0xFE,
        0x04,
        "IDI_MISC.WB_DOWNGRADE",
        "Counts number of cache lines that are dropped and not written back to L3 as they are deemed to be less likely to be reused shortly",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=SUPPLIER_NONE.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_M.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_E.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_S.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT_F.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.NO_SNOOP_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.SNOOP_MISS",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.HIT_OTHER_CORE_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.HITM_OTHER_CORE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.OTHER.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=ANY_RESPONSE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.ANY_RESPONSE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_HIT.SNOOP_HIT_WITH_FWD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.REMOTE_HITM",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.OTHER.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=L3_MISS.REMOTE_HIT_FORWARD",
        "This event is deprecated. Refer to new event OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_DATA_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_RFO:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=DEMAND_CODE_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_DATA_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L2_RFO:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_DATA_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L3_RFO:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=PF_L1D_AND_SW:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=OTHER:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.OTHER.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_DATA_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_PF_RFO:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_DATA_RD:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_RFO:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE:request=ALL_READS:response=PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "This event is deprecated. Refer to new event OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT_F.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP OCR.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts demand data reads  OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP OCR.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_M.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_E.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_S.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT_F.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_NONE",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_MISS",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP OCR.DEMAND_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts all demand data writes (RFOs)  OCR.DEMAND_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.SNOOP_NONE",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.SNOOP_MISS",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP OCR.DEMAND_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT_F.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED OCR.DEMAND_CODE_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.DEMAND_CODE_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE OCR.DEMAND_CODE_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP OCR.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts all demand code reads  OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED OCR.DEMAND_CODE_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.DEMAND_CODE_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE OCR.DEMAND_CODE_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP OCR.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT_F.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L2_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L2_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.PF_L2_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP OCR.PF_L2_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads  OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L2_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_MISS",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L2_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.PF_L2_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP OCR.PF_L2_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_M.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_E.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_S.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT_F.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L2_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L2_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE OCR.PF_L2_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP OCR.PF_L2_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs  OCR.PF_L2_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L2_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.SNOOP_MISS",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L2_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE OCR.PF_L2_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP OCR.PF_L2_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT_F.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L3_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L3_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.PF_L3_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP OCR.PF_L3_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads  OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L3_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L3_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.PF_L3_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP OCR.PF_L3_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_M.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_E.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_S.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT_F.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L3_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L3_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE OCR.PF_L3_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP OCR.PF_L3_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs  OCR.PF_L3_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L3_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.SNOOP_MISS",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L3_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE OCR.PF_L3_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP OCR.PF_L3_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.SUPPLIER_NONE.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_M.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_E.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_S.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT_F.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED OCR.PF_L1D_AND_SW.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD OCR.PF_L1D_AND_SW.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE OCR.PF_L1D_AND_SW.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP OCR.PF_L1D_AND_SW.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests  OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED OCR.PF_L1D_AND_SW.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_MISS",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD OCR.PF_L1D_AND_SW.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE OCR.PF_L1D_AND_SW.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP OCR.PF_L1D_AND_SW.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.SUPPLIER_NONE.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_M.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_E.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_S.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT_F.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.SNOOP_NONE",
        "Counts any other requests OCR.OTHER.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED",
        "Counts any other requests OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED OCR.OTHER.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.SNOOP_MISS",
        "Counts any other requests OCR.OTHER.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.OTHER.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD",
        "Counts any other requests OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD OCR.OTHER.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.HITM_OTHER_CORE",
        "Counts any other requests OCR.OTHER.L3_HIT.HITM_OTHER_CORE OCR.OTHER.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.ANY_SNOOP",
        "Counts any other requests OCR.OTHER.L3_HIT.ANY_SNOOP OCR.OTHER.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "Counts any other requests  OCR.OTHER.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.SNOOP_NONE",
        "Counts any other requests OCR.OTHER.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED",
        "Counts any other requests OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED OCR.OTHER.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.SNOOP_MISS",
        "Counts any other requests OCR.OTHER.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "Counts any other requests OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.OTHER.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD",
        "Counts any other requests OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD OCR.OTHER.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.HITM_OTHER_CORE",
        "Counts any other requests OCR.OTHER.L3_MISS.HITM_OTHER_CORE OCR.OTHER.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.ANY_SNOOP",
        "Counts any other requests OCR.OTHER.L3_MISS.ANY_SNOOP OCR.OTHER.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_PF_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS",
        "OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS OCR.ALL_PF_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        "OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_PF_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_PF_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_PF_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP  OCR.ALL_PF_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE OCR.ALL_PF_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS OCR.ALL_PF_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP OCR.ALL_PF_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_PF_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE",
        "OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE OCR.ALL_PF_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED",
        "OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_PF_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS",
        "OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS OCR.ALL_PF_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        "OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_PF_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE",
        "OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_PF_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP",
        "OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP OCR.ALL_PF_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_DATA_RD.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP  OCR.ALL_DATA_RD.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE OCR.ALL_DATA_RD.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS OCR.ALL_DATA_RD.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP OCR.ALL_DATA_RD.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_DATA_RD.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE",
        "OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE OCR.ALL_DATA_RD.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        "OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_DATA_RD.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS",
        "OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS OCR.ALL_DATA_RD.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        "OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_DATA_RD.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        "OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE OCR.ALL_DATA_RD.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP",
        "OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP OCR.ALL_DATA_RD.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_RFO.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "OCR.ALL_RFO.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        "OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_RFO.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_RFO.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.SNOOP_NONE",
        "OCR.ALL_RFO.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.SNOOP_MISS",
        "OCR.ALL_RFO.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP",
        "OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.SNOOP_NONE",
        "OCR.ALL_RFO.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.SNOOP_MISS",
        "OCR.ALL_RFO.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP",
        "OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.SNOOP_NONE",
        "OCR.ALL_RFO.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.SNOOP_MISS",
        "OCR.ALL_RFO.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP",
        "OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.SNOOP_NONE",
        "OCR.ALL_RFO.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.SNOOP_MISS",
        "OCR.ALL_RFO.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_RFO.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP",
        "OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP  OCR.ALL_RFO.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.SNOOP_NONE",
        "OCR.ALL_RFO.L3_HIT.SNOOP_NONE OCR.ALL_RFO.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.SNOOP_MISS",
        "OCR.ALL_RFO.L3_HIT.SNOOP_MISS OCR.ALL_RFO.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE OCR.ALL_RFO.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.ANY_SNOOP",
        "OCR.ALL_RFO.L3_HIT.ANY_SNOOP OCR.ALL_RFO.L3_HIT.ANY_SNOOP OCR.ALL_RFO.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_RFO.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.SNOOP_NONE",
        "OCR.ALL_RFO.L3_MISS.SNOOP_NONE OCR.ALL_RFO.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED",
        "OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_RFO.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.SNOOP_MISS",
        "OCR.ALL_RFO.L3_MISS.SNOOP_MISS OCR.ALL_RFO.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        "OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_RFO.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE",
        "OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE OCR.ALL_RFO.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.ANY_SNOOP",
        "OCR.ALL_RFO.L3_MISS.ANY_SNOOP OCR.ALL_RFO.L3_MISS.ANY_SNOOP OCR.ALL_RFO.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.SNOOP_NONE",
        "OCR.ALL_READS.SUPPLIER_NONE.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED  OCR.ALL_READS.SUPPLIER_NONE.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.SNOOP_MISS",
        "OCR.ALL_READS.SUPPLIER_NONE.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD  OCR.ALL_READS.SUPPLIER_NONE.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE",
        "OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE  OCR.ALL_READS.SUPPLIER_NONE.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP",
        "OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP  OCR.ALL_READS.SUPPLIER_NONE.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.SNOOP_NONE",
        "OCR.ALL_READS.L3_HIT_M.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_M.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.SNOOP_MISS",
        "OCR.ALL_READS.L3_HIT_M.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_M.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_M.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_M.ANY_SNOOP",
        "OCR.ALL_READS.L3_HIT_M.ANY_SNOOP  OCR.ALL_READS.L3_HIT_M.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.SNOOP_NONE",
        "OCR.ALL_READS.L3_HIT_E.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_E.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.SNOOP_MISS",
        "OCR.ALL_READS.L3_HIT_E.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_E.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_E.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_E.ANY_SNOOP",
        "OCR.ALL_READS.L3_HIT_E.ANY_SNOOP  OCR.ALL_READS.L3_HIT_E.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.SNOOP_NONE",
        "OCR.ALL_READS.L3_HIT_S.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_S.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.SNOOP_MISS",
        "OCR.ALL_READS.L3_HIT_S.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_S.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_S.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_S.ANY_SNOOP",
        "OCR.ALL_READS.L3_HIT_S.ANY_SNOOP  OCR.ALL_READS.L3_HIT_S.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.SNOOP_NONE",
        "OCR.ALL_READS.L3_HIT_F.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_HIT_F.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.SNOOP_MISS",
        "OCR.ALL_READS.L3_HIT_F.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_HIT_F.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE  OCR.ALL_READS.L3_HIT_F.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT_F.ANY_SNOOP",
        "OCR.ALL_READS.L3_HIT_F.ANY_SNOOP  OCR.ALL_READS.L3_HIT_F.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.SNOOP_NONE",
        "OCR.ALL_READS.L3_HIT.SNOOP_NONE OCR.ALL_READS.L3_HIT.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED OCR.ALL_READS.L3_HIT.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.SNOOP_MISS",
        "OCR.ALL_READS.L3_HIT.SNOOP_MISS OCR.ALL_READS.L3_HIT.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_HIT.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE OCR.ALL_READS.L3_HIT.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.ANY_SNOOP",
        "OCR.ALL_READS.L3_HIT.ANY_SNOOP OCR.ALL_READS.L3_HIT.ANY_SNOOP OCR.ALL_READS.L3_HIT.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP  OCR.ALL_READS.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        "OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP  OCR.ALL_READS.L3_MISS_REMOTE_HOP1_DRAM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.SNOOP_NONE",
        "OCR.ALL_READS.L3_MISS.SNOOP_NONE OCR.ALL_READS.L3_MISS.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED",
        "OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED OCR.ALL_READS.L3_MISS.NO_SNOOP_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.SNOOP_MISS",
        "OCR.ALL_READS.L3_MISS.SNOOP_MISS OCR.ALL_READS.L3_MISS.SNOOP_MISS",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        "OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD",
        "OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD OCR.ALL_READS.L3_MISS.HIT_OTHER_CORE_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE",
        "OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE OCR.ALL_READS.L3_MISS.HITM_OTHER_CORE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.ANY_SNOOP",
        "OCR.ALL_READS.L3_MISS.ANY_SNOOP OCR.ALL_READS.L3_MISS.ANY_SNOOP OCR.ALL_READS.L3_MISS.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.ANY_RESPONSE",
        "Counts demand data reads have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.ANY_RESPONSE",
        "Counts all demand data writes (RFOs) have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.ANY_RESPONSE",
        "Counts all demand code reads have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.ANY_RESPONSE",
        "Counts prefetch (that bring data to L2) data reads have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts prefetch (that bring data to L2) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.ANY_RESPONSE",
        "Counts all prefetch (that bring data to L2) RFOs have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts all prefetch (that bring data to L2) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.ANY_RESPONSE",
        "Counts all prefetch (that bring data to LLC only) data reads have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts all prefetch (that bring data to LLC only) data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.ANY_RESPONSE",
        "Counts all prefetch (that bring data to LLC only) RFOs have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts all prefetch (that bring data to LLC only) RFOs",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.ANY_RESPONSE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.ANY_RESPONSE",
        "Counts any other requests have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts any other requests OCR.OTHER.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "Counts any other requests OCR.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.ANY_RESPONSE",
        "OCR.ALL_PF_DATA_RD.ANY_RESPONSE have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "OCR.ALL_PF_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.ANY_RESPONSE",
        "OCR.ALL_PF_RFO.ANY_RESPONSE have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_PF_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "OCR.ALL_PF_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.ANY_RESPONSE",
        "OCR.ALL_DATA_RD.ANY_RESPONSE have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_DATA_RD.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "OCR.ALL_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.ANY_RESPONSE",
        "OCR.ALL_RFO.ANY_RESPONSE have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_RFO.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "OCR.ALL_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.ANY_RESPONSE",
        "OCR.ALL_READS.ANY_RESPONSE have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_READS.L3_MISS_REMOTE_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        "OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD OCR.ALL_READS.L3_MISS_LOCAL_DRAM.SNOOP_MISS_OR_NO_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_HIT.SNOOP_HIT_WITH_FWD",
        "OCR.ALL_READS.L3_HIT.SNOOP_HIT_WITH_FWD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HITM",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.REMOTE_HITM",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HITM",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HITM",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.REMOTE_HITM",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HITM",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.REMOTE_HITM",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HITM",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.REMOTE_HITM",
        "Counts any other requests OCR.OTHER.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM",
        "OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM",
        "OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM OCR.ALL_PF_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM",
        "OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM OCR.ALL_DATA_RD.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.REMOTE_HITM",
        "OCR.ALL_RFO.L3_MISS.REMOTE_HITM OCR.ALL_RFO.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.REMOTE_HITM",
        "OCR.ALL_READS.L3_MISS.REMOTE_HITM OCR.ALL_READS.L3_MISS.REMOTE_HITM",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts demand data reads OCR.DEMAND_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.L3_MISS.REMOTE_HIT_FORWARD",
        "Counts any other requests OCR.OTHER.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_PF_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        "OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_PF_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        "OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_DATA_RD.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        "OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_RFO.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD",
        "OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD OCR.ALL_READS.L3_MISS.REMOTE_HIT_FORWARD",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NOT_NEEDED",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE OCR.ALL_READS.PMM_HIT_LOCAL_PMM.SNOOP_NONE",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts demand data reads OCR.DEMAND_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts all demand data writes (RFOs) OCR.DEMAND_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts all demand code reads OCR.DEMAND_CODE_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts prefetch (that bring data to L2) data reads OCR.PF_L2_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts all prefetch (that bring data to L2) RFOs OCR.PF_L2_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) data reads OCR.PF_L3_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts all prefetch (that bring data to LLC only) RFOs OCR.PF_L3_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts L1 data cache hardware prefetch requests and software prefetch requests OCR.PF_L1D_AND_SW.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.OTHER.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "Counts any other requests OCR.OTHER.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_PF_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_PF_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_DATA_RD.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_RFO.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        "OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP OCR.ALL_READS.PMM_HIT_LOCAL_PMM.ANY_SNOOP",
        0,
        0,
        0
    },
    {
        0x80,
        0x04,
        "ICACHE_16B.IFDATA_STALL_C1_E1",
        "Cycles where a code fetch is stalled due to L1 instruction cache miss.",
        1,
        0,
        1
    },
    {
        0xC7,
        0xFC,
        "FP_ARITH_INST_RETIRED.128B_PACKED_DOUBLE_U0XFC",
        "Counts once for most SIMD 128-bit packed computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
        0,
        0,
        0
    },
    {
        0x48,
        0x02,
        "L1D_PEND_MISS.FB_FULL_C1",
        "Number of times a request needed a FB entry but there was no entry available for it. That is the FB unavailability was dominant reason for blocking the request. A request includes cacheable/uncacheable demands that is load, store or SW prefetch.",
        1,
        0,
        0
    },
    {
        0x08,
        0x20,
        "DTLB_LOAD_MISSES.STLB_HIT_C1",
        "Loads that miss the DTLB and hit the STLB.",
        1,
        0,
        0
    },

};

#endif
