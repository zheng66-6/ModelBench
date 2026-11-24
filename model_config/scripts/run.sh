#!/bin/sh
# Run a generated model executable once.
#
# Usage: ./run.sh [cpu] [iterations] [evt_id]
#   cpu        CPU to pin the process to (default 13)
#   iterations simulation steps to measure (default 10000)
#   evt_id     base PMU event id for the 4 programmable counters (default 32)
#
# The executable is placed in the parent of the *_xert_rtw directory by the
# generated makefile, hence the "../$modelName" path below.
set -e

mkPath=$(find . -maxdepth 1 -type f -name "*.mk" | head -n 1)
if [ -z "$mkPath" ]; then
    echo "Error: no *.mk file found in the current directory." >&2
    exit 1
fi
mkFile=$(basename -- "$mkPath")
modelName="${mkFile%.*}"

CPU=${1:-13}
ITERATIONS=${2:-10000}
EVT_ID=${3:-32}

# sudo is needed for mlockall(), SCHED_FIFO and task isolation.
exec sudo "../$modelName" "$CPU" "$ITERATIONS" "$EVT_ID"
