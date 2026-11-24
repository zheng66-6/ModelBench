"""Generate Simulink C code for every configured compiler/optimization pair.

The script drives a MATLAB Engine session, configures each Simulink model for
the HDRT ``xert`` target, and then generates code with ``rtwbuild``.  It does
not record anything in a database; build status is written to the log only.

All layout-dependent paths can be overridden with environment variables:

    HDRT_PROJ_ROOT       Root holding <compiler>/<opt>/simulink_projects.
                         Default: <this dir>/simulink_projects_codes
    HDRT_STF_ROOT        Root of the HDRT system-target-file tree
                         (contains xert/ and toolchain/).
                         Default: /home/hdrt/projects/jitter_analysis/model_stf
    HDRT_SAMPLE_LOG_ROOT Root under which generated executables write logs.
                         Default: /home/hdrt/projects/jitter_analysis/sample_log

Typical usage:

    python3 model_code_gen.py --dry-run   # validate paths, no MATLAB needed
    python3 model_code_gen.py             # generate code for all combinations
"""

import os
import re
import zipfile
import argparse
import logging
import time

# MATLAB Engine for Python is an optional dependency: only fail once we really
# need to start an engine (``--dry-run`` must work without MATLAB installed).
try:
    import matlab.engine
    MatlabExecutionError = matlab.engine.MatlabExecutionError
except ImportError:  # pragma: no cover - depends on the local environment
    matlab = None
    MatlabExecutionError = Exception

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------

# Compiler -> optimisation levels to iterate over.  Add entries here to build
# additional variants (for example "o0", "o1", "o3", "os").
COMPILER_OPTS = {
    "gcc": ["o2"],
    # "gcc": ["o0", "o1", "o2", "o3", "os"],
}

# Delay between projects so MATLAB can release file handles before the next
# model is loaded.
SLEEP_BETWEEN_MODELS = 0.5

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
PROJ_ROOT = os.environ.get(
    "HDRT_PROJ_ROOT", os.path.join(BASE_DIR, "simulink_projects_codes")
)
STF_ROOT = os.environ.get(
    "HDRT_STF_ROOT", "/home/hdrt/projects/jitter_analysis/model_stf"
)
SAMPLE_LOG_ROOT = os.environ.get(
    "HDRT_SAMPLE_LOG_ROOT", "/home/hdrt/projects/jitter_analysis/sample_log"
)

# compiler -> Simulink toolchain display name / toolchain dir / source file
# / MATLAB install function (all resolved below STF_ROOT).
TOOLCHAINS = {
    "gcc": {
        "name": "HDRT Linux GNU/gcc | gcc/g++",
        "dir": "gnu_gcc",
        "src": "gnu_tc.m",
        "install": "install_gcc_tc",
    },
    "icx": {
        "name": "HDRT Linux Intel/ICX | icx/icpx",
        "dir": "intel_icx",
        "src": "icx_tc.m",
        "install": "install_icx_tc",
    },
    "clang": {
        "name": "HDRT Linux LLVM/Clang | clang/clang++",
        "dir": "llvm_clang",
        "src": "clang_tc.m",
        "install": "install_clang_tc",
    },
}

# Filled in by main() once the active compiler/optimisation pair is known.
PROJ_DIR = None
TOOLCHAIN_NAME = None

logging.basicConfig(
    level=logging.INFO, format="%(asctime)s %(levelname)s: %(message)s"
)

# MATLAB engine handle, created in main().
eng = None


# ---------------------------------------------------------------------------
# Path / toolchain helpers
# ---------------------------------------------------------------------------


