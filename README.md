# HDRT Model Toolchain

Source code required to **generate, compile and execute Simulink models** on
Linux with the HDRT (Hidden Dragon Real-Time) measurement flow.

The toolchain generates a standalone C `main()` for a Simulink model, pins it
to a dedicated CPU, runs it under `SCHED_FIFO`, and records the per-step
execution-time distribution together with x86 PMU events.

---

## 1. Components

| Path | Description |
|------|-------------|
| `framework/` | Runtime support sources. Builds `libhdtmp.a` (TSC timing, runtime-distribution sampling, PMU event sampling, task-isolation helper) and provides `thread.h` pthread helpers (`EPCPU_BIND`, `EPRT_FIFO`, ...). |
| `framework/pmc/` | x86 PMU/MSR register descriptions (`pmu.h`, `ops.h`, `regs.h`, `common.h`) and per-CPU event tables under `cpu/`. |
| `model_config/xert/` | Simulink system target file (`xert.tlc`), its `main()` template (`xert_main.tlc`), the make hook and the activation callback. |
| `model_config/toolchain/` | Registerable Simulink custom toolchains for GNU `gcc`, LLVM `clang` and Intel `icx`. |
| `model_config/scripts/` | Helper MATLAB/shell scripts copied into each generated build directory. |
| `model_config/model_code_gen.py` | Batch driver: configures models and generates code through the MATLAB Engine. |
| `model_benchmark/` | Reference Simulink models (`<id>_<name>/` with `.slx`/`.mdl`, `metadata.json`, `license.txt`). |
| `isolation_patch/isolation.patch` | Task-isolation patch for Linux 5.4.87 (`PR_TASK_ISOLATION`). |
| `rt_config.sh` | Host real-time configuration (CPU affinity, governors, IRQ migration, watchdogs, RDPMC, MSR). |
| `install_path.m` | Adds the target-file/toolchain folders to the MATLAB path. |

### Data flow

```
Simulink model (.slx/.mdl)
   │  xert.tlc + xert_main.tlc + modelconfig1.m + powerGUI2Discrete.m
   ▼
<model>_xert_rtw/ert_main.c ──► gcc / clang / icx ──► ../<model> executable
   │                                                     │
   │  rtdRegister / runtimeDistributionSampleOnce        │ sudo run.sh
   ▼                                                     ▼
libhdtmp.a (timeSample, pmuSample) ────────────────► sample log file
```

---

## 2. Environment baseline

The reference setup used for the jitter measurements:

| Item | Value |
|------|-------|
| CPU | Intel Xeon Gold 6256 (Cascade Lake, `/proc/cpuinfo` model `85`, 3.6 GHz base) |
| OS | Ubuntu 20.04 LTS, x86_64 |
| Kernel | Linux 5.4.87 with `isolation_patch/isolation.patch` |
| MATLAB | R2025a (Simulink + Simulink Coder + MATLAB Engine for Python) |
| Compilers | GCC 15.2.0, Intel oneAPI ICX 2025.3.3, LLVM Clang 18.1.0 |
| Python | 3.12.3 |
| Build tools | GNU Make, `gmake` shipped with MATLAB |

Required system packages (Ubuntu names may differ for newer releases):

```bash
sudo apt-get install build-essential make gcc g++ python3 python3-pip \
                     libc6-dev linux-headers-$(uname -r)
```

The toolchains currently hard-code `-march=cascadelake` (Xeon Gold 6256).
Edit `model_config/toolchain/*/*_tc.m` if you target a different CPU.

> **Note on generated PMU headers.** `framework/pmc/cpu/*_core.h` are
> auto-generated from Intel perfmon JSON. Some `#define` lines contain `:` and
> `=` in the macro name and therefore trigger
> `ISO C99 requires whitespace after the macro name` warnings. They are
> harmless for this code base; `framework/Makefile` does not use `-Werror`.

---

## 3. System real-time configuration

### 3.1 Kernel with task isolation

The task-isolation feature (`PR_TASK_ISOLATION`) is optional: the runtime
library compiles and runs without it, but `enableTaskIsolation()` then becomes
a no-op.

```bash
# Obtain the matching source tree
tar xf linux-5.4.87.tar.xz
cd linux-5.4.87

# Apply the backport (patch -p1 strips linux-5.4.87_old/ and _new/)
patch -p1 < /path/to/open_source/isolation_patch/isolation.patch

# Enable the feature and rebuild
scripts/config --enable CONFIG_TASK_ISOLATION
make olddefconfig
make -j"$(nproc)"
sudo make modules_install install
```

