#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /nfs/TUEIEDAprojects/SystemDesign/work/zynq/mamatha/uzair_sharif/EDA_Munish/work_dir/dualCore_SOGRER_slow/GrayScaleIP/grayscale_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}