
/*
 *  auto-generated header file that structurely stores the events of intel CPUs.
 *  Author      : hdrt
 *  File name   : alderlake_gracemont_core.h
 *  Date        : 2026-05-19 21:59:52
 *  Source json : https://raw.githubusercontent.com/intel/perfmon/refs/heads/main/ADL/events/alderlake_gracemont_core.json
 */

#ifndef __SIR__alderlake_gracemont_core_h__
#define __SIR__alderlake_gracemont_core_h__

// event index
#define INST_RETIRED__ANY                          0 //Fixed Counter: Counts the total number of instructions retired.
#define CPU_CLK_UNHALTED__CORE                     1 //Fixed Counter: Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.THREAD]
#define CPU_CLK_UNHALTED__THREAD                   2 //Fixed Counter: Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.CORE]
#define CPU_CLK_UNHALTED__REF_TSC                  3 //Fixed Counter: Counts the number of unhalted reference clock cycles at TSC frequency.
#define LD_BLOCKS__DATA_UNKNOWN                    4 //Counts the number of retired loads that are blocked because its address exactly matches an older store whose data is not ready.
#define LD_BLOCKS__4K_ALIAS                        5 //This event is deprecated. Refer to new event LD_BLOCKS.ADDRESS_ALIAS
#define LD_BLOCKS__ADDRESS_ALIAS                   6 //Counts the number of retired loads that are blocked because it initially appears to be store forward blocked, but subsequently is shown not to be blocked based on 4K alias check.
#define MEM_SCHEDULER_BLOCK__ST_BUF                7 //Counts the number of cycles that uops are blocked due to a store buffer full condition.
#define MEM_SCHEDULER_BLOCK__LD_BUF                8 //Counts the number of cycles that uops are blocked due to a load buffer full condition.
#define MEM_SCHEDULER_BLOCK__RSV                   9 //Counts the number of cycles that uops are blocked due to an RSV full condition.
#define MEM_SCHEDULER_BLOCK__ALL                  10 //Counts the number of cycles that uops are blocked for any of the following reasons:  load buffer, store buffer or RSV full.
#define LD_HEAD__L1_MISS                          11 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a DL1 miss.
#define LD_HEAD__WCB_FULL                         12 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to request buffers full or lock in progress.
#define LD_HEAD__ST_ADDR                          13 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a store data forward block.
#define LD_HEAD__DTLB_MISS                        14 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a DTLB miss.
#define LD_HEAD__PGWALK                           15 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a pagewalk.
#define LD_HEAD__OTHER                            16 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to other block cases.
#define LD_HEAD__ANY                              17 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to any number of reasons, including an L1 miss, WCB full, pagewalk, store address block or store data block.
#define LD_HEAD__L1_MISS_AT_RET                   18 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a DL1 miss.
#define LD_HEAD__WCB_FULL_AT_RET                  19 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to request buffers full or lock in progress.
#define LD_HEAD__ST_ADDR_AT_RET                   20 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a store address match.
#define LD_HEAD__DTLB_MISS_AT_RET                 21 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a DTLB miss.
#define LD_HEAD__PGWALK_AT_RET                    22 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a pagewalk.
#define LD_HEAD__OTHER_AT_RET                     23 //Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to other block cases.
#define LD_HEAD__L1_BOUND_AT_RET                  24 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a core bound stall including a store address match, a DTLB miss or a page walk that detains the load from retiring.
#define LD_HEAD__ANY_AT_RET                       25 //Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to any number of reasons, including an L1 miss, WCB full, pagewalk, store address block or store data block, on a load that retires.
#define DTLB_LOAD_MISSES__WALK_COMPLETED          26 //Counts the number of page walks completed due to load DTLB misses to any page size.
#define UOPS_ISSUED__ANY                          27 //Counts the number of uops issued by the front end every cycle.
#define L2_REQUEST__ALL                           28 //Counts the total number of L2 Cache accesses. Counts on a per core basis.
#define L2_REQUEST__MISS                          29 //Counts the number of L2 Cache accesses that resulted in a miss. Counts on a per core basis.
#define L2_REQUEST__HIT                           30 //Counts the number of L2 Cache accesses that resulted in a hit. Counts on a per core basis.
#define LONGEST_LAT_CACHE__MISS                   31 //Counts the number of cacheable memory requests that miss in the LLC. Counts on a per core basis.
#define LONGEST_LAT_CACHE__REFERENCE              32 //Counts the number of cacheable memory requests that access the LLC. Counts on a per core basis.
#define MEM_BOUND_STALLS__LOAD_L2_HIT             33 //Counts the number of cycles the core is stalled due to a demand load which hit in the L2 cache.
#define MEM_BOUND_STALLS__LOAD_LLC_HIT            34 //Counts the number of cycles the core is stalled due to a demand load which hit in the LLC or other core with HITE/F/M.
#define MEM_BOUND_STALLS__LOAD_DRAM_HIT           35 //Counts the number of cycles the core is stalled due to a demand load miss which hit in DRAM or MMIO (Non-DRAM).
#define MEM_BOUND_STALLS__LOAD                    36 //Counts the number of cycles the core is stalled due to a demand load miss which hit in the L2, LLC, DRAM or MMIO (Non-DRAM).
#define MEM_BOUND_STALLS__IFETCH_L2_HIT           37 //Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the L2 cache.
#define MEM_BOUND_STALLS__IFETCH_LLC_HIT          38 //Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the LLC or other core with HITE/F/M.
#define MEM_BOUND_STALLS__IFETCH_DRAM_HIT         39 //Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in DRAM or MMIO (Non-DRAM).
#define MEM_BOUND_STALLS__IFETCH                  40 //Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the L2, LLC, DRAM or MMIO (Non-DRAM).
#define CPU_CLK_UNHALTED__CORE_P                  41 //Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.THREAD_P]
#define CPU_CLK_UNHALTED__THREAD_P                42 //Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.CORE_P]
#define CPU_CLK_UNHALTED__REF_TSC_P               43 //Counts the number of unhalted reference clock cycles at TSC frequency.
#define CPU_CLK_UNHALTED__REF                     44 //This event is deprecated. Refer to new event CPU_CLK_UNHALTED.REF_TSC_P
#define DTLB_STORE_MISSES__WALK_COMPLETED         45 //Counts the number of page walks completed due to store DTLB misses to any page size.
#define TOPDOWN_FE_BOUND__ALL                     46 //Counts the total number of issue slots every cycle that were not consumed by the backend due to frontend stalls.
#define TOPDOWN_FE_BOUND__CISC                    47 //Counts the number of issue slots every cycle that were not delivered by the frontend due to the microcode sequencer (MS).
#define TOPDOWN_FE_BOUND__BRANCH_DETECT           48 //Counts the number of issue slots every cycle that were not delivered by the frontend due to BACLEARS.
#define TOPDOWN_FE_BOUND__PREDECODE               49 //Counts the number of issue slots every cycle that were not delivered by the frontend due to wrong predecodes.
#define TOPDOWN_FE_BOUND__DECODE                  50 //Counts the number of issue slots every cycle that were not delivered by the frontend due to decode stalls.
#define TOPDOWN_FE_BOUND__ITLB                    51 //Counts the number of issue slots every cycle that were not delivered by the frontend due to ITLB misses.
#define TOPDOWN_FE_BOUND__ICACHE                  52 //Counts the number of issue slots every cycle that were not delivered by the frontend due to instruction cache misses.
#define TOPDOWN_FE_BOUND__BRANCH_RESTEER          53 //Counts the number of issue slots every cycle that were not delivered by the frontend due to BTCLEARS.
#define TOPDOWN_FE_BOUND__FRONTEND_LATENCY        54 //Counts the number of issue slots every cycle that were not delivered by the frontend due to a latency related stalls including BACLEARs, BTCLEARs, ITLB misses, and ICache misses.
#define TOPDOWN_FE_BOUND__OTHER                   55 //Counts the number of issue slots every cycle that were not delivered by the frontend due to other common frontend stalls not categorized.
#define TOPDOWN_FE_BOUND__FRONTEND_BANDWIDTH      56 //Counts the number of issue slots every cycle that were not delivered by the frontend due to frontend bandwidth restrictions due to decode, predecode, cisc, and other limitations.
#define TOPDOWN_BAD_SPECULATION__ALL              57 //Counts the total number of issue slots that were not consumed by the backend because allocation is stalled due to a mispredicted jump or a machine clear.
#define TOPDOWN_BAD_SPECULATION__NUKE             58 //Counts the number of issue slots every cycle that were not consumed by the backend due to a machine clear (nuke).
#define TOPDOWN_BAD_SPECULATION__FASTNUKE         59 //Counts the number of issue slots every cycle that were not consumed by the backend due to fast nukes such as memory ordering and memory disambiguation machine clears.
#define TOPDOWN_BAD_SPECULATION__MACHINE_CLEARS   60 //Counts the total number of issue slots that were not consumed by the backend because allocation is stalled due to a machine clear (nuke) of any kind including memory ordering and memory disambiguation.
#define TOPDOWN_BAD_SPECULATION__MISPREDICT       61 //Counts the number of issue slots every cycle that were not consumed by the backend due to branch mispredicts.
#define TOPDOWN_BE_BOUND__ALL                     62 //Counts the total number of issue slots every cycle that were not consumed by the backend due to backend stalls.
#define TOPDOWN_BE_BOUND__ALLOC_RESTRICTIONS      63 //Counts the number of issue slots every cycle that were not consumed by the backend due to certain allocation restrictions.
#define TOPDOWN_BE_BOUND__MEM_SCHEDULER           64 //Counts the number of issue slots every cycle that were not consumed by the backend due to memory reservation stalls in which a scheduler is not able to accept uops.
#define TOPDOWN_BE_BOUND__NON_MEM_SCHEDULER       65 //Counts the number of issue slots every cycle that were not consumed by the backend due to IEC or FPC RAT stalls, which can be due to FIQ or IEC reservation stalls in which the integer, floating point or SIMD scheduler is not able to accept uops.
#define TOPDOWN_BE_BOUND__SERIALIZATION           66 //Counts the number of issue slots every cycle that were not consumed by the backend due to scoreboards from the instruction queue (IQ), jump execution unit (JEU), or microcode sequencer (MS).
#define TOPDOWN_BE_BOUND__REGISTER                67 //Counts the number of issue slots every cycle that were not consumed by the backend due to the physical register file unable to accept an entry (marble stalls).
#define TOPDOWN_BE_BOUND__REORDER_BUFFER          68 //Counts the number of issue slots every cycle that were not consumed by the backend due to the reorder buffer being full (ROB stalls).
#define SERIALIZATION__NON_C01_MS_SCB             69 //Counts the number of issue slots not consumed by the backend due to a micro-sequencer (MS) scoreboard, which stalls the front-end from issuing from the UROM until a specified older uop retires.
#define SERIALIZATION__C01_MS_SCB                 70 //Counts the number of issue slots in a UMWAIT or TPAUSE instruction where no uop issues due to the instruction putting the CPU into the C0.1 activity state. For Tremont, UMWAIT and TPAUSE will only put the CPU into C0.1 activity state (not C0.2 activity state)
#define SERIALIZATION__COLOR_STALLS               71 //Counts the number issue slots not consumed  due to a  color request for an FCW or MXCSR control register when all 4 colors (copies) are already in use.
#define ICACHE__MISSES                            72 //Counts the number of instruction cache misses.
#define ICACHE__ACCESSES                          73 //Counts the number of requests to the instruction cache for one or more bytes of a cache line.
#define ITLB_MISSES__MISS_CAUSED_WALK             74 //Counts the number of page walks initiated by a instruction fetch that missed the first and second level TLBs.
#define ITLB_MISSES__WALK_COMPLETED               75 //Counts the number of page walks completed due to instruction fetch misses to any page size.
#define ITLB_MISSES__PDE_CACHE_MISS               76 //Counts the number of page walks due to an instruction fetch that miss the PDE (Page Directory Entry) cache.
#define OCR__DEMAND_DATA_RD__ANY_RESPONSE         77 //Counts demand data reads that have any type of response.
#define OCR__DEMAND_DATA_RD__DRAM                 78 //Counts demand data reads that were supplied by DRAM.
#define OCR__DEMAND_DATA_RD__L3_MISS              79 //Counts demand data reads that were not supplied by the L3 cache.
#define OCR__DEMAND_RFO__ANY_RESPONSE             80 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that have any type of response.
#define OCR__DEMAND_RFO__DRAM                     81 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by DRAM.
#define OCR__DEMAND_RFO__L3_MISS                  82 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were not supplied by the L3 cache.
#define OCR__DEMAND_CODE_RD__ANY_RESPONSE         83 //Counts demand instruction fetches and L1 instruction cache prefetches that have any type of response.
#define OCR__DEMAND_CODE_RD__DRAM                 84 //Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by DRAM.
#define OCR__DEMAND_CODE_RD__L3_MISS              85 //Counts demand instruction fetches and L1 instruction cache prefetches that were not supplied by the L3 cache.
#define OCR__COREWB_M__ANY_RESPONSE               86 //Counts modified writebacks from L1 cache and L2 cache that have any type of response.
#define OCR__STREAMING_WR__ANY_RESPONSE           87 //Counts streaming stores that have any type of response.
#define OCR__SWPF_RD__ANY_RESPONSE                88 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that have any type of response.
#define OCR__SWPF_RD__DRAM                        89 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by DRAM.
#define OCR__SWPF_RD__L3_MISS                     90 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were not supplied by the L3 cache.
#define OCR__PARTIAL_STREAMING_WR__ANY_RESPONSE   91 //Counts streaming stores which modify only part of a 64 byte cacheline that have any type of response.
#define OCR__FULL_STREAMING_WR__ANY_RESPONSE      92 //Counts streaming stores which modify a full 64 byte cacheline that have any type of response.
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_HIT_NO_FWD  93 //Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_HIT_WITH_FWD  94 //Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.
#define OCR__DEMAND_DATA_RD__L3_HIT__SNOOP_HITM   95 //Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_HIT_NO_FWD  96 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_HIT_WITH_FWD  97 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.
#define OCR__DEMAND_RFO__L3_HIT__SNOOP_HITM       98 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_HIT_NO_FWD  99 //Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_HIT_WITH_FWD 100 //Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.
#define OCR__DEMAND_CODE_RD__L3_HIT__SNOOP_HITM  101 //Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.
#define OCR__SWPF_RD__L3_HIT__SNOOP_HIT_NO_FWD   102 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.
#define OCR__SWPF_RD__L3_HIT__SNOOP_HIT_WITH_FWD 103 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.
#define OCR__SWPF_RD__L3_HIT__SNOOP_HITM         104 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.
#define OCR__DEMAND_DATA_RD__L3_HIT              105 //Counts demand data reads that were supplied by the L3 cache.
#define OCR__DEMAND_RFO__L3_HIT                  106 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache.
#define OCR__DEMAND_CODE_RD__L3_HIT              107 //Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache.
#define OCR__SWPF_RD__L3_HIT                     108 //Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache.
#define OCR__DEMAND_DATA_RD__L3_MISS_LOCAL       109 //Counts demand data reads that were not supplied by the L3 cache. [L3_MISS_LOCAL is alias to L3_MISS]
#define OCR__DEMAND_RFO__L3_MISS_LOCAL           110 //Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were not supplied by the L3 cache. [L3_MISS_LOCAL is alias to L3_MISS]
#define INST_RETIRED__ANY_P                      111 //Counts the total number of instructions retired.
#define UOPS_RETIRED__ALL                        112 //Counts the total number of uops retired.
#define TOPDOWN_RETIRING__ALL                    113 //Counts the total number of consumed retirement slots.
#define UOPS_RETIRED__MS                         114 //Counts the number of uops that are from complex flows issued by the micro-sequencer (MS).
#define UOPS_RETIRED__X87                        115 //Counts the number of x87 uops retired, includes those in MS flows.
#define UOPS_RETIRED__FPDIV                      116 //Counts the number of floating point divide uops retired (x87 and SSE, including x87 sqrt).
#define UOPS_RETIRED__IDIV                       117 //Counts the number of integer divide uops retired.
#define MACHINE_CLEARS__SMC                      118 //Counts the number of machine clears due to program modifying data (self modifying code) within 1K of a recently fetched code page.
#define MACHINE_CLEARS__MEMORY_ORDERING          119 //Counts the number of machine clears due to memory ordering caused by a snoop from an external agent. Does not count internally generated machine clears such as those due to memory disambiguation.
#define MACHINE_CLEARS__FP_ASSIST                120 //Counts the number of floating point operations retired that required microcode assist.
#define MACHINE_CLEARS__DISAMBIGUATION           121 //Counts the number of machine clears due to memory ordering in which an internal load passes an older store within the same CPU.
#define MACHINE_CLEARS__FAST                     122 //Counts the number of machine clears that flush the pipeline and restart the machine without the use of microcode.
#define MACHINE_CLEARS__PAGE_FAULT               123 //Counts the number of machine clears due to a page fault.  Counts both I-Side and D-Side (Loads/Stores) page faults.  A page fault occurs when either the page is not present, or an access violation occurs.
#define MACHINE_CLEARS__FPC_VIRTUAL_TRAP         124 //Counts the number of virtual traps taken.
#define MACHINE_CLEARS__SLOW                     125 //This event is deprecated.
#define MACHINE_CLEARS__MRN_NUKE                 126 //Counts the number of machines clears due to memory renaming.
#define BR_INST_RETIRED__ALL_BRANCHES            127 //Counts the total number of branch instructions retired for all branch types.
#define BR_INST_RETIRED__JCC                     128 //This event is deprecated. Refer to new event BR_INST_RETIRED.COND
#define BR_INST_RETIRED__COND                    129 //Counts the number of retired JCC (Jump on Conditional Code) branch instructions retired, includes both taken and not taken branches.
#define BR_INST_RETIRED__TAKEN                   130 //Counts the number of taken branch instructions retired.
#define BR_INST_RETIRED__FAR_BRANCH              131 //Counts the number of far branch instructions retired, includes far jump, far call and return, and interrupt call and return.
#define BR_INST_RETIRED__NEAR_TAKEN              132 //Counts the number of near taken branch instructions retired.
#define BR_INST_RETIRED__REL_JMP                 133 //Counts the number of near relative JMP branch instructions retired.
#define BR_INST_RETIRED__NON_RETURN_IND          134 //This event is deprecated. Refer to new event BR_INST_RETIRED.INDIRECT
#define BR_INST_RETIRED__INDIRECT                135 //Counts the number of near indirect JMP and near indirect CALL branch instructions retired.
#define BR_INST_RETIRED__INDIRECT_JMP            136 //Counts the number of near indirect JMP branch instructions retired.
#define BR_INST_RETIRED__RETURN                  137 //This event is deprecated. Refer to new event BR_INST_RETIRED.NEAR_RETURN
#define BR_INST_RETIRED__NEAR_RETURN             138 //Counts the number of near RET branch instructions retired.
#define BR_INST_RETIRED__CALL                    139 //This event is deprecated. Refer to new event BR_INST_RETIRED.NEAR_CALL
#define BR_INST_RETIRED__NEAR_CALL               140 //Counts the number of near CALL branch instructions retired.
#define BR_INST_RETIRED__IND_CALL                141 //This event is deprecated. Refer to new event BR_INST_RETIRED.INDIRECT_CALL
#define BR_INST_RETIRED__INDIRECT_CALL           142 //Counts the number of near indirect CALL branch instructions retired.
#define BR_INST_RETIRED__REL_CALL                143 //Counts the number of near relative CALL branch instructions retired.
#define BR_INST_RETIRED__TAKEN_JCC               144 //This event is deprecated. Refer to new event BR_INST_RETIRED.COND_TAKEN
#define BR_INST_RETIRED__COND_TAKEN              145 //Counts the number of taken JCC (Jump on Conditional Code) branch instructions retired.
#define BR_MISP_RETIRED__ALL_BRANCHES            146 //Counts the total number of mispredicted branch instructions retired for all branch types.
#define BR_MISP_RETIRED__JCC                     147 //This event is deprecated. Refer to new event BR_MISP_RETIRED.COND
#define BR_MISP_RETIRED__COND                    148 //Counts the number of mispredicted JCC (Jump on Conditional Code) branch instructions retired.
#define BR_MISP_RETIRED__NEAR_TAKEN              149 //Counts the number of mispredicted near taken branch instructions retired.
#define BR_MISP_RETIRED__NON_RETURN_IND          150 //This event is deprecated. Refer to new event BR_MISP_RETIRED.INDIRECT
#define BR_MISP_RETIRED__INDIRECT                151 //Counts the number of mispredicted near indirect JMP and near indirect CALL branch instructions retired.
#define BR_MISP_RETIRED__INDIRECT_JMP            152 //Counts the number of mispredicted near indirect JMP branch instructions retired.
#define BR_MISP_RETIRED__RETURN                  153 //Counts the number of mispredicted near RET branch instructions retired.
#define BR_MISP_RETIRED__IND_CALL                154 //This event is deprecated. Refer to new event BR_MISP_RETIRED.INDIRECT_CALL
#define BR_MISP_RETIRED__INDIRECT_CALL           155 //Counts the number of mispredicted near indirect CALL branch instructions retired.
#define BR_MISP_RETIRED__TAKEN_JCC               156 //This event is deprecated. Refer to new event BR_MISP_RETIRED.COND_TAKEN
#define BR_MISP_RETIRED__COND_TAKEN              157 //Counts the number of mispredicted taken JCC (Jump on Conditional Code) branch instructions retired.
#define ARITH__IDIV_OCCUPANCY                    158 //Counts the number of active integer dividers per cycle.
#define ARITH__IDIV_ACTIVE                       159 //Counts the number of cycles any of the two integer dividers are active.
#define ARITH__FPDIV_ACTIVE                      160 //Counts the number of cycles the floating point divider is in the loop stage.
#define ARITH__DIV_ACTIVE                        161 //Counts the number of cycles when any of the floating point or integer dividers are active.
#define ARITH__DIV_OCCUPANCY                     162 //This event is deprecated.
#define ARITH__IDIV_UOPS                         163 //Counts the number of integer divider uops executed per cycle.
#define ARITH__FPDIV_UOPS                        164 //Counts the number of floating point divider uops executed per cycle.
#define ARITH__DIV_UOPS                          165 //This event is deprecated.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_4      166 //Counts the number of tagged load uops retired that exceed the latency threshold of 4. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_128    167 //Counts the number of tagged load uops retired that exceed the latency threshold of 128. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_64     168 //Counts the number of tagged load uops retired that exceed the latency threshold of 64. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_32     169 //Counts the number of tagged load uops retired that exceed the latency threshold of 32. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_16     170 //Counts the number of tagged load uops retired that exceed the latency threshold of 16. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_8      171 //Counts the number of tagged load uops retired that exceed the latency threshold of 8. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_512    172 //Counts the number of tagged load uops retired that exceed the latency threshold of 512. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_256    173 //Counts the number of tagged load uops retired that exceed the latency threshold of 256. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_2048   174 //Counts the number of tagged load uops retired that exceed the latency threshold of 2048. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__LOAD_LATENCY_GT_1024   175 //Counts the number of tagged load uops retired that exceed the latency threshold of 1024. Only counts with PEBS enabled.
#define MEM_UOPS_RETIRED__STORE_LATENCY          176 //Counts the number of stores uops retired.
#define MEM_UOPS_RETIRED__DTLB_MISS_LOADS        177 //This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS_LOADS
#define MEM_UOPS_RETIRED__STLB_MISS_LOADS        178 //Counts the number of load ops retired that miss in the second Level TLB.
#define MEM_UOPS_RETIRED__DTLB_MISS_STORES       179 //This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS_STORES
#define MEM_UOPS_RETIRED__STLB_MISS_STORES       180 //Counts the number of store ops retired that miss in the second level TLB.
#define MEM_UOPS_RETIRED__DTLB_MISS              181 //This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS
#define MEM_UOPS_RETIRED__STLB_MISS              182 //Counts the total number of load and store uops retired that missed in the second level TLB.
#define MEM_UOPS_RETIRED__LOCK_LOADS             183 //Counts the number of load uops retired that performed one or more locks.
#define MEM_UOPS_RETIRED__SPLIT_LOADS            184 //Counts the number of retired split load uops.
#define MEM_UOPS_RETIRED__SPLIT_STORES           185 //Counts the number of retired split store uops.
#define MEM_UOPS_RETIRED__SPLIT                  186 //Counts the number of memory uops retired that were splits.
#define MEM_UOPS_RETIRED__ALL_LOADS              187 //Counts the number of load uops retired.
#define MEM_UOPS_RETIRED__ALL_STORES             188 //Counts the number of store uops retired.
#define MEM_UOPS_RETIRED__ALL                    189 //Counts the number of memory uops retired.
#define MEM_LOAD_UOPS_RETIRED__L1_HIT            190 //Counts the number of load uops retired that hit in the L1 data cache.
#define MEM_LOAD_UOPS_RETIRED__L2_HIT            191 //Counts the number of load uops retired that hit in the L2 cache.
#define MEM_LOAD_UOPS_RETIRED__L3_HIT            192 //Counts the number of load uops retired that hit in the L3 cache.
#define MEM_LOAD_UOPS_RETIRED__L1_MISS           193 //Counts the number of load uops retired that miss in the L1 data cache.
#define MEM_LOAD_UOPS_RETIRED__L2_MISS           194 //Counts the number of load uops retired that miss in the L2 cache.
#define MEM_LOAD_UOPS_RETIRED__HITM              195 //Counts the number of load uops retired that hit in the L3 cache, in which a snoop was required and modified data was forwarded from another core or module.
#define MEM_LOAD_UOPS_RETIRED__DRAM_HIT          196 //Counts the number of load uops retired that hit in DRAM.
#define MEM_LOAD_UOPS_RETIRED_MISC__L3_MISS      197 //Counts the number of load uops retired that miss in the L3 cache.
#define MEM_LOAD_UOPS_RETIRED_MISC__HIT_E_F      198 //Counts the number of load uops retired that hit in the L3 cache, in which a snoop was required, and non-modified data was forwarded.
#define MISC_RETIRED1__LFENCE                    199 //Counts the number of LFENCE instructions retired.
#define MISC_RETIRED1__CL_INST                   200 //Counts the number of CLFLUSH, CLWB, and CLDEMOTE instructions retired.
#define MISC_RETIRED2__KEYLOCKER_ACCESS          201 //Counts the number of accesses to KeyLocker cache.
#define MISC_RETIRED2__KEYLOCKER_MISS            202 //Counts the number of misses to KeyLocker cache.
#define MISC_RETIRED__LBR_INSERTS                203 //Counts the number of LBR entries recorded. Requires LBRs to be enabled in IA32_LBR_CTL. [This event is alias to LBR_INSERTS.ANY]
#define LBR_INSERTS__ANY                         204 //This event is deprecated. [This event is alias to MISC_RETIRED.LBR_INSERTS]
#define BACLEARS__ANY                            205 //Counts the total number of BACLEARS due to all branch types including conditional and unconditional jumps, returns, and indirect branches.
#define BTCLEAR__ANY                             206 //Counts the total number of BTCLEARS.


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
        "Fixed Counter: Counts the total number of instructions retired.",
        0,
        0,
        0
    },
    {
        0x00,
        0x02,
        "CPU_CLK_UNHALTED.CORE",
        "Fixed Counter: Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.THREAD]",
        0,
        0,
        0
    },
    {
        0x00,
        0x02,
        "CPU_CLK_UNHALTED.THREAD",
        "Fixed Counter: Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.CORE]",
        0,
        0,
        0
    },
    {
        0x00,
        0x03,
        "CPU_CLK_UNHALTED.REF_TSC",
        "Fixed Counter: Counts the number of unhalted reference clock cycles at TSC frequency.",
        0,
        0,
        0
    },
    {
        0x03,
        0x01,
        "LD_BLOCKS.DATA_UNKNOWN",
        "Counts the number of retired loads that are blocked because its address exactly matches an older store whose data is not ready.",
        0,
        0,
        0
    },
    {
        0x03,
        0x04,
        "LD_BLOCKS.4K_ALIAS",
        "This event is deprecated. Refer to new event LD_BLOCKS.ADDRESS_ALIAS",
        0,
        0,
        0
    },
    {
        0x03,
        0x04,
        "LD_BLOCKS.ADDRESS_ALIAS",
        "Counts the number of retired loads that are blocked because it initially appears to be store forward blocked, but subsequently is shown not to be blocked based on 4K alias check.",
        0,
        0,
        0
    },
    {
        0x04,
        0x01,
        "MEM_SCHEDULER_BLOCK.ST_BUF",
        "Counts the number of cycles that uops are blocked due to a store buffer full condition.",
        0,
        0,
        0
    },
    {
        0x04,
        0x02,
        "MEM_SCHEDULER_BLOCK.LD_BUF",
        "Counts the number of cycles that uops are blocked due to a load buffer full condition.",
        0,
        0,
        0
    },
    {
        0x04,
        0x04,
        "MEM_SCHEDULER_BLOCK.RSV",
        "Counts the number of cycles that uops are blocked due to an RSV full condition.",
        0,
        0,
        0
    },
    {
        0x04,
        0x07,
        "MEM_SCHEDULER_BLOCK.ALL",
        "Counts the number of cycles that uops are blocked for any of the following reasons:  load buffer, store buffer or RSV full.",
        0,
        0,
        0
    },
    {
        0x05,
        0x01,
        "LD_HEAD.L1_MISS",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a DL1 miss.",
        0,
        0,
        0
    },
    {
        0x05,
        0x02,
        "LD_HEAD.WCB_FULL",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to request buffers full or lock in progress.",
        0,
        0,
        0
    },
    {
        0x05,
        0x04,
        "LD_HEAD.ST_ADDR",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a store data forward block.",
        0,
        0,
        0
    },
    {
        0x05,
        0x10,
        "LD_HEAD.DTLB_MISS",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a DTLB miss.",
        0,
        0,
        0
    },
    {
        0x05,
        0x20,
        "LD_HEAD.PGWALK",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a pagewalk.",
        0,
        0,
        0
    },
    {
        0x05,
        0x40,
        "LD_HEAD.OTHER",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to other block cases.",
        0,
        0,
        0
    },
    {
        0x05,
        0x7f,
        "LD_HEAD.ANY",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to any number of reasons, including an L1 miss, WCB full, pagewalk, store address block or store data block.",
        0,
        0,
        0
    },
    {
        0x05,
        0x81,
        "LD_HEAD.L1_MISS_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a DL1 miss.",
        0,
        0,
        0
    },
    {
        0x05,
        0x82,
        "LD_HEAD.WCB_FULL_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to request buffers full or lock in progress.",
        0,
        0,
        0
    },
    {
        0x05,
        0x84,
        "LD_HEAD.ST_ADDR_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a store address match.",
        0,
        0,
        0
    },
    {
        0x05,
        0x90,
        "LD_HEAD.DTLB_MISS_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a DTLB miss.",
        0,
        0,
        0
    },
    {
        0x05,
        0xa0,
        "LD_HEAD.PGWALK_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to a pagewalk.",
        0,
        0,
        0
    },
    {
        0x05,
        0xc0,
        "LD_HEAD.OTHER_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer and retirement are both stalled due to other block cases.",
        0,
        0,
        0
    },
    {
        0x05,
        0xf4,
        "LD_HEAD.L1_BOUND_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to a core bound stall including a store address match, a DTLB miss or a page walk that detains the load from retiring.",
        0,
        0,
        0
    },
    {
        0x05,
        0xff,
        "LD_HEAD.ANY_AT_RET",
        "Counts the number of cycles that the head (oldest load) of the load buffer is stalled due to any number of reasons, including an L1 miss, WCB full, pagewalk, store address block or store data block, on a load that retires.",
        0,
        0,
        0
    },
    {
        0x08,
        0x0e,
        "DTLB_LOAD_MISSES.WALK_COMPLETED",
        "Counts the number of page walks completed due to load DTLB misses to any page size.",
        0,
        0,
        0
    },
    {
        0x0e,
        0x00,
        "UOPS_ISSUED.ANY",
        "Counts the number of uops issued by the front end every cycle.",
        0,
        0,
        0
    },
    {
        0x24,
        0x00,
        "L2_REQUEST.ALL",
        "Counts the total number of L2 Cache accesses. Counts on a per core basis.",
        0,
        0,
        0
    },
    {
        0x24,
        0x01,
        "L2_REQUEST.MISS",
        "Counts the number of L2 Cache accesses that resulted in a miss. Counts on a per core basis.",
        0,
        0,
        0
    },
    {
        0x24,
        0x02,
        "L2_REQUEST.HIT",
        "Counts the number of L2 Cache accesses that resulted in a hit. Counts on a per core basis.",
        0,
        0,
        0
    },
    {
        0x2e,
        0x41,
        "LONGEST_LAT_CACHE.MISS",
        "Counts the number of cacheable memory requests that miss in the LLC. Counts on a per core basis.",
        0,
        0,
        0
    },
    {
        0x2e,
        0x4f,
        "LONGEST_LAT_CACHE.REFERENCE",
        "Counts the number of cacheable memory requests that access the LLC. Counts on a per core basis.",
        0,
        0,
        0
    },
    {
        0x34,
        0x01,
        "MEM_BOUND_STALLS.LOAD_L2_HIT",
        "Counts the number of cycles the core is stalled due to a demand load which hit in the L2 cache.",
        0,
        0,
        0
    },
    {
        0x34,
        0x02,
        "MEM_BOUND_STALLS.LOAD_LLC_HIT",
        "Counts the number of cycles the core is stalled due to a demand load which hit in the LLC or other core with HITE/F/M.",
        0,
        0,
        0
    },
    {
        0x34,
        0x04,
        "MEM_BOUND_STALLS.LOAD_DRAM_HIT",
        "Counts the number of cycles the core is stalled due to a demand load miss which hit in DRAM or MMIO (Non-DRAM).",
        0,
        0,
        0
    },
    {
        0x34,
        0x07,
        "MEM_BOUND_STALLS.LOAD",
        "Counts the number of cycles the core is stalled due to a demand load miss which hit in the L2, LLC, DRAM or MMIO (Non-DRAM).",
        0,
        0,
        0
    },
    {
        0x34,
        0x08,
        "MEM_BOUND_STALLS.IFETCH_L2_HIT",
        "Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the L2 cache.",
        0,
        0,
        0
    },
    {
        0x34,
        0x10,
        "MEM_BOUND_STALLS.IFETCH_LLC_HIT",
        "Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the LLC or other core with HITE/F/M.",
        0,
        0,
        0
    },
    {
        0x34,
        0x20,
        "MEM_BOUND_STALLS.IFETCH_DRAM_HIT",
        "Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in DRAM or MMIO (Non-DRAM).",
        0,
        0,
        0
    },
    {
        0x34,
        0x38,
        "MEM_BOUND_STALLS.IFETCH",
        "Counts the number of cycles the core is stalled due to an instruction cache or TLB miss which hit in the L2, LLC, DRAM or MMIO (Non-DRAM).",
        0,
        0,
        0
    },
    {
        0x3c,
        0x00,
        "CPU_CLK_UNHALTED.CORE_P",
        "Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.THREAD_P]",
        0,
        0,
        0
    },
    {
        0x3c,
        0x00,
        "CPU_CLK_UNHALTED.THREAD_P",
        "Counts the number of unhalted core clock cycles. [This event is alias to CPU_CLK_UNHALTED.CORE_P]",
        0,
        0,
        0
    },
    {
        0x3c,
        0x01,
        "CPU_CLK_UNHALTED.REF_TSC_P",
        "Counts the number of unhalted reference clock cycles at TSC frequency.",
        0,
        0,
        0
    },
    {
        0x3c,
        0x01,
        "CPU_CLK_UNHALTED.REF",
        "This event is deprecated. Refer to new event CPU_CLK_UNHALTED.REF_TSC_P",
        0,
        0,
        0
    },
    {
        0x49,
        0x0e,
        "DTLB_STORE_MISSES.WALK_COMPLETED",
        "Counts the number of page walks completed due to store DTLB misses to any page size.",
        0,
        0,
        0
    },
    {
        0x71,
        0x00,
        "TOPDOWN_FE_BOUND.ALL",
        "Counts the total number of issue slots every cycle that were not consumed by the backend due to frontend stalls.",
        0,
        0,
        0
    },
    {
        0x71,
        0x01,
        "TOPDOWN_FE_BOUND.CISC",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to the microcode sequencer (MS).",
        0,
        0,
        0
    },
    {
        0x71,
        0x02,
        "TOPDOWN_FE_BOUND.BRANCH_DETECT",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to BACLEARS.",
        0,
        0,
        0
    },
    {
        0x71,
        0x04,
        "TOPDOWN_FE_BOUND.PREDECODE",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to wrong predecodes.",
        0,
        0,
        0
    },
    {
        0x71,
        0x08,
        "TOPDOWN_FE_BOUND.DECODE",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to decode stalls.",
        0,
        0,
        0
    },
    {
        0x71,
        0x10,
        "TOPDOWN_FE_BOUND.ITLB",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to ITLB misses.",
        0,
        0,
        0
    },
    {
        0x71,
        0x20,
        "TOPDOWN_FE_BOUND.ICACHE",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to instruction cache misses.",
        0,
        0,
        0
    },
    {
        0x71,
        0x40,
        "TOPDOWN_FE_BOUND.BRANCH_RESTEER",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to BTCLEARS.",
        0,
        0,
        0
    },
    {
        0x71,
        0x72,
        "TOPDOWN_FE_BOUND.FRONTEND_LATENCY",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to a latency related stalls including BACLEARs, BTCLEARs, ITLB misses, and ICache misses.",
        0,
        0,
        0
    },
    {
        0x71,
        0x80,
        "TOPDOWN_FE_BOUND.OTHER",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to other common frontend stalls not categorized.",
        0,
        0,
        0
    },
    {
        0x71,
        0x8d,
        "TOPDOWN_FE_BOUND.FRONTEND_BANDWIDTH",
        "Counts the number of issue slots every cycle that were not delivered by the frontend due to frontend bandwidth restrictions due to decode, predecode, cisc, and other limitations.",
        0,
        0,
        0
    },
    {
        0x73,
        0x00,
        "TOPDOWN_BAD_SPECULATION.ALL",
        "Counts the total number of issue slots that were not consumed by the backend because allocation is stalled due to a mispredicted jump or a machine clear.",
        0,
        0,
        0
    },
    {
        0x73,
        0x01,
        "TOPDOWN_BAD_SPECULATION.NUKE",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to a machine clear (nuke).",
        0,
        0,
        0
    },
    {
        0x73,
        0x02,
        "TOPDOWN_BAD_SPECULATION.FASTNUKE",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to fast nukes such as memory ordering and memory disambiguation machine clears.",
        0,
        0,
        0
    },
    {
        0x73,
        0x03,
        "TOPDOWN_BAD_SPECULATION.MACHINE_CLEARS",
        "Counts the total number of issue slots that were not consumed by the backend because allocation is stalled due to a machine clear (nuke) of any kind including memory ordering and memory disambiguation.",
        0,
        0,
        0
    },
    {
        0x73,
        0x04,
        "TOPDOWN_BAD_SPECULATION.MISPREDICT",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to branch mispredicts.",
        0,
        0,
        0
    },
    {
        0x74,
        0x00,
        "TOPDOWN_BE_BOUND.ALL",
        "Counts the total number of issue slots every cycle that were not consumed by the backend due to backend stalls.",
        0,
        0,
        0
    },
    {
        0x74,
        0x01,
        "TOPDOWN_BE_BOUND.ALLOC_RESTRICTIONS",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to certain allocation restrictions.",
        0,
        0,
        0
    },
    {
        0x74,
        0x02,
        "TOPDOWN_BE_BOUND.MEM_SCHEDULER",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to memory reservation stalls in which a scheduler is not able to accept uops.",
        0,
        0,
        0
    },
    {
        0x74,
        0x08,
        "TOPDOWN_BE_BOUND.NON_MEM_SCHEDULER",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to IEC or FPC RAT stalls, which can be due to FIQ or IEC reservation stalls in which the integer, floating point or SIMD scheduler is not able to accept uops.",
        0,
        0,
        0
    },
    {
        0x74,
        0x10,
        "TOPDOWN_BE_BOUND.SERIALIZATION",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to scoreboards from the instruction queue (IQ), jump execution unit (JEU), or microcode sequencer (MS).",
        0,
        0,
        0
    },
    {
        0x74,
        0x20,
        "TOPDOWN_BE_BOUND.REGISTER",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to the physical register file unable to accept an entry (marble stalls).",
        0,
        0,
        0
    },
    {
        0x74,
        0x40,
        "TOPDOWN_BE_BOUND.REORDER_BUFFER",
        "Counts the number of issue slots every cycle that were not consumed by the backend due to the reorder buffer being full (ROB stalls).",
        0,
        0,
        0
    },
    {
        0x75,
        0x02,
        "SERIALIZATION.NON_C01_MS_SCB",
        "Counts the number of issue slots not consumed by the backend due to a micro-sequencer (MS) scoreboard, which stalls the front-end from issuing from the UROM until a specified older uop retires.",
        0,
        0,
        0
    },
    {
        0x75,
        0x04,
        "SERIALIZATION.C01_MS_SCB",
        "Counts the number of issue slots in a UMWAIT or TPAUSE instruction where no uop issues due to the instruction putting the CPU into the C0.1 activity state. For Tremont, UMWAIT and TPAUSE will only put the CPU into C0.1 activity state (not C0.2 activity state)",
        0,
        0,
        0
    },
    {
        0x75,
        0x08,
        "SERIALIZATION.COLOR_STALLS",
        "Counts the number issue slots not consumed  due to a  color request for an FCW or MXCSR control register when all 4 colors (copies) are already in use.",
        0,
        0,
        0
    },
    {
        0x80,
        0x02,
        "ICACHE.MISSES",
        "Counts the number of instruction cache misses.",
        0,
        0,
        0
    },
    {
        0x80,
        0x03,
        "ICACHE.ACCESSES",
        "Counts the number of requests to the instruction cache for one or more bytes of a cache line.",
        0,
        0,
        0
    },
    {
        0x85,
        0x01,
        "ITLB_MISSES.MISS_CAUSED_WALK",
        "Counts the number of page walks initiated by a instruction fetch that missed the first and second level TLBs.",
        0,
        0,
        0
    },
    {
        0x85,
        0x0e,
        "ITLB_MISSES.WALK_COMPLETED",
        "Counts the number of page walks completed due to instruction fetch misses to any page size.",
        0,
        0,
        0
    },
    {
        0x85,
        0x80,
        "ITLB_MISSES.PDE_CACHE_MISS",
        "Counts the number of page walks due to an instruction fetch that miss the PDE (Page Directory Entry) cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.ANY_RESPONSE",
        "Counts demand data reads that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.DRAM",
        "Counts demand data reads that were supplied by DRAM.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS",
        "Counts demand data reads that were not supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.ANY_RESPONSE",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.DRAM",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by DRAM.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were not supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.ANY_RESPONSE",
        "Counts demand instruction fetches and L1 instruction cache prefetches that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.DRAM",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by DRAM.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_MISS",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were not supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.COREWB_M.ANY_RESPONSE",
        "Counts modified writebacks from L1 cache and L2 cache that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.STREAMING_WR.ANY_RESPONSE",
        "Counts streaming stores that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.ANY_RESPONSE",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.DRAM",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by DRAM.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.L3_MISS",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were not supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.PARTIAL_STREAMING_WR.ANY_RESPONSE",
        "Counts streaming stores which modify only part of a 64 byte cacheline that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.FULL_STREAMING_WR.ANY_RESPONSE",
        "Counts streaming stores which modify a full 64 byte cacheline that have any type of response.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT.SNOOP_HITM",
        "Counts demand data reads that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT.SNOOP_HITM",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT.SNOOP_HITM",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.L3_HIT.SNOOP_HIT_NO_FWD",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, but no data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.L3_HIT.SNOOP_HIT_WITH_FWD",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and non-modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.L3_HIT.SNOOP_HITM",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache where a snoop was sent, the snoop hit, and modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_HIT",
        "Counts demand data reads that were supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_HIT",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_CODE_RD.L3_HIT",
        "Counts demand instruction fetches and L1 instruction cache prefetches that were supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.SWPF_RD.L3_HIT",
        "Counts L1 data cache software prefetches which include T0/T1/T2 and NTA (except PREFETCHW) that were supplied by the L3 cache.",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_DATA_RD.L3_MISS_LOCAL",
        "Counts demand data reads that were not supplied by the L3 cache. [L3_MISS_LOCAL is alias to L3_MISS]",
        0,
        0,
        0
    },
    {
        0xB7,
        0x01,
        "OCR.DEMAND_RFO.L3_MISS_LOCAL",
        "Counts demand reads for ownership (RFO) and software prefetches for exclusive ownership (PREFETCHW) that were not supplied by the L3 cache. [L3_MISS_LOCAL is alias to L3_MISS]",
        0,
        0,
        0
    },
    {
        0xc0,
        0x00,
        "INST_RETIRED.ANY_P",
        "Counts the total number of instructions retired.",
        0,
        0,
        0
    },
    {
        0xc2,
        0x00,
        "UOPS_RETIRED.ALL",
        "Counts the total number of uops retired.",
        0,
        0,
        0
    },
    {
        0xc2,
        0x00,
        "TOPDOWN_RETIRING.ALL",
        "Counts the total number of consumed retirement slots.",
        0,
        0,
        0
    },
    {
        0xc2,
        0x01,
        "UOPS_RETIRED.MS",
        "Counts the number of uops that are from complex flows issued by the micro-sequencer (MS).",
        0,
        0,
        0
    },
    {
        0xc2,
        0x02,
        "UOPS_RETIRED.X87",
        "Counts the number of x87 uops retired, includes those in MS flows.",
        0,
        0,
        0
    },
    {
        0xc2,
        0x08,
        "UOPS_RETIRED.FPDIV",
        "Counts the number of floating point divide uops retired (x87 and SSE, including x87 sqrt).",
        0,
        0,
        0
    },
    {
        0xc2,
        0x10,
        "UOPS_RETIRED.IDIV",
        "Counts the number of integer divide uops retired.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x01,
        "MACHINE_CLEARS.SMC",
        "Counts the number of machine clears due to program modifying data (self modifying code) within 1K of a recently fetched code page.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x02,
        "MACHINE_CLEARS.MEMORY_ORDERING",
        "Counts the number of machine clears due to memory ordering caused by a snoop from an external agent. Does not count internally generated machine clears such as those due to memory disambiguation.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x04,
        "MACHINE_CLEARS.FP_ASSIST",
        "Counts the number of floating point operations retired that required microcode assist.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x08,
        "MACHINE_CLEARS.DISAMBIGUATION",
        "Counts the number of machine clears due to memory ordering in which an internal load passes an older store within the same CPU.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x10,
        "MACHINE_CLEARS.FAST",
        "Counts the number of machine clears that flush the pipeline and restart the machine without the use of microcode.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x20,
        "MACHINE_CLEARS.PAGE_FAULT",
        "Counts the number of machine clears due to a page fault.  Counts both I-Side and D-Side (Loads/Stores) page faults.  A page fault occurs when either the page is not present, or an access violation occurs.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x40,
        "MACHINE_CLEARS.FPC_VIRTUAL_TRAP",
        "Counts the number of virtual traps taken.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x6f,
        "MACHINE_CLEARS.SLOW",
        "This event is deprecated.",
        0,
        0,
        0
    },
    {
        0xc3,
        0x80,
        "MACHINE_CLEARS.MRN_NUKE",
        "Counts the number of machines clears due to memory renaming.",
        0,
        0,
        0
    },
    {
        0xc4,
        0x00,
        "BR_INST_RETIRED.ALL_BRANCHES",
        "Counts the total number of branch instructions retired for all branch types.",
        0,
        0,
        0
    },
    {
        0xc4,
        0x7e,
        "BR_INST_RETIRED.JCC",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.COND",
        0,
        0,
        0
    },
    {
        0xc4,
        0x7e,
        "BR_INST_RETIRED.COND",
        "Counts the number of retired JCC (Jump on Conditional Code) branch instructions retired, includes both taken and not taken branches.",
        0,
        0,
        0
    },
    {
        0xc4,
        0x80,
        "BR_INST_RETIRED.TAKEN",
        "Counts the number of taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xbf,
        "BR_INST_RETIRED.FAR_BRANCH",
        "Counts the number of far branch instructions retired, includes far jump, far call and return, and interrupt call and return.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xc0,
        "BR_INST_RETIRED.NEAR_TAKEN",
        "Counts the number of near taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xdf,
        "BR_INST_RETIRED.REL_JMP",
        "Counts the number of near relative JMP branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xeb,
        "BR_INST_RETIRED.NON_RETURN_IND",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.INDIRECT",
        0,
        0,
        0
    },
    {
        0xc4,
        0xeb,
        "BR_INST_RETIRED.INDIRECT",
        "Counts the number of near indirect JMP and near indirect CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xef,
        "BR_INST_RETIRED.INDIRECT_JMP",
        "Counts the number of near indirect JMP branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xf7,
        "BR_INST_RETIRED.RETURN",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.NEAR_RETURN",
        0,
        0,
        0
    },
    {
        0xc4,
        0xf7,
        "BR_INST_RETIRED.NEAR_RETURN",
        "Counts the number of near RET branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xf9,
        "BR_INST_RETIRED.CALL",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.NEAR_CALL",
        0,
        0,
        0
    },
    {
        0xc4,
        0xf9,
        "BR_INST_RETIRED.NEAR_CALL",
        "Counts the number of near CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xfb,
        "BR_INST_RETIRED.IND_CALL",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.INDIRECT_CALL",
        0,
        0,
        0
    },
    {
        0xc4,
        0xfb,
        "BR_INST_RETIRED.INDIRECT_CALL",
        "Counts the number of near indirect CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xfd,
        "BR_INST_RETIRED.REL_CALL",
        "Counts the number of near relative CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc4,
        0xfe,
        "BR_INST_RETIRED.TAKEN_JCC",
        "This event is deprecated. Refer to new event BR_INST_RETIRED.COND_TAKEN",
        0,
        0,
        0
    },
    {
        0xc4,
        0xfe,
        "BR_INST_RETIRED.COND_TAKEN",
        "Counts the number of taken JCC (Jump on Conditional Code) branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0x00,
        "BR_MISP_RETIRED.ALL_BRANCHES",
        "Counts the total number of mispredicted branch instructions retired for all branch types.",
        0,
        0,
        0
    },
    {
        0xc5,
        0x7e,
        "BR_MISP_RETIRED.JCC",
        "This event is deprecated. Refer to new event BR_MISP_RETIRED.COND",
        0,
        0,
        0
    },
    {
        0xc5,
        0x7e,
        "BR_MISP_RETIRED.COND",
        "Counts the number of mispredicted JCC (Jump on Conditional Code) branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0x80,
        "BR_MISP_RETIRED.NEAR_TAKEN",
        "Counts the number of mispredicted near taken branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0xeb,
        "BR_MISP_RETIRED.NON_RETURN_IND",
        "This event is deprecated. Refer to new event BR_MISP_RETIRED.INDIRECT",
        0,
        0,
        0
    },
    {
        0xc5,
        0xeb,
        "BR_MISP_RETIRED.INDIRECT",
        "Counts the number of mispredicted near indirect JMP and near indirect CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0xef,
        "BR_MISP_RETIRED.INDIRECT_JMP",
        "Counts the number of mispredicted near indirect JMP branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0xf7,
        "BR_MISP_RETIRED.RETURN",
        "Counts the number of mispredicted near RET branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0xfb,
        "BR_MISP_RETIRED.IND_CALL",
        "This event is deprecated. Refer to new event BR_MISP_RETIRED.INDIRECT_CALL",
        0,
        0,
        0
    },
    {
        0xc5,
        0xfb,
        "BR_MISP_RETIRED.INDIRECT_CALL",
        "Counts the number of mispredicted near indirect CALL branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xc5,
        0xfe,
        "BR_MISP_RETIRED.TAKEN_JCC",
        "This event is deprecated. Refer to new event BR_MISP_RETIRED.COND_TAKEN",
        0,
        0,
        0
    },
    {
        0xc5,
        0xfe,
        "BR_MISP_RETIRED.COND_TAKEN",
        "Counts the number of mispredicted taken JCC (Jump on Conditional Code) branch instructions retired.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "ARITH.IDIV_OCCUPANCY",
        "Counts the number of active integer dividers per cycle.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x01,
        "ARITH.IDIV_ACTIVE",
        "Counts the number of cycles any of the two integer dividers are active.",
        1,
        0,
        0
    },
    {
        0xcd,
        0x02,
        "ARITH.FPDIV_ACTIVE",
        "Counts the number of cycles the floating point divider is in the loop stage.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x03,
        "ARITH.DIV_ACTIVE",
        "Counts the number of cycles when any of the floating point or integer dividers are active.",
        1,
        0,
        0
    },
    {
        0xcd,
        0x03,
        "ARITH.DIV_OCCUPANCY",
        "This event is deprecated.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x04,
        "ARITH.IDIV_UOPS",
        "Counts the number of integer divider uops executed per cycle.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x08,
        "ARITH.FPDIV_UOPS",
        "Counts the number of floating point divider uops executed per cycle.",
        0,
        0,
        0
    },
    {
        0xcd,
        0x0c,
        "ARITH.DIV_UOPS",
        "This event is deprecated.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_4",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 4. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_128",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 128. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_64",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 64. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_32",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 32. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_16",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 16. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_8",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 8. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_512",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 512. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_256",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 256. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_2048",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 2048. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x05,
        "MEM_UOPS_RETIRED.LOAD_LATENCY_GT_1024",
        "Counts the number of tagged load uops retired that exceed the latency threshold of 1024. Only counts with PEBS enabled.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x06,
        "MEM_UOPS_RETIRED.STORE_LATENCY",
        "Counts the number of stores uops retired.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x11,
        "MEM_UOPS_RETIRED.DTLB_MISS_LOADS",
        "This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS_LOADS",
        0,
        0,
        0
    },
    {
        0xd0,
        0x11,
        "MEM_UOPS_RETIRED.STLB_MISS_LOADS",
        "Counts the number of load ops retired that miss in the second Level TLB.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x12,
        "MEM_UOPS_RETIRED.DTLB_MISS_STORES",
        "This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS_STORES",
        0,
        0,
        0
    },
    {
        0xd0,
        0x12,
        "MEM_UOPS_RETIRED.STLB_MISS_STORES",
        "Counts the number of store ops retired that miss in the second level TLB.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x13,
        "MEM_UOPS_RETIRED.DTLB_MISS",
        "This event is deprecated. Refer to new event MEM_UOPS_RETIRED.STLB_MISS",
        0,
        0,
        0
    },
    {
        0xd0,
        0x13,
        "MEM_UOPS_RETIRED.STLB_MISS",
        "Counts the total number of load and store uops retired that missed in the second level TLB.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x21,
        "MEM_UOPS_RETIRED.LOCK_LOADS",
        "Counts the number of load uops retired that performed one or more locks.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x41,
        "MEM_UOPS_RETIRED.SPLIT_LOADS",
        "Counts the number of retired split load uops.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x42,
        "MEM_UOPS_RETIRED.SPLIT_STORES",
        "Counts the number of retired split store uops.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x43,
        "MEM_UOPS_RETIRED.SPLIT",
        "Counts the number of memory uops retired that were splits.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x81,
        "MEM_UOPS_RETIRED.ALL_LOADS",
        "Counts the number of load uops retired.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x82,
        "MEM_UOPS_RETIRED.ALL_STORES",
        "Counts the number of store uops retired.",
        0,
        0,
        0
    },
    {
        0xd0,
        0x83,
        "MEM_UOPS_RETIRED.ALL",
        "Counts the number of memory uops retired.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x01,
        "MEM_LOAD_UOPS_RETIRED.L1_HIT",
        "Counts the number of load uops retired that hit in the L1 data cache.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x02,
        "MEM_LOAD_UOPS_RETIRED.L2_HIT",
        "Counts the number of load uops retired that hit in the L2 cache.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x04,
        "MEM_LOAD_UOPS_RETIRED.L3_HIT",
        "Counts the number of load uops retired that hit in the L3 cache.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x08,
        "MEM_LOAD_UOPS_RETIRED.L1_MISS",
        "Counts the number of load uops retired that miss in the L1 data cache.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x10,
        "MEM_LOAD_UOPS_RETIRED.L2_MISS",
        "Counts the number of load uops retired that miss in the L2 cache.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x20,
        "MEM_LOAD_UOPS_RETIRED.HITM",
        "Counts the number of load uops retired that hit in the L3 cache, in which a snoop was required and modified data was forwarded from another core or module.",
        0,
        0,
        0
    },
    {
        0xd1,
        0x80,
        "MEM_LOAD_UOPS_RETIRED.DRAM_HIT",
        "Counts the number of load uops retired that hit in DRAM.",
        0,
        0,
        0
    },
    {
        0xd2,
        0x20,
        "MEM_LOAD_UOPS_RETIRED_MISC.L3_MISS",
        "Counts the number of load uops retired that miss in the L3 cache.",
        0,
        0,
        0
    },
    {
        0xd2,
        0x40,
        "MEM_LOAD_UOPS_RETIRED_MISC.HIT_E_F",
        "Counts the number of load uops retired that hit in the L3 cache, in which a snoop was required, and non-modified data was forwarded.",
        0,
        0,
        0
    },
    {
        0xe0,
        0x02,
        "MISC_RETIRED1.LFENCE",
        "Counts the number of LFENCE instructions retired.",
        0,
        0,
        0
    },
    {
        0xe0,
        0xff,
        "MISC_RETIRED1.CL_INST",
        "Counts the number of CLFLUSH, CLWB, and CLDEMOTE instructions retired.",
        0,
        0,
        0
    },
    {
        0xe1,
        0x10,
        "MISC_RETIRED2.KEYLOCKER_ACCESS",
        "Counts the number of accesses to KeyLocker cache.",
        0,
        0,
        0
    },
    {
        0xe1,
        0x11,
        "MISC_RETIRED2.KEYLOCKER_MISS",
        "Counts the number of misses to KeyLocker cache.",
        0,
        0,
        0
    },
    {
        0xe4,
        0x01,
        "MISC_RETIRED.LBR_INSERTS",
        "Counts the number of LBR entries recorded. Requires LBRs to be enabled in IA32_LBR_CTL. [This event is alias to LBR_INSERTS.ANY]",
        0,
        0,
        0
    },
    {
        0xe4,
        0x01,
        "LBR_INSERTS.ANY",
        "This event is deprecated. [This event is alias to MISC_RETIRED.LBR_INSERTS]",
        0,
        0,
        0
    },
    {
        0xe6,
        0x01,
        "BACLEARS.ANY",
        "Counts the total number of BACLEARS due to all branch types including conditional and unconditional jumps, returns, and indirect branches.",
        0,
        0,
        0
    },
    {
        0xe8,
        0x00,
        "BTCLEAR.ANY",
        "Counts the total number of BTCLEARS.",
        0,
        0,
        0
    },

};

#endif