Add the boot parameters that reserve the real-time CPUs and keep the TSC
stable (adjust the CPU list to your machine):

```
tsc=reliable isolcpus=nohz,domain,1-23 nohz_full=1-23 rcu_nocbs=1-23 \
nowatchdog mce=off intel_iommu=off
```

For the lowest jitter you may additionally add `processor.max_cstate=1
intel_idle.max_cstate=1`. Reboot into the new kernel and verify:

```bash
uname -r
cat /sys/devices/system/cpu/isolated
cat /sys/devices/system/cpu/nohz_full
```

### 3.2 Host configuration script

`rt_config.sh` prepares the machine for measurement. Review the CPU list and
frequency at the top before running:

```bash
chmod +x rt_config.sh
sudo ./rt_config.sh

# Override defaults if needed
sudo RT_CPU_LIST="1 2 3 4" FREQ_KHZ=3600000 ./rt_config.sh
```

It performs:

1. Migrates all user tasks to CPU 0 with `taskset`.
2. Migrates IRQs to CPU 0 (`smp_affinity = 1`).
3. Sets `scaling_governor=performance` for the real-time CPUs.
4. Pins `scaling_min_freq`/`scaling_max_freq` to `FREQ_KHZ`.
5. Disables Intel turbo boost.
6. Disables `kernel.watchdog` and `kernel.nmi_watchdog` (they consume perf/NMI).
7. Sets `kernel.sched_rt_runtime_us=-1` (no RT bandwidth cap).
8. Reduces `vm.stat_interval`.
9. Enables user-space RDPMC (`/sys/bus/event_source/devices/cpu/rdpmc = 2`).
10. Loads the `msr` kernel module.

Verify the PMU interface before measuring:

```bash
ls /dev/cpu/*/msr          # needs the msr module
cat /sys/bus/event_source/devices/cpu/rdpmc   # should print 2
grep -E '^model|^cpu MHz' /proc/cpuinfo | head
```

---

## 4. Build and install the runtime library

```bash
cd framework
make                     # builds libhdtmp.a
sudo make install        # -> /usr/local/lib/libhdtmp.a
                         # -> /usr/local/include/framework/*.h
                         # -> /usr/local/include/framework/pmc/**/*.h
```

`Makefile` reads the x86 `model` field from `/proc/cpuinfo` and selects the
matching PMU header:

| CPU model | Define |
|-----------|--------|
| 85 | `CPU_CASCADELAKEX` (Cascade Lake / Xeon Gold 6256) |
| 94, 158 | `CPU_SKYLAKE` |
| 151 | `CPU_ALDERLAKE` |

An unrecognised model stops the build with an explicit error; add a mapping in
`framework/Makefile` (and an event-name block in `framework/pmuSample.c`) if
needed. Generated code includes `framework/timeSample.h`,
`framework/taskIsolation.h` and `framework/thread.h`, which in turn include
`framework/pmc/*.h`.

---

## 5. MATLAB setup and toolchain registration

The target-file tree must contain `xert/`, `scripts/`, `toolchain/`, and (for
the scripted flow) `install_path.m`. You can use either:

* the existing `model_stf` tree, or
* a staged copy of `open_source/model_config`:

```bash
# Example: build a self-contained target-file root from open_source
mkdir -p /opt/hdrt/model_stf
cp -r open_source/model_config/* /opt/hdrt/model_stf/
cp open_source/install_path.m     /opt/hdrt/model_stf/
export HDRT_STF_ROOT=/opt/hdrt/model_stf
```

In MATLAB, from that root:

```matlab
run('install_path.m')          % add xert/, scripts/ and toolchain/ to the path

cd('toolchain/gnu_gcc');    install_gcc_tc;    cd('../..')
cd('toolchain/llvm_clang'); install_clang_tc;  cd('../..')
cd('toolchain/intel_icx');  install_icx_tc;    cd('../..')
```

Each `install_*` script runs the corresponding `*_tc.m`, writes the toolchain
`.mat` file (for example `toolchain/gnu_gcc/gnu_gcc_tc.mat`) and registers it
through `rtwTargetInfo.m`. The `.mat` files are generated artifacts and are not
committed.

