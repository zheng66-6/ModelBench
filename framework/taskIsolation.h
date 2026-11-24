#ifndef __TASK_ISOLATION__
#define __TASK_ISOLATION__

#include <errno.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/prctl.h>

#ifndef PR_TASK_ISOLATION   /* Not in system headers yet? */
#define PR_TASK_ISOLATION      48
#define PR_TASK_ISOLATION_ENABLE   (1 << 0)
#define PR_TASK_ISOLATION_SET_SIG(sig) (((sig) & 0x7f) << 8)
#define PR_TASK_ISOLATION_GET_SIG(bits) (((bits) >> 8) & 0x7f)
#endif


#define timeCurrent(tv)     gettimeofday((tv), NULL);
static int timeoutFrom(struct timeval *start,  double msecs_timeout)
{
    struct timeval now;
    double duration;

    gettimeofday(&now, NULL);
    duration = (now.tv_sec - start->tv_sec)*1000.0 + \
               (now.tv_usec - start->tv_usec) / 1000.0;

    return duration >= msecs_timeout;
}


static inline int prctlIsolation(int flags)
{
    return prctl(PR_TASK_ISOLATION, flags, 0, 0, 0);
}

static int enableTaskIsolation()
{
    int ret=0;
    struct timeval start;

    // get from /sys/devices/system/cpu/nohz_full and /sys/devices/system/cpu/isolated
    // TODO : make sure affinitive cpu is in two lists.

    timeCurrent(&start);
    while (!timeoutFrom(&start, 1000)) {
        ret = prctlIsolation(PR_TASK_ISOLATION_ENABLE);
        if (ret == 0 || errno != EAGAIN) {
            break;
        }
    }
    if (ret != 0) {
        prctlIsolation(0);
	printf("couldn't enable isolation: FAIL\n");
	exit(EXIT_FAILURE);
    }

    return ret;
}


static int disableTaskIsolation()
{
    int ret;

    ret = prctlIsolation(0);

    return ret;
}





#endif