def prepare_combo(compiler, opt_level):
    """Return (proj_dir, tc_path, None) if runnable, or (None, None, reason)."""
    if compiler not in TOOLCHAINS:
        return None, None, f"unknown compiler '{compiler}'"

    if opt_level not in COMPILER_OPTS.get(compiler, []):
        return None, None, f"opt '{opt_level}' not configured for {compiler}"

    proj_dir = os.path.join(PROJ_ROOT, compiler, opt_level, "simulink_projects")
    if not os.path.isdir(proj_dir):
        return None, None, f"model directory not found: {proj_dir}"

    tc = TOOLCHAINS[compiler]
    tc_path = os.path.join(STF_ROOT, "toolchain", tc["dir"], tc["src"])
    if not os.path.isfile(tc_path):
        return None, None, f"toolchain file not found: {tc_path}"

    return proj_dir, tc_path, None


# Matches the literal default ``save_path = "...";`` line in xert_main.tlc.
# The generated main() still honours HDRT_SAMPLE_LOG_DIR at run time; this
# default is only used when that environment variable is unset.
SAVE_PATH_RE = re.compile(r'(?m)^([ \t]*save_path = ")[^"]*(";[ \t]*)$')


def update_xert_save_path(compiler, opt_level):
    """Update the default save_path fallback in model_stf/xert/xert_main.tlc."""
    tlc_path = os.path.join(STF_ROOT, "xert", "xert_main.tlc")
    if not os.path.isfile(tlc_path):
        raise SystemExit(f"xert_main.tlc not found: {tlc_path}")

    with open(tlc_path, encoding="utf-8") as f:
        content = f.read()

    if len(SAVE_PATH_RE.findall(content)) != 1:
        raise SystemExit(
            f"expected exactly one 'save_path = \"...\";' line in {tlc_path}"
        )

    new_path = f"{SAMPLE_LOG_ROOT}/%<qmodelName>/{compiler}/{opt_level}"
    content = SAVE_PATH_RE.sub(
        lambda m: f"{m.group(1)}{new_path}{m.group(2)}", content, count=1
    )
    with open(tlc_path, "w", encoding="utf-8") as f:
        f.write(content)
    logging.info("updated save_path in %s -> %s/%s", tlc_path, compiler, opt_level)


def update_toolchain_on_opts(compiler, opt_level):
    """Patch only the optimization-level token in model_stf's <compiler>_tc.m."""
    tc = TOOLCHAINS[compiler]
    tc_path = os.path.join(STF_ROOT, "toolchain", tc["dir"], tc["src"])
    if not os.path.isfile(tc_path):
        raise SystemExit(f"toolchain file not found: {tc_path}")

    with open(tc_path, encoding="utf-8") as f:
        content = f.read()

    # Only an uncommented line starting at column 0 is considered.
    line_pattern = re.compile(r"(?m)^optimsOnOpts\s*=.*$")
    lines = line_pattern.findall(content)
    if len(lines) != 1:
        raise SystemExit(
            f"expected exactly one uncommented optimsOnOpts line in {tc_path}"
        )

    new_flag = "-" + opt_level.capitalize()
    flags = re.findall(r"-O[0-9A-Za-z]+", lines[0])
    if len(flags) != 1:
        raise SystemExit(
            f"expected exactly one -O flag in optimsOnOpts line of {tc_path}"
        )

    new_line = lines[0].replace(flags[0], new_flag, 1)
    if new_line == lines[0]:
        logging.info("toolchain %s already at %s", tc_path, new_flag)
        return

    content = content.replace(lines[0], new_line, 1)
    with open(tc_path, "w", encoding="utf-8") as f:
        f.write(content)
    logging.info("updated %s optimsOnOpts: %s -> %s", tc_path, flags[0], new_flag)


def add_matlab_paths():
    """Add xert/, scripts/ and toolchain/* to the MATLAB path.

    When an install_path.m is present in STF_ROOT we prefer it; otherwise we
    add the directories directly.  This lets the script run against either the
    full model_stf tree or a staged copy of open_source/model_config.
    """
    paths = [os.path.join(STF_ROOT, "xert"), os.path.join(STF_ROOT, "scripts")]
    tc_root = os.path.join(STF_ROOT, "toolchain")
    if os.path.isdir(tc_root):
        paths += [
            os.path.join(tc_root, d)
            for d in os.listdir(tc_root)
            if os.path.isdir(os.path.join(tc_root, d))
        ]
    for path in paths:
        if os.path.isdir(path):
            eng.addpath(path, nargout=0)


