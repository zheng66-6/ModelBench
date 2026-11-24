/*
 * =====================================================================================
 *
 *       Filename:  regs.h
 *
 *    Description:  register defines
 *
 *        Version:  1.0
 *        Created:  2024-05-21 15:11:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef __SIR_REGS_H__
#define __SIR_REGS_H__

#include <stdint.h>


struct event_select_register {
    union {
        struct {
            uint64_t event_select : 8;
            uint64_t umask : 8;
            uint64_t usr : 1;
            uint64_t os : 1;
            uint64_t edge : 1;
            uint64_t pin_control : 1;
            uint64_t apic_int : 1;
            uint64_t any_thread : 1;
            uint64_t enable : 1;
            uint64_t invert : 1;
            uint64_t cmask : 8;
            uint64_t in_tx : 1;
            uint64_t in_txcp : 1;
            uint64_t reservedX : 30;
        } fields;
        uint64_t value;
    };
};



struct fixed_event_control_register {
    union {
        struct {
            // CTR0
            uint64_t os0 : 1;
            uint64_t usr0 : 1;
            uint64_t any_thread0 : 1;
            uint64_t enable_pmi0 : 1;
            // CTR1
            uint64_t os1 : 1;
            uint64_t usr1 : 1;
            uint64_t any_thread1 : 1;
            uint64_t enable_pmi1 : 1;
            // CTR2
            uint64_t os2 : 1;
            uint64_t usr2 : 1;
            uint64_t any_thread2 : 1;
            uint64_t enable_pmi2 : 1;
            // CTR3
            uint64_t os3 : 1;
            uint64_t usr3 : 1;
            uint64_t any_thread3 : 1;
            uint64_t enable_pmi3 : 1;

            uint64_t reserved1 : 48;
        } fields;
        uint64_t value;
    };
};









#endif
