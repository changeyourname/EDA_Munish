############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2013 Xilinx Inc. All rights reserved.
############################################################
open_project prj
set_top image_processor
add_files top.cpp
add_files -tb test_1080p.bmp
add_files -tb opencv_top.cpp -cflags " -I/home/ga73koz/thesis/xapp1167/opencv_install/x86_64_Linux/include  -I/home/ga73koz/thesis/xapp1167/opencv_install/x86_64_Linux/include/opencv                   "
add_files -tb test.cpp -cflags " -I../../opencv_install/x86_64_Linux/include  -I../../opencv_install/x86_64_Linux/include/opencv             "
open_solution "solution1"
set_part  {xc7z020clg484-2}
create_clock -period 150MHz

source "./prj/solution1/directives.tcl"
csynth_design