def setup_toolchain(compiler, opt_level):
    """Update the selected toolchain's opt level in place and install it."""
    tc = TOOLCHAINS[compiler]
    dst_dir = os.path.join(STF_ROOT, "toolchain", tc["dir"])
    update_toolchain_on_opts(compiler, opt_level)

    eng.eval(f"cd {dst_dir}", nargout=0)
    eng.eval(tc["install"], nargout=0)
    logging.info("installed toolchain %s (%s/%s)", tc["name"], compiler, opt_level)


# ---------------------------------------------------------------------------
# Per-project helpers
# ---------------------------------------------------------------------------


def get_model_id_from_proj(proj):
    """Return the leading numeric model id of a project name.

    Project folders are named like ``102054_Some_Model``; the leading digits are
    the MathWorks File Exchange id.  If no leading number exists the whole name
    is returned so callers always get a usable string.
    """
    match = re.match(r"^(\d+)", proj)
    return match.group(1) if match else proj


def unzip_project(proj_path):
    """Unzip any zip files directly under a single project folder."""
    for entry in os.listdir(proj_path):
        if entry.lower().endswith(".zip"):
            zip_path = os.path.join(proj_path, entry)
            extract_dir = os.path.join(proj_path, "unzipped")
            if os.path.exists(extract_dir) and os.listdir(extract_dir):
                logging.info("already extracted %s, skipping", zip_path)
                continue
            logging.info("extracting %s", zip_path)
            os.makedirs(extract_dir, exist_ok=True)
            try:
                with zipfile.ZipFile(zip_path, "r") as zf:
                    zf.extractall(extract_dir)
            except zipfile.BadZipFile:
                logging.warning("!!! %s is not a valid zip file, skipping", zip_path)
                return -1
            except Exception as e:
                logging.error("failed to unzip %s: %s", zip_path, e)
                return -1
    return 0


def _iter_models(proj_path):
    """Yield (model_path, model_dir, model_name) for every .slx/.mdl below path."""
    for root, _, files in os.walk(proj_path):
        for fname in files:
            if fname.lower().endswith(".slx") or fname.lower().endswith(".mdl"):
                model_path = os.path.join(root, fname)
                yield (
                    model_path,
                    os.path.dirname(model_path),
                    os.path.splitext(fname)[0],
                )


def model_config(proj_path):
    """Load each SLX in project, configure the xert target, and save it."""
    global eng
    ret = -1
    for model_path, model_dir, model_name in _iter_models(proj_path):
        logging.info("processing model %s", model_path)
        try:
            eng.cd(model_dir, nargout=0)
            eng.load_system(model_name, nargout=0)

            # Configure the toolchain selected by main() and use the
            # speed-oriented "Faster Runs" build configuration.
            toolchain = TOOLCHAIN_NAME
            buildconfig = "Faster Runs"
            eng.set_param(model_name, "Toolchain", toolchain, nargout=0)
            eng.set_param(model_name, "BuildConfiguration", buildconfig, nargout=0)
            eng.eval(f'modelconfig1("{model_name}");', nargout=0)
            eng.eval(f'powerGUI2Discrete("{model_name}");', nargout=0)
            eng.save_system(model_name, nargout=0)
            ret = 0
        except Exception as e:
            # Log only the model filename (not full path) on configuration errors.
            logging.error("error configuring %s: %s", os.path.basename(model_path), e)
            ret = -1
        finally:
            try:
                eng.close_system(model_name, 0, nargout=0)
            except Exception:
                pass
    return ret


