
/*
 *  auto-generated header file that structurely stores the events of intel CPUs.
 *  Author      : hdrt
 *  File name   : skylake_core.h
 *  Date        : 2026-04-22 12:18:49
 *  Source json : https://raw.githubusercontent.com/intel/perfmon/refs/heads/main/SKL/events/skylake_core.json
 */

#ifndef __SIR__skylake_core_h__
#define __SIR__skylake_core_h__

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
#define MEMORY_DISAMBIGUATION__HISTORY_RESET      15 //MEMORY_DISAMBIGUATION.HISTORY_RESET
#define INT_MISC__RECOVERY_CYCLES                 16 //Core cycles the allocator was stalled due to recovery from earlier clear event for this thread (e.g. misprediction or memory nuke)
#define INT_MISC__RECOVERY_CYCLES_ANY             17 //Core cycles the allocator was stalled due to recovery from earlier clear event for any thread running on the physical core (e.g. misprediction or memory nuke).
#define INT_MISC__CLEARS_COUNT                    18 //Clears speculative count
#define INT_MISC__CLEAR_RESTEER_CYCLES            19 //Cycles the issue-stage is waiting for front-end to fetch from resteered path following branch misprediction or machine clear events.
#define UOPS_ISSUED__ANY                          20 //Uops that Resource Allocation Table (RAT) issues to Reservation Station (RS)
#define UOPS_ISSUED__STALL_CYCLES                 21 //Cycles when Resource Allocation Table (RAT) does not issue Uops to Reservation Station (RS) for the thread
#define UOPS_ISSUED__VECTOR_WIDTH_MISMATCH        22 //Uops inserted at issue-stage in order to preserve upper bits of vector registers.
#define UOPS_ISSUED__SLOW_LEA                     23 //Number of slow LEA uops being allocated. A uop is generally considered SlowLea if it has 3 sources (e.g. 2 sources + immediate) regardless if as a result of LEA instruction or not.
#define ARITH__DIVIDER_ACTIVE                     24 //Cycles when divide unit is busy executing divide or square root operations. Accounts for integer and floating-point operations.
#define L2_RQSTS__DEMAND_DATA_RD_MISS             25 //Demand Data Read miss L2, no rejects
#define L2_RQSTS__RFO_MISS                        26 //RFO requests that miss L2 cache
#define L2_RQSTS__CODE_RD_MISS                    27 //L2 cache misses when fetching instructions
#define L2_RQSTS__ALL_DEMAND_MISS                 28 //Demand requests that miss L2 cache
#define L2_RQSTS__PF_MISS                         29 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that miss L2 cache
#define L2_RQSTS__MISS                            30 //All requests that miss L2 cache
#define L2_RQSTS__DEMAND_DATA_RD_HIT              31 //Demand Data Read requests that hit L2 cache
#define L2_RQSTS__RFO_HIT                         32 //RFO requests that hit L2 cache
#define L2_RQSTS__CODE_RD_HIT                     33 //L2 cache hits when fetching instructions, code reads.
#define L2_RQSTS__PF_HIT                          34 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches that hit L2 cache
#define L2_RQSTS__ALL_DEMAND_DATA_RD              35 //Demand Data Read requests
#define L2_RQSTS__ALL_RFO                         36 //RFO requests to L2 cache
#define L2_RQSTS__ALL_CODE_RD                     37 //L2 code requests
#define L2_RQSTS__ALL_DEMAND_REFERENCES           38 //Demand requests to L2 cache
#define L2_RQSTS__ALL_PF                          39 //Requests from the L1/L2/L3 hardware prefetchers or Load software prefetches
#define L2_RQSTS__REFERENCES                      40 //All L2 requests
#define LONGEST_LAT_CACHE__MISS                   41 //Core-originated cacheable demand requests missed L3
#define LONGEST_LAT_CACHE__REFERENCE              42 //Core-originated cacheable demand requests that refer to L3
#define SW_PREFETCH_ACCESS__NTA                   43 //Number of PREFETCHNTA instructions executed.
#define SW_PREFETCH_ACCESS__T0                    44 //Number of PREFETCHT0 instructions executed.
#define SW_PREFETCH_ACCESS__T1_T2                 45 //Number of PREFETCHT1 or PREFETCHT2 instructions executed.
#define SW_PREFETCH_ACCESS__PREFETCHW             46 //Number of PREFETCHW instructions executed.
#define SW_PREFETCH_ACCESS__ANY                   47 //Counts the number of PREFETCHNTA, PREFETCHW, PREFETCHT0, PREFETCHT1 or PREFETCHT2 instructions executed.
#define CPU_CLK_UNHALTED__THREAD_P                48 //Thread cycles when thread is not in halt state
#define CPU_CLK_UNHALTED__THREAD_P_ANY            49 //Core cycles when at least one thread on the physical core is not in halt state.
#define CPU_CLK_UNHALTED__RING0_TRANS             50 //Counts when there is a transition from ring 1, 2 or 3 to ring 0.
#define CPU_CLK_THREAD_UNHALTED__REF_XCLK         51 //Core crystal clock cycles when the thread is unhalted.
#define CPU_CLK_THREAD_UNHALTED__REF_XCLK_ANY     52 //Core crystal clock cycles when at least one thread on the physical core is unhalted.
#define CPU_CLK_UNHALTED__REF_XCLK                53 //Core crystal clock cycles when the thread is unhalted.
#define CPU_CLK_UNHALTED__REF_XCLK_ANY            54 //Core crystal clock cycles when at least one thread on the physical core is unhalted.
#define CPU_CLK_THREAD_UNHALTED__ONE_THREAD_ACTIVE  55 //Core crystal clock cycles when this thread is unhalted and the other thread is halted.
#define CPU_CLK_UNHALTED__ONE_THREAD_ACTIVE       56 //Core crystal clock cycles when this thread is unhalted and the other thread is halted.
#define L1D_PEND_MISS__PENDING                    57 //L1D miss outstandings duration in cycles
#define L1D_PEND_MISS__PENDING_CYCLES             58 //Cycles with L1D load Misses outstanding.
#define L1D_PEND_MISS__PENDING_CYCLES_ANY         59 //Cycles with L1D load Misses outstanding from any thread on physical core.
#define L1D_PEND_MISS__FB_FULL                    60 //Number of times a request needed a FB entry but there was no entry available for it. That is the FB unavailability was dominant reason for blocking the request. A request includes cacheable/uncacheable demands that is load, store or SW prefetch.
#define DTLB_STORE_MISSES__MISS_CAUSES_A_WALK     61 //Store misses in all DTLB levels that cause page walks
#define DTLB_STORE_MISSES__WALK_COMPLETED_4K      62 //Page walk completed due to a demand data store to a 4K page
#define DTLB_STORE_MISSES__WALK_COMPLETED_2M_4M   63 //Page walk completed due to a demand data store to a 2M/4M page
#define DTLB_STORE_MISSES__WALK_COMPLETED_1G      64 //Page walk completed due to a demand data store to a 1G page
#define DTLB_STORE_MISSES__WALK_COMPLETED         65 //Store misses in all TLB levels causes a page walk that completes. (All page sizes)
#define DTLB_STORE_MISSES__WALK_PENDING           66 //Counts 1 per cycle for each PMH that is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.
#define DTLB_STORE_MISSES__WALK_ACTIVE            67 //Cycles when at least one PMH is busy with a page walk for a store. EPT page walk duration are excluded in Skylake.
#define DTLB_STORE_MISSES__STLB_HIT               68 //Stores that miss the DTLB and hit the STLB.
#define LOAD_HIT_PRE__SW_PF                       69 //Demand load dispatches that hit L1D fill buffer (FB) allocated for software prefetch.
#define EPT__WALK_PENDING                         70 //Counts 1 per cycle for each PMH that is busy with a EPT (Extended Page Table) walk for any request type.
#define L1D__REPLACEMENT                          71 //L1D data line replacements
#define TX_MEM__ABORT_CONFLICT                    72 //Number of times a transactional abort was signaled due to a data conflict on a transactionally accessed address
#define TX_MEM__ABORT_CAPACITY                    73 //Number of times a transactional abort was signaled due to a data capacity limitation for transactional reads or writes.
#define TX_MEM__ABORT_HLE_STORE_TO_ELIDED_LOCK    74 //Number of times a HLE transactional region aborted due to a non XRELEASE prefixed instruction writing to an elided lock in the elision buffer
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_NOT_EMPTY  75 //Number of times an HLE transactional execution aborted due to NoAllocatedElisionBuffer being non-zero.
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_MISMATCH  76 //Number of times an HLE transactional execution aborted due to XRELEASE lock not satisfying the address and value requirements in the elision buffer
#define TX_MEM__ABORT_HLE_ELISION_BUFFER_UNSUPPORTED_ALIGNMENT  77 //Number of times an HLE transactional execution aborted due to an unsupported read alignment from the elision buffer.
#define TX_MEM__HLE_ELISION_BUFFER_FULL           78 //Number of times HLE lock could not be elided due to ElisionBufferAvailable being zero.
#define INST_DECODED__DECODERS                    79 //Instruction decoders utilized in a cycle
#define PARTIAL_RAT_STALLS__SCOREBOARD            80 //Cycles where the pipeline is stalled due to serializing operations.
#define TX_EXEC__MISC1                            81 //Counts the number of times a class of instructions that may cause a transactional abort was executed. Since this is the count of execution, it may not always cause a transactional abort.
#define TX_EXEC__MISC2                            82 //Counts the number of times a class of instructions (e.g., vzeroupper) that may cause a transactional abort was executed inside a transactional region
#define TX_EXEC__MISC3                            83 //Counts the number of times an instruction execution caused the transactional nest count supported to be exceeded
#define TX_EXEC__MISC4                            84 //Counts the number of times a XBEGIN instruction was executed inside an HLE transactional region.
#define TX_EXEC__MISC5                            85 //Counts the number of times an HLE XACQUIRE instruction was executed inside an RTM transactional region
#define RS_EVENTS__EMPTY_CYCLES                   86 //Cycles when Reservation Station (RS) is empty for the thread
#define RS_EVENTS__EMPTY_END                      87 //Counts end of periods where the Reservation Station (RS) was empty. Could be useful to precisely locate Frontend Latency Bound issues.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_DATA_RD  88 //Offcore outstanding Demand Data Read transactions in uncore queue.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_DATA_RD  89 //Cycles when offcore outstanding Demand Data Read transactions are present in SuperQueue (SQ), queue to uncore
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_DATA_RD_GE_6  90 //Cycles with at least 6 offcore outstanding Demand Data Read transactions in uncore queue.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_CODE_RD  91 //Offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore, every cycle.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_CODE_RD  92 //Cycles with offcore outstanding Code Reads transactions in the SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__DEMAND_RFO  93 //Offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore, every cycle
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DEMAND_RFO  94 //Cycles with offcore outstanding demand rfo reads transactions in SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__ALL_DATA_RD  95 //Offcore outstanding cacheable Core Data Read transactions in SuperQueue (SQ), queue to uncore
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_DATA_RD  96 //Cycles when offcore outstanding cacheable Core Data Read transactions are present in SuperQueue (SQ), queue to uncore.
#define OFFCORE_REQUESTS_OUTSTANDING__L3_MISS_DEMAND_DATA_RD  97 //Counts number of Offcore outstanding Demand Data Read requests that miss L3 cache in the superQ every cycle.
#define OFFCORE_REQUESTS_OUTSTANDING__CYCLES_WITH_L3_MISS_DEMAND_DATA_RD  98 //Cycles with at least 1 Demand Data Read requests who miss L3 cache in the superQ.
#define OFFCORE_REQUESTS_OUTSTANDING__L3_MISS_DEMAND_DATA_RD_GE_6  99 //Cycles with at least 6 Demand Data Read requests that miss L3 cache in the superQ.
#define IDQ__MITE_UOPS                           100 //Uops delivered to Instruction Decode Queue (IDQ) from MITE path
#define IDQ__MITE_CYCLES                         101 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from MITE path
#define IDQ__DSB_UOPS                            102 //Uops delivered to Instruction Decode Queue (IDQ) from the Decode Stream Buffer (DSB) path
#define IDQ__DSB_CYCLES                          103 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) from Decode Stream Buffer (DSB) path
#define IDQ__MS_DSB_CYCLES                       104 //Cycles when uops initiated by Decode Stream Buffer (DSB) are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__ALL_DSB_CYCLES_4_UOPS               105 //Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.DSB_CYCLES_OK]
#define IDQ__ALL_DSB_CYCLES_ANY_UOPS             106 //Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.DSB_CYCLES_ANY]
#define IDQ__DSB_CYCLES_OK                       107 //Cycles Decode Stream Buffer (DSB) is delivering 4 or more Uops [This event is alias to IDQ.ALL_DSB_CYCLES_4_UOPS]
#define IDQ__DSB_CYCLES_ANY                      108 //Cycles Decode Stream Buffer (DSB) is delivering any Uop [This event is alias to IDQ.ALL_DSB_CYCLES_ANY_UOPS]
#define IDQ__MS_MITE_UOPS                        109 //Uops initiated by MITE and delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__ALL_MITE_CYCLES_4_UOPS              110 //Cycles MITE is delivering 4 Uops
#define IDQ__ALL_MITE_CYCLES_ANY_UOPS            111 //Cycles MITE is delivering any Uop
#define IDQ__MS_CYCLES                           112 //Cycles when uops are being delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define IDQ__MS_SWITCHES                         113 //Number of switches from DSB (Decode Stream Buffer) or MITE (legacy decode pipeline) to the Microcode Sequencer
#define IDQ__MS_UOPS                             114 //Uops delivered to Instruction Decode Queue (IDQ) while Microcode Sequencer (MS) is busy
#define ICACHE_16B__IFDATA_STALL                 115 //Cycles where a code fetch is stalled due to L1 instruction cache miss.
#define ICACHE_64B__IFTAG_HIT                    116 //Instruction fetch tag lookups that hit in the instruction cache (L1I). Counts at 64-byte cache-line granularity.
#define ICACHE_64B__IFTAG_MISS                   117 //Instruction fetch tag lookups that miss in the instruction cache (L1I). Counts at 64-byte cache-line granularity.
#define ICACHE_64B__IFTAG_STALL                  118 //Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_TAG.STALLS]
#define ICACHE_TAG__STALLS                       119 //Cycles where a code fetch is stalled due to L1 instruction cache tag miss. [This event is alias to ICACHE_64B.IFTAG_STALL]
#define ITLB_MISSES__MISS_CAUSES_A_WALK          120 //Misses at all ITLB levels that cause page walks
#define ITLB_MISSES__WALK_COMPLETED_4K           121 //Code miss in all TLB levels causes a page walk that completes. (4K)
#define ITLB_MISSES__WALK_COMPLETED_2M_4M        122 //Code miss in all TLB levels causes a page walk that completes. (2M/4M)
#define ITLB_MISSES__WALK_COMPLETED_1G           123 //Code miss in all TLB levels causes a page walk that completes. (1G)
#define ITLB_MISSES__WALK_COMPLETED              124 //Code miss in all TLB levels causes a page walk that completes. (All page sizes)
#define ITLB_MISSES__WALK_PENDING                125 //Counts 1 per cycle for each PMH that is busy with a page walk for an instruction fetch request. EPT page walk duration are excluded in Skylake.
#define ITLB_MISSES__WALK_ACTIVE                 126 //Cycles when at least one PMH is busy with a page walk for code (instruction fetch) request. EPT page walk duration are excluded in Skylake.
#define ITLB_MISSES__STLB_HIT                    127 //Instruction fetch requests that miss the ITLB and hit the STLB.
#define ILD_STALL__LCP                           128 //Stalls caused by changing prefix length of the instruction. [This event is alias to DECODE.LCP]
#define DECODE__LCP                              129 //Stalls caused by changing prefix length of the instruction. [This event is alias to ILD_STALL.LCP]
#define BR_MISP_EXEC__INDIRECT                   130 //Speculative mispredicted indirect branches
#define BR_MISP_EXEC__ALL_BRANCHES               131 //Speculative and retired mispredicted macro conditional branches
#define IDQ_UOPS_NOT_DELIVERED__CORE             132 //Uops not delivered to Resource Allocation Table (RAT) per thread when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_0_UOPS_DELIV__CORE 133 //Cycles per thread when 4 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_1_UOP_DELIV__CORE 134 //Cycles per thread when 3 or more uops are not delivered to Resource Allocation Table (RAT) when backend of the machine is not stalled
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_2_UOP_DELIV__CORE 135 //Cycles with less than 2 uops delivered by the front end.
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_LE_3_UOP_DELIV__CORE 136 //Cycles with less than 3 uops delivered by the front end.
#define IDQ_UOPS_NOT_DELIVERED__CYCLES_FE_WAS_OK 137 //Counts cycles FE delivered 4 uops or Resource Allocation Table (RAT) was stalling FE.
#define UOPS_DISPATCHED_PORT__PORT_0             138 //Cycles per thread when uops are executed in port 0
#define UOPS_DISPATCHED_PORT__PORT_1             139 //Cycles per thread when uops are executed in port 1
#define UOPS_DISPATCHED_PORT__PORT_2             140 //Cycles per thread when uops are executed in port 2
#define UOPS_DISPATCHED_PORT__PORT_3             141 //Cycles per thread when uops are executed in port 3
#define UOPS_DISPATCHED_PORT__PORT_4             142 //Cycles per thread when uops are executed in port 4
#define UOPS_DISPATCHED_PORT__PORT_5             143 //Cycles per thread when uops are executed in port 5
#define UOPS_DISPATCHED_PORT__PORT_6             144 //Cycles per thread when uops are executed in port 6
#define UOPS_DISPATCHED_PORT__PORT_7             145 //Cycles per thread when uops are executed in port 7
#define RESOURCE_STALLS__ANY                     146 //Resource-related stall cycles
#define RESOURCE_STALLS__SB                      147 //Cycles stalled due to no store buffers available. (not including draining form sync).
#define CYCLE_ACTIVITY__CYCLES_L2_MISS           148 //Cycles while L2 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_L3_MISS           149 //Cycles while L3 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_TOTAL             150 //Total execution stalls.
#define CYCLE_ACTIVITY__STALLS_L2_MISS           151 //Execution stalls while L2 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_L3_MISS           152 //Execution stalls while L3 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_L1D_MISS          153 //Cycles while L1 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__STALLS_L1D_MISS          154 //Execution stalls while L1 cache miss demand load is outstanding.
#define CYCLE_ACTIVITY__CYCLES_MEM_ANY           155 //Cycles while memory subsystem has an outstanding load.
#define CYCLE_ACTIVITY__STALLS_MEM_ANY           156 //Execution stalls while memory subsystem has an outstanding load.
#define EXE_ACTIVITY__EXE_BOUND_0_PORTS          157 //Cycles where no uops were executed, the Reservation Station was not empty, the Store Buffer was full and there was no outstanding load.
#define EXE_ACTIVITY__1_PORTS_UTIL               158 //Cycles total of 1 uop is executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__2_PORTS_UTIL               159 //Cycles total of 2 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__3_PORTS_UTIL               160 //Cycles total of 3 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__4_PORTS_UTIL               161 //Cycles total of 4 uops are executed on all ports and Reservation Station was not empty.
#define EXE_ACTIVITY__BOUND_ON_STORES            162 //Cycles where the Store Buffer was full and no outstanding load.
#define LSD__UOPS                                163 //Number of Uops delivered by the LSD.
#define LSD__CYCLES_ACTIVE                       164 //Cycles Uops delivered by the LSD, but didn't come from the decoder.
#define LSD__CYCLES_4_UOPS                       165 //Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_OK]
#define LSD__CYCLES_OK                           166 //Cycles 4 Uops delivered by the LSD, but didn't come from the decoder. [This event is alias to LSD.CYCLES_4_UOPS]
#define DSB2MITE_SWITCHES__COUNT                 167 //Decode Stream Buffer (DSB)-to-MITE switches
#define DSB2MITE_SWITCHES__PENALTY_CYCLES        168 //Decode Stream Buffer (DSB)-to-MITE switch true penalty cycles.
#define ITLB__ITLB_FLUSH                         169 //Flushing of the Instruction TLB (ITLB) pages, includes 4k/2M/4M pages.
#define OFFCORE_REQUESTS__DEMAND_DATA_RD         170 //Demand Data Read requests sent to uncore
#define OFFCORE_REQUESTS__DEMAND_CODE_RD         171 //Cacheable and non-cacheable code read requests
#define OFFCORE_REQUESTS__DEMAND_RFO             172 //Demand RFO requests including regular RFOs, locks, ItoM
#define OFFCORE_REQUESTS__ALL_DATA_RD            173 //Demand and prefetch data reads
#define OFFCORE_REQUESTS__L3_MISS_DEMAND_DATA_RD 174 //Demand Data Read requests who miss L3 cache
#define OFFCORE_REQUESTS__ALL_REQUESTS           175 //Any memory transaction that reached the SQ.
#define UOPS_EXECUTED__THREAD                    176 //Counts the number of uops to be executed per-thread each cycle.
#define UOPS_EXECUTED__STALL_CYCLES              177 //Counts number of cycles no uops were dispatched to be executed on this thread.
#define UOPS_EXECUTED__CYCLES_GE_1_UOP_EXEC      178 //Cycles where at least 1 uop was executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_2_UOPS_EXEC     179 //Cycles where at least 2 uops were executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_3_UOPS_EXEC     180 //Cycles where at least 3 uops were executed per-thread
#define UOPS_EXECUTED__CYCLES_GE_4_UOPS_EXEC     181 //Cycles where at least 4 uops were executed per-thread
#define UOPS_EXECUTED__CORE                      182 //Number of uops executed on the core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_1          183 //Cycles at least 1 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_2          184 //Cycles at least 2 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_3          185 //Cycles at least 3 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_GE_4          186 //Cycles at least 4 micro-op is executed from any thread on physical core.
#define UOPS_EXECUTED__CORE_CYCLES_NONE          187 //Cycles with no micro-ops executed from any thread on physical core.
#define UOPS_EXECUTED__X87                       188 //Counts the number of x87 uops dispatched.
#define OFFCORE_REQUESTS_BUFFER__SQ_FULL         189 //Offcore requests buffer cannot take more entries for this thread core.
#define OFFCORE_RESPONSE                         190 //Offcore response can be programmed only with a specific pair of event select and counter MSR, and with specific event codes and predefine mask bit value in a dedicated MSR to specify attributes of the offcore transaction
#define TLB_FLUSH__DTLB_THREAD                   191 //DTLB flush attempts of the thread-specific entries
#define TLB_FLUSH__STLB_ANY                      192 //STLB flush attempts
#define INST_RETIRED__ANY_P                      193 //Number of instructions retired. General Counter - architectural event
#define INST_RETIRED__PREC_DIST                  194 //Precise instruction retired event with HW to reduce effect of PEBS shadow in IP distribution
#define INST_RETIRED__TOTAL_CYCLES_PS            195 //Number of cycles using always true condition applied to  PEBS instructions retired event.
#define INST_RETIRED__NOP                        196 //Number of all retired NOP instructions.
#define OTHER_ASSISTS__ANY                       197 //Number of times a microcode assist is invoked by HW other than FP-assist. Examples include AD (page Access Dirty) and AVX* related assists.
#define UOPS_RETIRED__RETIRE_SLOTS               198 //Retirement slots used.
#define UOPS_RETIRED__STALL_CYCLES               199 //Cycles without actually retired uops.
#define UOPS_RETIRED__TOTAL_CYCLES               200 //Cycles with less than 10 actually retired uops.
#define UOPS_RETIRED__MACRO_FUSED                201 //Number of macro-fused uops retired. (non precise)
#define MACHINE_CLEARS__COUNT                    202 //Number of machine clears (nukes) of any type.
#define MACHINE_CLEARS__MEMORY_ORDERING          203 //Counts the number of machine clears due to memory order conflicts.
#define MACHINE_CLEARS__SMC                      204 //Self-modifying code (SMC) detected.
#define BR_INST_RETIRED__ALL_BRANCHES            205 //All (macro) branch instructions retired.
#define BR_INST_RETIRED__CONDITIONAL             206 //Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.COND]
#define BR_INST_RETIRED__COND                    207 //Conditional branch instructions retired. [This event is alias to BR_INST_RETIRED.CONDITIONAL]
#define BR_INST_RETIRED__NEAR_CALL               208 //Direct and indirect near call instructions retired.
#define BR_INST_RETIRED__ALL_BRANCHES_PEBS       209 //All (macro) branch instructions retired.
#define BR_INST_RETIRED__NEAR_RETURN             210 //Return instructions retired.
#define BR_INST_RETIRED__NOT_TAKEN               211 //Not taken branch instructions retired.
#define BR_INST_RETIRED__COND_NTAKEN             212 //Not taken branch instructions retired.
#define BR_INST_RETIRED__NEAR_TAKEN              213 //Taken branch instructions retired.
#define BR_INST_RETIRED__FAR_BRANCH              214 //Far branch instructions retired.
#define BR_MISP_RETIRED__ALL_BRANCHES            215 //All mispredicted macro branch instructions retired.
#define BR_MISP_RETIRED__CONDITIONAL             216 //Mispredicted conditional branch instructions retired.
#define BR_MISP_RETIRED__NEAR_CALL               217 //Mispredicted direct and indirect near call instructions retired.
#define BR_MISP_RETIRED__ALL_BRANCHES_PEBS       218 //Mispredicted macro branch instructions retired.
#define BR_MISP_RETIRED__NEAR_TAKEN              219 //Number of near branch instructions retired that were mispredicted and taken.
#define FRONTEND_RETIRED__DSB_MISS               220 //Retired Instructions who experienced a critical DSB miss.
#define FRONTEND_RETIRED__L1I_MISS               221 //Retired Instructions who experienced Instruction L1 Cache true miss.
#define FRONTEND_RETIRED__L2_MISS                222 //Retired Instructions who experienced Instruction L2 Cache true miss.
#define FRONTEND_RETIRED__ITLB_MISS              223 //Retired Instructions who experienced iTLB true miss.
#define FRONTEND_RETIRED__STLB_MISS              224 //Retired Instructions who experienced STLB (2nd level TLB) true miss.
#define FRONTEND_RETIRED__LATENCY_GE_2           225 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_2 226 //Retired instructions that are fetched after an interval where the front-end had at least 2 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_4           227 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 4 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_8           228 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 8 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_16          229 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 16 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_32          230 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 32 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_64          231 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 64 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_128         232 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 128 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_256         233 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 256 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_512         234 //Retired instructions that are fetched after an interval where the front-end delivered no uops for a period of 512 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_1 235 //Retired instructions that are fetched after an interval where the front-end had at least 1 bubble-slot for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_2_BUBBLES_GE_3 236 //Retired instructions that are fetched after an interval where the front-end had at least 3 bubble-slots for a period of 2 cycles which was not interrupted by a back-end stall.
#define FRONTEND_RETIRED__LATENCY_GE_1           237 //Retired instructions after front-end starvation of at least 1 cycle
#define FRONTEND_RETIRED__ANY_DSB_MISS           238 //Retired Instructions who experienced DSB miss.
#define FP_ARITH_INST_RETIRED__SCALAR_DOUBLE     239 //Counts once for most SIMD scalar computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__SCALAR_SINGLE     240 //Counts once for most SIMD scalar computational single precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__SCALAR            241 //Counts once for most SIMD scalar computational floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__128B_PACKED_DOUBLE 242 //Counts once for most SIMD 128-bit packed computational double precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__128B_PACKED_SINGLE 243 //Counts once for most SIMD 128-bit packed computational single precision floating-point instruction retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__256B_PACKED_DOUBLE 244 //Counts once for most SIMD 256-bit packed double computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__4_FLOPS           245 //Number of SSE/AVX computational 128-bit packed single and 256-bit packed double precision FP instructions retired; some instructions will count twice as noted below.  Each count represents 2 or/and 4 computation operations, 1 for each element.  Applies to SSE* and AVX* packed single precision and packed double precision FP instructions: ADD SUB HADD HSUB SUBADD MUL DIV MIN MAX RCP14 RSQRT14 SQRT DPP FM(N)ADD/SUB.  DPP and FM(N)ADD/SUB count twice as they perform 2 calculations per element.
#define FP_ARITH_INST_RETIRED__256B_PACKED_SINGLE 246 //Counts once for most SIMD 256-bit packed single computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.
#define FP_ARITH_INST_RETIRED__VECTOR            247 //Number of any Vector retired FP arithmetic instructions
#define HLE_RETIRED__START                       248 //Number of times an HLE execution started.
#define HLE_RETIRED__COMMIT                      249 //Number of times an HLE execution successfully committed
#define HLE_RETIRED__ABORTED                     250 //Number of times an HLE execution aborted due to any reasons (multiple categories may count as one).
#define HLE_RETIRED__ABORTED_MEM                 251 //Number of times an HLE execution aborted due to various memory events (e.g., read/write capacity and conflicts).
#define HLE_RETIRED__ABORTED_TIMER               252 //Number of times an HLE execution aborted due to hardware timer expiration.
#define HLE_RETIRED__ABORTED_UNFRIENDLY          253 //Number of times an HLE execution aborted due to HLE-unfriendly instructions and certain unfriendly events (such as AD assists etc.).
#define HLE_RETIRED__ABORTED_MEMTYPE             254 //Number of times an HLE execution aborted due to incompatible memory type
#define HLE_RETIRED__ABORTED_EVENTS              255 //Number of times an HLE execution aborted due to unfriendly events (such as interrupts).
#define RTM_RETIRED__START                       256 //Number of times an RTM execution started.
#define RTM_RETIRED__COMMIT                      257 //Number of times an RTM execution successfully committed
#define RTM_RETIRED__ABORTED                     258 //Number of times an RTM execution aborted due to any reasons (multiple categories may count as one).
#define RTM_RETIRED__ABORTED_MEM                 259 //Number of times an RTM execution aborted due to various memory events (e.g. read/write capacity and conflicts)
#define RTM_RETIRED__ABORTED_TIMER               260 //Number of times an RTM execution aborted due to uncommon conditions.
#define RTM_RETIRED__ABORTED_UNFRIENDLY          261 //Number of times an RTM execution aborted due to HLE-unfriendly instructions
#define RTM_RETIRED__ABORTED_MEMTYPE             262 //Number of times an RTM execution aborted due to incompatible memory type
#define RTM_RETIRED__ABORTED_EVENTS              263 //Number of times an RTM execution aborted due to none of the previous 4 categories (e.g. interrupt)
#define FP_ASSIST__ANY                           264 //Cycles with any input/output SSE or FP assist
#define HW_INTERRUPTS__RECEIVED                  265 //Number of hardware interrupts received by the processor.
#define ROB_MISC_EVENTS__LBR_INSERTS             266 //Increments whenever there is an update to the LBR array.
#define ROB_MISC_EVENTS__PAUSE_INST              267 //Number of retired PAUSE instructions (that do not end up with a VMExit to the VMM; TSX aborted Instructions may be counted). This event is not supported on first SKL and KBL products.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_4     268 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 4 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_8     269 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 8 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_16    270 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 16 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_32    271 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 32 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_64    272 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 64 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_128   273 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 128 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_256   274 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 256 cycles.
#define MEM_TRANS_RETIRED__LOAD_LATENCY_GT_512   275 //Counts randomly selected loads when the latency from first dispatch to completion is greater than 512 cycles.
#define MEM_INST_RETIRED__STLB_MISS_LOADS        276 //Retired load instructions that miss the STLB.
#define MEM_INST_RETIRED__STLB_MISS_STORES       277 //Retired store instructions that miss the STLB.
#define MEM_INST_RETIRED__LOCK_LOADS             278 //Retired load instructions with locked access.
#define MEM_INST_RETIRED__SPLIT_LOADS            279 //Retired load instructions that split across a cacheline boundary.
#define MEM_INST_RETIRED__SPLIT_STORES           280 //Retired store instructions that split across a cacheline boundary.
#define MEM_INST_RETIRED__ALL_LOADS              281 //Retired load instructions.
#define MEM_INST_RETIRED__ALL_STORES             282 //Retired store instructions.
#define MEM_INST_RETIRED__ANY                    283 //All retired memory instructions.
#define MEM_LOAD_RETIRED__L1_HIT                 284 //Retired load instructions with L1 cache hits as data sources
#define MEM_LOAD_RETIRED__L2_HIT                 285 //Retired load instructions with L2 cache hits as data sources
#define MEM_LOAD_RETIRED__L3_HIT                 286 //Retired load instructions with L3 cache hits as data sources
#define MEM_LOAD_RETIRED__L1_MISS                287 //Retired load instructions missed L1 cache as data sources
#define MEM_LOAD_RETIRED__L2_MISS                288 //Retired load instructions missed L2 cache as data sources
#define MEM_LOAD_RETIRED__L3_MISS                289 //Retired load instructions missed L3 cache as data sources
#define MEM_LOAD_RETIRED__FB_HIT                 290 //Retired load instructions which data sources were load missed L1 but hit FB due to preceding miss to the same cache line with data not ready
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_MISS       291 //Retired load instructions which data sources were L3 hit and cross-core snoop missed in on-pkg core cache.
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_HIT        292 //Retired load instructions which data sources were L3 and cross-core snoop hits in on-pkg core cache
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_HITM       293 //Retired load instructions which data sources were HitM responses from shared L3
#define MEM_LOAD_L3_HIT_RETIRED__XSNP_NONE       294 //Retired load instructions which data sources were hits in L3 without snoops required
#define MEM_LOAD_MISC_RETIRED__UC                295 //Retired instructions with at least 1 uncacheable load or lock.
#define BACLEARS__ANY                            296 //Counts the total number when the front end is resteered, mainly when the BPU cannot provide a correct prediction and this is corrected by other branch handling mechanisms at the front end.
#define L2_TRANS__L2_WB                          297 //L2 writebacks that access L2 cache
#define L2_LINES_IN__ALL                         298 //L2 cache lines filling L2
#define L2_LINES_OUT__SILENT                     299 //Counts the number of lines that are silently dropped by L2 cache when triggered by an L2 cache fill. These lines are typically in Shared or Exclusive state. A non-threaded event.
#define L2_LINES_OUT__NON_SILENT                 300 //Counts the number of lines that are evicted by L2 cache when triggered by an L2 cache fill. Those lines are in Modified state. Modified lines are written back to L3
#define L2_LINES_OUT__USELESS_PREF               301 //This event is deprecated. Refer to new event L2_LINES_OUT.USELESS_HWPF
#define L2_LINES_OUT__USELESS_HWPF               302 //Counts the number of lines that have been hardware prefetched but not used and now evicted by L2 cache
#define SQ_MISC__SPLIT_LOCK                      303 //Number of cache line split locks sent to uncore.
#define OFFCORE_RESPONSE__OTHER__L3_MISS__ANY_SNOOP 304 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_NON_DRAM 305 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_HITM 306 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_HIT_NO_FWD 307 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_MISS 308 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_NOT_NEEDED 309 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SNOOP_NONE 310 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS__SPL_HIT 311 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__ANY_SNOOP 312 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_NON_DRAM 313 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_HITM 314 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_HIT_NO_FWD 315 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_MISS 316 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_NOT_NEEDED 317 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SNOOP_NONE 318 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_MISS_LOCAL_DRAM__SPL_HIT 319 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__ANY_SNOOP 320 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_NON_DRAM 321 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_HITM 322 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_HIT_NO_FWD 323 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_MISS 324 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_NOT_NEEDED 325 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SNOOP_NONE 326 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L4_HIT_LOCAL_L4__SPL_HIT 327 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__ANY_SNOOP 328 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_NON_DRAM 329 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_HITM 330 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_HIT_NO_FWD 331 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_MISS 332 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_NOT_NEEDED 333 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SNOOP_NONE 334 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT__SPL_HIT 335 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__ANY_SNOOP 336 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_NON_DRAM 337 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_HITM 338 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_HIT_NO_FWD 339 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_MISS 340 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_NOT_NEEDED 341 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SNOOP_NONE 342 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_S__SPL_HIT 343 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__ANY_SNOOP 344 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_NON_DRAM 345 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_HITM 346 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_HIT_NO_FWD 347 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_MISS 348 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_NOT_NEEDED 349 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SNOOP_NONE 350 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_E__SPL_HIT 351 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__ANY_SNOOP 352 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_NON_DRAM 353 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_HITM 354 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_HIT_NO_FWD 355 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_MISS 356 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_NOT_NEEDED 357 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SNOOP_NONE 358 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__L3_HIT_M__SPL_HIT 359 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__ANY_SNOOP 360 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_NON_DRAM 361 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_HITM 362 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_HIT_NO_FWD 363 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_MISS 364 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_NOT_NEEDED 365 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SNOOP_NONE 366 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__SUPPLIER_NONE__SPL_HIT 367 //Counts any other requests
#define OFFCORE_RESPONSE__OTHER__ANY_RESPONSE    368 //Counts any other requests have any response type.
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__ANY_SNOOP 369 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_NON_DRAM 370 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_HITM 371 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_HIT_NO_FWD 372 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_MISS 373 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_NOT_NEEDED 374 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SNOOP_NONE 375 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS__SPL_HIT 376 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 377 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_NON_DRAM 378 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_HITM 379 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_HIT_NO_FWD 380 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 381 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_NOT_NEEDED 382 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 383 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_MISS_LOCAL_DRAM__SPL_HIT 384 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__ANY_SNOOP 385 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_NON_DRAM 386 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_HITM 387 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_HIT_NO_FWD 388 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_MISS 389 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_NOT_NEEDED 390 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SNOOP_NONE 391 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L4_HIT_LOCAL_L4__SPL_HIT 392 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__ANY_SNOOP 393 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_NON_DRAM 394 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_HITM 395 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_HIT_NO_FWD 396 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_MISS 397 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_NOT_NEEDED 398 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SNOOP_NONE 399 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT__SPL_HIT 400 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__ANY_SNOOP 401 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_NON_DRAM 402 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_HITM 403 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_HIT_NO_FWD 404 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_MISS 405 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_NOT_NEEDED 406 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SNOOP_NONE 407 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_S__SPL_HIT 408 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__ANY_SNOOP 409 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_NON_DRAM 410 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_HITM 411 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_HIT_NO_FWD 412 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_MISS 413 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_NOT_NEEDED 414 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SNOOP_NONE 415 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_E__SPL_HIT 416 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__ANY_SNOOP 417 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_NON_DRAM 418 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_HITM 419 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_HIT_NO_FWD 420 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_MISS 421 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_NOT_NEEDED 422 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SNOOP_NONE 423 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__L3_HIT_M__SPL_HIT 424 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__ANY_SNOOP 425 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_NON_DRAM 426 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_HITM 427 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_HIT_NO_FWD 428 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_MISS 429 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_NOT_NEEDED 430 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SNOOP_NONE 431 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__SUPPLIER_NONE__SPL_HIT 432 //Counts all demand code reads
#define OFFCORE_RESPONSE__DEMAND_CODE_RD__ANY_RESPONSE 433 //Counts all demand code reads have any response type.
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__ANY_SNOOP 434 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_NON_DRAM 435 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_HITM 436 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_HIT_NO_FWD 437 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_MISS 438 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_NOT_NEEDED 439 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SNOOP_NONE 440 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS__SPL_HIT 441 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__ANY_SNOOP 442 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NON_DRAM 443 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_HITM 444 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_HIT_NO_FWD 445 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_MISS 446 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NOT_NEEDED 447 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SNOOP_NONE 448 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_MISS_LOCAL_DRAM__SPL_HIT 449 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__ANY_SNOOP 450 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_NON_DRAM 451 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_HITM 452 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_HIT_NO_FWD 453 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_MISS 454 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_NOT_NEEDED 455 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SNOOP_NONE 456 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L4_HIT_LOCAL_L4__SPL_HIT 457 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__ANY_SNOOP 458 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_NON_DRAM 459 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_HITM 460 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_HIT_NO_FWD 461 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_MISS 462 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_NOT_NEEDED 463 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SNOOP_NONE 464 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT__SPL_HIT 465 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__ANY_SNOOP 466 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_NON_DRAM 467 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_HITM 468 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_HIT_NO_FWD 469 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_MISS 470 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_NOT_NEEDED 471 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SNOOP_NONE 472 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_S__SPL_HIT 473 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__ANY_SNOOP 474 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_NON_DRAM 475 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_HITM 476 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_HIT_NO_FWD 477 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_MISS 478 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_NOT_NEEDED 479 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SNOOP_NONE 480 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_E__SPL_HIT 481 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__ANY_SNOOP 482 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_NON_DRAM 483 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_HITM 484 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_HIT_NO_FWD 485 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_MISS 486 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_NOT_NEEDED 487 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SNOOP_NONE 488 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__L3_HIT_M__SPL_HIT 489 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__ANY_SNOOP 490 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_NON_DRAM 491 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_HITM 492 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_HIT_NO_FWD 493 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_MISS 494 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_NOT_NEEDED 495 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SNOOP_NONE 496 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__SUPPLIER_NONE__SPL_HIT 497 //Counts all demand data writes (RFOs)
#define OFFCORE_RESPONSE__DEMAND_RFO__ANY_RESPONSE 498 //Counts all demand data writes (RFOs) have any response type.
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__ANY_SNOOP 499 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_NON_DRAM 500 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_HITM 501 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_HIT_NO_FWD 502 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_MISS 503 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_NOT_NEEDED 504 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SNOOP_NONE 505 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS__SPL_HIT 506 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__ANY_SNOOP 507 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NON_DRAM 508 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_HITM 509 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_HIT_NO_FWD 510 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_MISS 511 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NOT_NEEDED 512 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SNOOP_NONE 513 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_MISS_LOCAL_DRAM__SPL_HIT 514 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__ANY_SNOOP 515 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_NON_DRAM 516 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_HITM 517 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_HIT_NO_FWD 518 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_MISS 519 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_NOT_NEEDED 520 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SNOOP_NONE 521 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L4_HIT_LOCAL_L4__SPL_HIT 522 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__ANY_SNOOP 523 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_NON_DRAM 524 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_HITM 525 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_HIT_NO_FWD 526 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_MISS 527 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_NOT_NEEDED 528 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SNOOP_NONE 529 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT__SPL_HIT 530 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__ANY_SNOOP 531 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_NON_DRAM 532 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_HITM 533 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_HIT_NO_FWD 534 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_MISS 535 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_NOT_NEEDED 536 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SNOOP_NONE 537 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_S__SPL_HIT 538 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__ANY_SNOOP 539 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_NON_DRAM 540 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_HITM 541 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_HIT_NO_FWD 542 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_MISS 543 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_NOT_NEEDED 544 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SNOOP_NONE 545 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_E__SPL_HIT 546 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__ANY_SNOOP 547 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_NON_DRAM 548 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_HITM 549 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_HIT_NO_FWD 550 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_MISS 551 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_NOT_NEEDED 552 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SNOOP_NONE 553 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__L3_HIT_M__SPL_HIT 554 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__ANY_SNOOP 555 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_NON_DRAM 556 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_HITM 557 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_HIT_NO_FWD 558 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_MISS 559 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_NOT_NEEDED 560 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SNOOP_NONE 561 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__SUPPLIER_NONE__SPL_HIT 562 //Counts demand data reads
#define OFFCORE_RESPONSE__DEMAND_DATA_RD__ANY_RESPONSE 563 //Counts demand data reads have any response type.


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
        0x09,
        0x01,
        "MEMORY_DISAMBIGUATION.HISTORY_RESET",
        "MEMORY_DISAMBIGUATION.HISTORY_RESET",
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
        0xB7,
        0x01,
        "OFFCORE_RESPONSE",
        "Offcore response can be programmed only with a specific pair of event select and counter MSR, and with specific event codes and predefine mask bit value in a dedicated MSR to specify attributes of the offcore transaction",
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
        0x20,
        "FP_ARITH_INST_RETIRED.256B_PACKED_SINGLE",
        "Counts once for most SIMD 256-bit packed single computational precision floating-point instructions retired. Counts twice for DPP and FM(N)ADD/SUB instructions retired.",
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
        "Counts the number of lines that are silently dropped by L2 cache when triggered by an L2 cache fill. These lines are typically in Shared or Exclusive state. A non-threaded event.",
        0,
        0,
        0
    },
    {
        0xF2,
        0x02,
        "L2_LINES_OUT.NON_SILENT",
        "Counts the number of lines that are evicted by L2 cache when triggered by an L2 cache fill. Those lines are in Modified state. Modified lines are written back to L3",
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
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_MISS_LOCAL_DRAM.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L4_HIT_LOCAL_L4.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_S.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_E.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.L3_HIT_M.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.ANY_SNOOP",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_NON_DRAM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_HITM",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_HIT_NO_FWD",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_MISS",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_NOT_NEEDED",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SNOOP_NONE",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.SUPPLIER_NONE.SPL_HIT",
        "Counts any other requests",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.OTHER.ANY_RESPONSE",
        "Counts any other requests have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_MISS_LOCAL_DRAM.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L4_HIT_LOCAL_L4.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_S.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_E.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.L3_HIT_M.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NON_DRAM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_HITM",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_HIT_NO_FWD",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NOT_NEEDED",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.SUPPLIER_NONE.SPL_HIT",
        "Counts all demand code reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_CODE_RD.ANY_RESPONSE",
        "Counts all demand code reads have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_MISS_LOCAL_DRAM.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L4_HIT_LOCAL_L4.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_S.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_E.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.L3_HIT_M.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.ANY_SNOOP",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NON_DRAM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_HITM",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_HIT_NO_FWD",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_MISS",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NOT_NEEDED",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SNOOP_NONE",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.SUPPLIER_NONE.SPL_HIT",
        "Counts all demand data writes (RFOs)",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_RFO.ANY_RESPONSE",
        "Counts all demand data writes (RFOs) have any response type.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_MISS_LOCAL_DRAM.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L4_HIT_LOCAL_L4.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_S.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_E.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.L3_HIT_M.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.ANY_SNOOP",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NON_DRAM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_HITM",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_HIT_NO_FWD",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_MISS",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NOT_NEEDED",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SNOOP_NONE",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.SUPPLIER_NONE.SPL_HIT",
        "Counts demand data reads",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OFFCORE_RESPONSE.DEMAND_DATA_RD.ANY_RESPONSE",
        "Counts demand data reads have any response type.",
        0,
        0,
        0
    },

};

#endif
