#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /nfs/TUEIEDAprojects/SystemDesign/work/zynq/munish/LabSDS/LabSDS_v4/GettingStartedHLS/fir_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}