After registration the toolchains appear under
**Configuration Parameters → Hardware Implementation → Toolchain**:

* `HDRT Linux GNU/gcc | gcc/g++`
* `HDRT Linux LLVM/Clang | clang/clang++`
* `HDRT Linux Intel/ICX | icx/icpx`

---

## 6. Model code generation

### 6.1 Prepare the model tree

`model_code_gen.py` expects the following layout:

```
<HDRT_PROJ_ROOT>/<compiler>/<opt>/simulink_projects/<project>/<model>.slx
```

Stage the reference models accordingly, for example:

```bash
export HDRT_PROJ_ROOT=$PWD/simulink_projects_codes
mkdir -p "$HDRT_PROJ_ROOT/gcc/o2/simulink_projects"
cp -r model_benchmark/* "$HDRT_PROJ_ROOT/gcc/o2/simulink_projects/"
```

### 6.2 Configuration

Environment variables understood by `model_code_gen.py`:

| Variable | Default | Meaning |
|----------|---------|---------|
| `HDRT_PROJ_ROOT` | `<model_config>/simulink_projects_codes` | Root of the staged model tree |
| `HDRT_STF_ROOT` | `/home/hdrt/projects/jitter_analysis/model_stf` | Target-file/toolchain root (`xert/`, `toolchain/`) |
| `HDRT_SAMPLE_LOG_ROOT` | `/home/hdrt/projects/jitter_analysis/sample_log` | Default log directory written into generated code |

The compiler/optimization pairs to build are listed in `COMPILER_OPTS` inside
the script. By default only `gcc/o2` is enabled; uncomment the other entries to
cover `o0/o1/o2/o3/os` or `icx`/`clang`.

The script does **not** write a database; progress and failures are logged to
the console only.

### 6.3 Validate paths without MATLAB

```bash
cd open_source/model_config
python3 model_code_gen.py --dry-run
```

The dry-run prints every runnable combination (model dir, toolchain, `-O`
flag, `save_path`) and every skipped combination with its reason. It requires
neither MATLAB nor `matlab.engine`.

### 6.4 Generate code

```bash
python3 model_code_gen.py
```

For each combination the script:

1. Rewrites the default `save_path` fallback in `xert/xert_main.tlc`.
2. Patches the optimization flag in the selected `toolchain/<dir>/*_tc.m` and
   installs the toolchain.
3. For each project: cleans old `*_xert_rtw`/`.slxc`, loads the model, sets the
   toolchain and `Faster Runs` configuration, applies `modelconfig1` and
   `powerGUI2Discrete`, saves, then runs `rtwbuild`.

Generated files land in `<project>/<model>_xert_rtw/`. The `after_make` hook
copies `make.sh` and `run.sh` into that directory.

### 6.5 Manual build for a single model

With the model loaded in MATLAB:

```matlab
modelconfig1('MyModel');        % xert.tlc, fixed-step ode3 @ 1e-6 s
powerGUI2Discrete('MyModel');   % (optional) set powergui to Discrete @ 1e-6
rtwbuild('MyModel');            % or press Ctrl+B
```

`modelconfig1.m` selects `xert.tlc`, enables `UseToolchainInfoCompliant`, sets
a fixed-step solver and speed-oriented optimization. The activation callback
(`xert_activate_callback.m`) calls `modelconfig1` automatically when the target
is applied.

### 6.6 Rebuild without MATLAB

Inside a `*_xert_rtw` directory:

```bash
./make.sh        # make clean + make, then remove *.o/*.a/*.tmp
```

---

## 7. Running and measuring

From the `*_xert_rtw` directory:

```bash
./run.sh [cpu] [iterations] [evt_id]
```

Defaults: `cpu=13`, `iterations=10000`, `evt_id=32`. `run.sh` invokes the
executable with `sudo` because `mlockall()`, `SCHED_FIFO` and task isolation
require privileges. You can also run it directly:

```bash
sudo ../MyModel <cpu> <iterations> <evt_id>
```

| Argument | Meaning |
|----------|---------|
| `cpu` | CPU the process is pinned to (`EPCPU_BIND`). Use an isolated CPU. |
| `iterations` | Number of simulation steps to measure. |
| `evt_id` | Base PMU event id; the four programmable counters use `evt_id .. evt_id+3`. `-1` keeps the built-in defaults. |