def model_build(proj_path):
    """Invoke ``rtwbuild`` for each model in project to generate code."""
    global eng
    ret = -1
    for model_path, model_dir, model_name in _iter_models(proj_path):
        logging.info("building model %s", model_path)
        try:
            eng.cd(model_dir, nargout=0)
            eng.rtwbuild(model_name, nargout=0)
            logging.info("successfully built %s", model_name)
            ret = 0
        except Exception as e:
            logging.error("error building %s: %s", model_name, e)
            return -1
    return ret


def model_offline_run(proj_path):
    """Run each model offline once to make sure it simulates without errors.

    Disabled by default in do_proj(); kept here so it can be enabled for
    debugging model/data problems before code generation.
    """
    global eng
    ret = -1
    for model_path, model_dir, model_name in _iter_models(proj_path):
        logging.info("offline simulating model `%s`", model_name)
        try:
            eng.cd(model_dir, nargout=0)
            eng.load_system(model_name, nargout=0)
            eng.sim(model_name, "StopTime", "0", nargout=0)
            logging.info("Successfully simulated %s", model_name)
            ret = 0
        except MatlabExecutionError as e:
            # e contains the MATLAB Command Window error text.
            logging.error("MATLAB Simulation Error in %s: %s", model_name, str(e))
            ret = -1
        except Exception as e:
            logging.error("error simulating %s: %s", model_name, e)
            ret = -1
        finally:
            try:
                eng.close_system(model_name, 0, nargout=0)
            except Exception:
                pass
    return ret


def model_clean(proj_path):
    """Remove generated ``*_xert_rtw`` directories and ``.slxc`` caches."""
    global eng
    ret = -1

    for model_path, model_dir, model_name in _iter_models(proj_path):
        try:
            eng.cd(model_dir, nargout=0)
            # Delete every *_xert_rtw directory.
            eng.eval(
                """
                d = dir('*_xert_rtw');
                for i = 1:length(d)
                    if d(i).isdir
                        rmdir(d(i).name, 's');
                    end
                end
            """,
                nargout=0,
            )

            # Delete all .slxc files.
            eng.eval(
                """
                f = dir('*.slxc');
                for i = 1:length(f)
                    if ~f(i).isdir
                        delete(f(i).name);
                    end
                end
            """,
                nargout=0,
            )
            logging.info("successfully cleaned cache for %s", model_name)
            ret = 0
        except Exception as e:
            logging.error("error cleaning cache for %s: %s", model_name, e)
            return -1
    return ret


def do_proj(proj):
    """Handle a single project: clean, configure, then generate code."""
    proj_path = os.path.join(PROJ_DIR, proj)
    if not os.path.isdir(proj_path):
        return None

    # The model id is only used for logging; build status is no longer stored
    # in a database.
    model_id = get_model_id_from_proj(proj)
    slx_name = os.path.basename(proj_path) + ".slx"
    logging.info("project %s (model id %s, expected model %s)", proj, model_id, slx_name)

    # ---- optional stages (disabled by default) --------------------------
    # Enable these two blocks if the incoming projects still contain .zip
    # archives or if you want to validate models by offline simulation first.
    #
    # ret = unzip_project(proj_path)
    # if ret == -1:
    #     return -1
    #
    # print("---------------- offline simulating model %s ----------------" % slx_name)
    # if model_offline_run(proj_path) == -1:
    #     print("   ||| fail to offline run the model |||")
    # ---------------------------------------------------------------------

    print("---------------- cleaning model cache %s----------------" % slx_name)
    if model_clean(proj_path) == -1:
        print("   ||| fail to clean the model |||")
        # Keep going: a missing cache is not fatal for a fresh build.

    print("---------------- configuring model %s----------------" % slx_name)
    if model_config(proj_path) == -1:
        print("   ||| fail to configure the model |||")
        return -1

    print("---------------- generating code for model %s----------------" % slx_name)
    if model_build(proj_path) == -1:
        print("   ||| fail to generate code for the model |||")
        return -1

    print("   ---      success to process the model      ---")
    return 0


