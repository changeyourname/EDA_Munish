#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /nfs/TUEIEDAprojects/SystemDesign/work/zynq/mamatha/uzair_sharif/EDA_Munish/work_dir/vivado_projects/sobel/prj/solution2/.autopilot/db/a.g.bc ${1+"$@"}