The generated `main()` performs: `EPCPU_BIND` → `EPRT_FIFO` → `mlockall` →
`rtdRegister` → `initialize` → 1 s warm-up → (optional) task isolation →
measurement loop (`rdtsc` + `pmu_record` around each `_step`) → `rtdPrint` →
`terminate`.

### 7.1 Output log

The log directory is chosen as:

1. `HDRT_SAMPLE_LOG_DIR` if set and non-empty;
2. otherwise the default `save_path` baked into generated code (updated by
   `model_code_gen.py`).

The file name is `<cpu_model>-<model>-<evt_id>.log`, e.g.
`85-ThreePhaseGridInverter-32.log`. **The directory must already exist**;
`rtdPrint()` exits if `fopen()` fails:

```bash
export HDRT_SAMPLE_LOG_DIR=/data/hdrt_logs
mkdir -p "$HDRT_SAMPLE_LOG_DIR"
```

The log contains:

* `********* <model>(<timestamp>) *********` followed by the execution-time
  histogram, one line per bucket: `<bucket_time_us> : <sample_count>`.
* `CPU_Model_ID`, `Perf_Event_ID`, `Perf_Event_Name` for the three fixed and
  four programmable counters.
* `MAX_TICKS`, `TICKS_TOTAL`, `STEPS_TOTAL`, `CPU_FREQ`.
* `Time_info(ns): Max / Avg / Min` — the headline jitter numbers.
* `Top-HEAD` table: the slowest steps (sorted by execution time) with the
  PMU deltas for each step.
* `Head-<top>` table: the first `top` steps in step order.

`HEAD` (20) and the top-record capacity (default `iterations`) are defined in
`framework/pmuSample.h` and passed from `xert_main.tlc`.

### 7.2 recommended measurement procedure

1. Reboot with the isolation kernel and boot parameters; confirm
   `isolated`/`nohz_full`.
2. Run `sudo ./rt_config.sh` and verify RDPMC/MSR access.
3. Build/install `libhdtmp.a` (`framework/`).
4. Generate code for the target compiler/optimization pair.
5. On an isolated CPU, run several iterations (e.g. `./run.sh 13 100000 32`).
6. Compare `MAX`/`AVG`/`MIN` and inspect the `Top-20` rows for outliers. Repeat
   runs should produce a stable distribution; large variance usually indicates
   a non-isolated CPU, frequency scaling, an unbound IRQ, or missing MSR/RDPMC
   permissions.

### 7.3 Common failures

| Symptom | Likely cause |
|---------|--------------|
| `open msr file: Permission denied` | `msr` module not loaded or not running as root |
| `pmu_init` fails / RDPMC reads zero | `rdpmc` not set to 2 or CPU not supported |
| `mlockall failed` | Not running as root (or `RLIMIT_MEMLOCK` too low) |
| `rtdPrint` exits immediately | `HDRT_SAMPLE_LOG_DIR` does not exist |
| `Failed to find number of events` | CPU model not present in `list_pmu_cpu_num_events` |
| Toolchain not listed in Simulink | `install_*_tc.m` was not run or MATLAB path not saved |
| `-march` error on another host | Edit `-march=cascadelake` in `*_tc.m` |
| `model directory not found` in `--dry-run` | `HDRT_PROJ_ROOT` not staged as described above |

---

## 8. Known limitations

* x86_64 only; PMU event tables cover Cascade Lake, Skylake and Alder Lake.
* The toolchains hard-code `-march=cascadelake`; edit `*_tc.m` for other CPUs.
* `-lcrypto` is linked by the toolchains but not used by this code.
* `-L/usr/local/lib` is assumed for `libhdtmp.a` (see `*_tc.m`).
* Task isolation requires kernel support for `PR_TASK_ISOLATION`; otherwise the
  feature silently degrades.
* `get_cpu_freq_mhz()` reads the third `cpu MHz` entry from `/proc/cpuinfo`;
  keep frequency scaling/turbo disabled for stable results.
* `model_code_gen.py` requires the MATLAB Engine for Python; `--dry-run` is the
  only mode that works without it.
* The toolchain `.mat` files and `*_xert_rtw/` directories are generated
  artifacts and are not part of the source tree.

---

## 9. License

Released under the MIT License; see [LICENSE](LICENSE).

The files under `framework/pmc/` are distributed under the MIT License as well,
unless a component carries its own license, in which case that license applies.