# ---------------------------------------------------------------------------
# Entry point
# ---------------------------------------------------------------------------


def main():
    """Iterate all configured compiler/optimization combinations."""
    global eng, PROJ_DIR, TOOLCHAIN_NAME

    parser = argparse.ArgumentParser(
        description="Generate Simulink model code for all configured "
        "compiler/optimization-level combinations."
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="validate all combinations and print the plan without running MATLAB",
    )
    args = parser.parse_args()

    combos = [
        (compiler, opt_level)
        for compiler, opt_levels in COMPILER_OPTS.items()
        for opt_level in opt_levels
    ]

    runnable = []
    skipped = []
    for compiler, opt_level in combos:
        proj_dir, tc_path, reason = prepare_combo(compiler, opt_level)
        if reason is not None:
            skipped.append((compiler, opt_level, reason))
        else:
            runnable.append((compiler, opt_level, proj_dir, tc_path))

    tlc_path = os.path.join(STF_ROOT, "xert", "xert_main.tlc")

    if args.dry_run:
        # No MATLAB and no file writes in dry-run mode.
        print("dry-run (no files changed):")
        for compiler, opt_level, proj_dir, tc_path in runnable:
            print(f"\n[{compiler}/{opt_level}]")
            print("  model directory   :", proj_dir)
            print("  toolchain name    :", TOOLCHAINS[compiler]["name"])
            print("  toolchain file    :", tc_path)
            print("  optimsOnOpts flag :", "-" + opt_level.capitalize())
            print("  xert_main.tlc     :", tlc_path)
            print(
                "  save_path         :",
                f"{SAMPLE_LOG_ROOT}/%<qmodelName>/{compiler}/{opt_level}",
            )
        for compiler, opt_level, reason in skipped:
            print(f"\n[{compiler}/{opt_level}] skip: {reason}")
        return

    if not runnable:
        logging.warning("no runnable compiler/opt combinations")
        return

    if matlab is None:
        raise RuntimeError(
            "matlab.engine not available; install the MATLAB Engine for Python"
        )

    # Start MATLAB once and reuse it for every combination.
    eng = matlab.engine.start_matlab("-nodesktop -nosplash")
    eng.eval("warning('off', 'all');", nargout=0)
    logging.info("started MATLAB engine")

    try:
        # Add xert/, scripts/ and toolchain/ to the MATLAB path.
        print("Install path...")
        eng.eval(f"cd {STF_ROOT}", nargout=0)
        if os.path.isfile(os.path.join(STF_ROOT, "install_path.m")):
            eng.eval("install_path", nargout=0)
        else:
            add_matlab_paths()

        for compiler, opt_level, proj_dir, tc_path in runnable:
            print("=" * 60)
            print(f"[{compiler}/{opt_level}] generating code...")
            logging.info("compiler=%s opt=%s", compiler, opt_level)
            logging.info("model directory: %s", proj_dir)
            logging.info("toolchain: %s", TOOLCHAINS[compiler]["name"])
            logging.info("toolchain file: %s", tc_path)

            PROJ_DIR = proj_dir
            TOOLCHAIN_NAME = TOOLCHAINS[compiler]["name"]

            update_xert_save_path(compiler, opt_level)
            setup_toolchain(compiler, opt_level)

            for index, proj in enumerate(sorted(os.listdir(PROJ_DIR)), start=1):
                print(
                    f"================ [{index}] processing project {proj} "
                    "======================"
                )
                ret = do_proj(proj)
                if ret == -1:
                    logging.warning("failed to process project %s", proj)
                print("-------------------- Press Ctrl+C to stop ------------------------")
                time.sleep(SLEEP_BETWEEN_MODELS)
                print("")
                print("")
                print("")
    except KeyboardInterrupt:
        logging.info("processing canceled by user")
    finally:
        eng.quit()
        logging.info("MATLAB engine stopped")


if __name__ == "__main__":
    main()
