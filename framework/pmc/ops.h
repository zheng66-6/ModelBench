/*
 * =====================================================================================
 *
 *       Filename:  ops.h
 *
 *    Description:  operations on MSRs
 *
 *        Version:  1.0
 *        Created:  2024-05-21 15:28:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef __SIR_OPS_H__
#define __SIR_OPS_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/io.h>
#include "./common.h"


#define rdtsc(u64) {                                    \
    uint32_t hi, lo;                                    \
    __asm__ __volatile__ ("RDTSC\n\t" : "=a" (lo), "=d" (hi)); \
    u64 = ((uint64_t )hi << 32) | lo;                        \
}     
    
#define rdtscp(u64) {                                    \
    uint32_t hi, lo, aux;                                \
    __asm__ __volatile__ ("RDTSCP\n\t" : "=a" (lo), "=d" (hi), "=c"(aux)); \
    u64 = ((uint64_t )hi << 32) | lo;                        \
}


#define rdmsr(addr) ({uint32_t eax, edx;                             \
        __asm__ __volatile__("rdmsr" : "=a"(eax), "=d"(edx) : "c"(addr));\
        eax|(uint64_t)edx<<0x20;})
#define wrmsr(addr,value) ({uint32_t eax = (uint32_t)(value&0xffffffff); \
        uint32_t edx = (uint32_t)((value>>32)&0xffffffff);\
        __asm__ __volatile__("wrmsr"::"c"(addr), "a"(eax), "d"(edx));})
#define _rdpmc(addr) ({uint32_t eax, edx;                             \
        __asm__ __volatile__("rdpmc" : "=a"(eax), "=d"(edx) : "c"(addr));\
        eax|(uint64_t)edx<<0x20;})

static inline uint64_t rdpmc(uint32_t addr)
{
    uint64_t ret = _rdpmc(addr);
#if SIR_DEBUG
    printf("rdpmc %x -> %lx\n", addr, ret);
#endif

    return ret;
}



#define MSR_FILE_PATH   "/dev/cpu/%d/msr"

static ssize_t msr_read64(int cpu, uint64_t addr, uint64_t *value)
{
    int fd;
    char path[64];
    ssize_t ret;
    
    snprintf(path, 64, MSR_FILE_PATH, cpu);
    fd = open(path, O_RDONLY);
   
    if (fd < 0) {
#if SIR_DEBUG
        printf("Debug : fail to open %s\n", path);
#endif
        perror("open msr file");
        exit(EXIT_FAILURE);
    }
    
    ret = pread(fd, value, 8, addr);
    close(fd);
    
    return ret;
}


static int msr_write64(int cpu, uint64_t addr, uint64_t value)
{
    int fd;
    char path[64];
    ssize_t ret;
    
    snprintf(path, 64, MSR_FILE_PATH, cpu);
    fd = open(path, O_WRONLY);
   
    if (fd < 0) {
#if SIR_DEBUG
        printf("Debug : fail to open %s\n", path);
#endif
        perror("open msr file");
        exit(EXIT_FAILURE);
    }
    
#if SIR_DEBUG
    printf("wrmsr %lx %lx\n", addr, value);
#endif
    ret = pwrite(fd, &value, 8, addr);
    close(fd);
#if SIR_DEBUG
    if (ret != 8)
        printf("Debug : fail to write msr(cpu=%d, addr=0x%lx, value=0x%lx)\n",
                cpu, addr, value);
#endif
    
    return ret;
}


/* mmap a character device has no sense, fool!
 * 
static int __msr_mmap_fd[MAX_CORES];
static void * msr_mmap(int cpu)
{
    off_t offset = 0;
    size_t length = sysconf(_SC_PAGESIZE);
    void *addr;
    char path[64];
    
    snprintf(path, 64, MSR_FILE_PATH, cpu);
    __msr_mmap_fd[cpu] = open(path, O_RDWR);
    if (__msr_mmap_fd[cpu] == -1) {
        perror("mmap open");
        exit(EXIT_FAILURE);
    }
    
    addr = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, __msr_mmap_fd[cpu], offset);
    if (addr == MAP_FAILED) {
        perror("mmap");
        exit(EXIT_FAILURE);
    }
    
    return addr;
}


static int msr_unmap(void * addr)
{
    size_t length = sysconf(_SC_PAGESIZE);
    
    if (munmap(addr, length) == -1) {
        perror("munmap");
        return 1;
    }
}
*/








#endif
