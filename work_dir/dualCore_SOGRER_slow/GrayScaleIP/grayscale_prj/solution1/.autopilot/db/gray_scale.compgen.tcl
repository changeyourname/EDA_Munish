# This script segment is generated automatically by AutoPilot

# FIFO definition:
set ID 37
set FifoName FIFO_gray_scale_img_0_rows_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 38
set FifoName FIFO_gray_scale_img_0_rows_V_channel5
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 39
set FifoName FIFO_gray_scale_img_0_cols_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 40
set FifoName FIFO_gray_scale_img_0_cols_V_channel6
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 41
set FifoName FIFO_gray_scale_img_1_rows_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 42
set FifoName FIFO_gray_scale_img_1_cols_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 12
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 43
set FifoName FIFO_gray_scale_img_0_data_stream_0_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 44
set FifoName FIFO_gray_scale_img_0_data_stream_1_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 45
set FifoName FIFO_gray_scale_img_0_data_stream_2_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 46
set FifoName FIFO_gray_scale_img_1_data_stream_0_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 47
set FifoName FIFO_gray_scale_img_1_data_stream_1_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 48
set FifoName FIFO_gray_scale_img_1_data_stream_2_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 8
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Adapter definition:
set corename CONTROL_BUS
set opts {
    {
        id 63
        name rows
        reset_level 1
        sync_rst true
        type scalar
        dir I
        width 32
        mode SIG_IN_VLD_OFF:SIG_IN_ACC_OFF
    }
    {
        id 64
        name cols
        reset_level 1
        sync_rst true
        type scalar
        dir I
        width 32
        mode SIG_IN_VLD_OFF:SIG_IN_ACC_OFF
    }
    {
        id -1
        name ap_start
        reset_level 1
        sync_rst true
        type scalar
        dir I
        width 1
        mode ap_ctrl
    }
    {
        id -2
        name ap_ready
        reset_level 1
        sync_rst true
        type scalar
        dir O
        width 1
        mode ap_ctrl
    }
    {
        id -3
        name ap_done
        reset_level 1
        sync_rst true
        type scalar
        dir O
        width 1
        mode ap_ctrl
    }
    {
        id -4
        name ap_idle
        reset_level 1
        sync_rst true
        type scalar
        dir O
        width 1
        mode ap_ctrl
    }
}
set portmap { }
set metadata { -bus_bundle CONTROL_BUS}
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::axi_slave_int_gen] == "::AESL_LIB_XILADAPTER::axi_slave_int_gen"} {
eval "::AESL_LIB_XILADAPTER::axi_slave_int_gen { \
    corename ${corename} \
    reset_level 1 \
    sync_rst true \
    opts {${opts}} \
    portmap {${portmap}} \
    metadata {${metadata}} \
}"
} else {
puts "@W Can not find gen function '::AESL_LIB_XILADAPTER::axi_slave_int_gen' in the library. Ignored generation of adapter for '${corename}'"
}
}


# Adapter definition:
set corename INPUT_STREAM
set opts {
    {
        id 49
        name input_V_data_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 32
    }
    {
        id 50
        name input_V_keep_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 4
    }
    {
        id 51
        name input_V_strb_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 4
    }
    {
        id 52
        name input_V_user_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 1
    }
    {
        id 53
        name input_V_last_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 1
    }
    {
        id 54
        name input_V_id_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 1
    }
    {
        id 55
        name input_V_dest_V
        reset_level 1
        sync_rst true
        type fifo
        dir I
        width 1
    }
}
set portmap { }
set metadata { -bus_bundle INPUT_STREAM}
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::axis_gen] == "::AESL_LIB_XILADAPTER::axis_gen"} {
eval "::AESL_LIB_XILADAPTER::axis_gen { \
    corename ${corename} \
    reset_level 1 \
    sync_rst true \
    opts {${opts}} \
    portmap {${portmap}} \
    metadata {${metadata}} \
}"
} else {
puts "@W Can not find gen function '::AESL_LIB_XILADAPTER::axis_gen' in the library. Ignored generation of adapter for '${corename}'"
}
}


# Adapter definition:
set corename OUTPUT_STREAM
set opts {
    {
        id 56
        name output_V_data_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 32
    }
    {
        id 57
        name output_V_keep_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 4
    }
    {
        id 58
        name output_V_strb_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 4
    }
    {
        id 59
        name output_V_user_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 1
    }
    {
        id 60
        name output_V_last_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 1
    }
    {
        id 61
        name output_V_id_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 1
    }
    {
        id 62
        name output_V_dest_V
        reset_level 1
        sync_rst true
        type fifo
        dir O
        width 1
    }
}
set portmap { }
set metadata { -bus_bundle OUTPUT_STREAM}
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::axis_gen] == "::AESL_LIB_XILADAPTER::axis_gen"} {
eval "::AESL_LIB_XILADAPTER::axis_gen { \
    corename ${corename} \
    reset_level 1 \
    sync_rst true \
    opts {${opts}} \
    portmap {${portmap}} \
    metadata {${metadata}} \
}"
} else {
puts "@W Can not find gen function '::AESL_LIB_XILADAPTER::axis_gen' in the library. Ignored generation of adapter for '${corename}'"
}
}



# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -5 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -6 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


