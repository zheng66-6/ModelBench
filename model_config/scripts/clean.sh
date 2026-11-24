#!/bin/sh
# Remove the objects produced by the generated Simulink makefile.
# Run from inside a *_xert_rtw build directory.
set -e

# Locate the single generated *.mk file in the current directory.
mkPath=$(find . -maxdepth 1 -type f -name "*.mk" | head -n 1)
if [ -z "$mkPath" ]; then
    echo "Error: no *.mk file found in the current directory." >&2
    exit 1
fi
mkFile=$(basename -- "$mkPath")

make -f "./$mkFile" clean
rm -f ./*.o
