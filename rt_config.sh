#!/bin/bash
#
# rt_config.sh - put the host into a deterministic real-time state before
# running jitter/PMU measurements.
#
# The CPU list and frequency should match the kernel command line
# (isolcpus/nohz_full/rcu_nocbs) and the actual base frequency of the CPU.
# Both can be overridden from the environment:
#
#   RT_CPU_LIST="1 2 3 4" ./rt_config.sh
#   FREQ_KHZ=3600000 ./rt_config.sh
#
set -euo pipefail

# Real-time CPUs: default 1..23 (CPU 0 is left for housekeeping).
RT_CPU_LIST="${RT_CPU_LIST:-$(seq 1 23)}"
# Target frequency in kHz (Xeon Gold 6256 base frequency = 3.6 GHz).
FREQ_KHZ="${FREQ_KHZ:-3600000}"

echo "Migrate all possible tasks to CPU 0"
for P in $(ls /proc); do
    # /proc/<pid>/task exists only for processes; -d avoids probing files.
    if [ -d "/proc/$P/task" ]; then
        taskset -acp 0 "$P" >/dev/null 2>&1 || true
    fi
done

echo "Migrate IRQs to CPU 0"
for D in $(ls /proc/irq); do
    if [ -d "/proc/irq/$D" ] && [ "$D" != "0" ]; then
        # smp_affinity bit 0 => only CPU 0.
        echo 1 | sudo tee "/proc/irq/$D/smp_affinity" >/dev/null 2>&1 || true
    fi
done

echo "Set real-time CPU scaling_governor to performance"
for id in $RT_CPU_LIST; do
    gov="/sys/devices/system/cpu/cpu${id}/cpufreq/scaling_governor"
    if [ -w "$gov" ]; then
        echo performance | sudo tee "$gov" >/dev/null || true
    fi
done

echo "Fix real-time CPU frequency to ${FREQ_KHZ} kHz"
for id in $RT_CPU_LIST; do
    c="/sys/devices/system/cpu/cpu${id}/cpufreq"
    if [ -d "$c" ]; then
        echo "$FREQ_KHZ" | sudo tee "$c/scaling_min_freq" >/dev/null || true
        echo "$FREQ_KHZ" | sudo tee "$c/scaling_max_freq" >/dev/null || true
    fi
done

echo "Disable Intel turbo boost"
if [ -w /sys/devices/system/cpu/intel_pstate/no_turbo ]; then
    echo 1 | sudo tee /sys/devices/system/cpu/intel_pstate/no_turbo >/dev/null || true
fi

echo "Disable watchdogs (they use perf events / NMI)"
sudo sysctl -w kernel.watchdog=0
sudo sysctl -w kernel.nmi_watchdog=0

echo "Cancel real-time bandwidth limitation"
# /proc/sys/kernel/sched_rt_runtime_us (default 950000 us/s)
sudo sysctl -w kernel.sched_rt_runtime_us=-1

echo "Reduce vmstat sampling frequency"
# /proc/sys/vm/stat_interval
sudo sysctl -w vm.stat_interval=36000

echo "Allow user-space RDPMC"
sudo bash -c 'echo 2 > /sys/bus/event_source/devices/cpu/rdpmc'

echo "Install MSR kernel module"
sudo modprobe msr

echo "Warning: for the lowest jitter you may also isolate the system:"
# sudo systemctl isolate emergency.target
