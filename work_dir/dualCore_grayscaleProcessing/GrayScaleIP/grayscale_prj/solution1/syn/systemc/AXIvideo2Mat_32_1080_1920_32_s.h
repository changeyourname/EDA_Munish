// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _AXIvideo2Mat_32_1080_1920_32_s_HH_
#define _AXIvideo2Mat_32_1080_1920_32_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct AXIvideo2Mat_32_1080_1920_32_s : public sc_module {
    // Port declarations 39
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > AXI_video_strm_V_data_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_data_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_data_V_read;
    sc_in< sc_lv<4> > AXI_video_strm_V_keep_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_keep_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_keep_V_read;
    sc_in< sc_lv<4> > AXI_video_strm_V_strb_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_strb_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_strb_V_read;
    sc_in< sc_lv<1> > AXI_video_strm_V_user_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_user_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_user_V_read;
    sc_in< sc_lv<1> > AXI_video_strm_V_last_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_last_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_last_V_read;
    sc_in< sc_lv<1> > AXI_video_strm_V_id_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_id_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_id_V_read;
    sc_in< sc_lv<1> > AXI_video_strm_V_dest_V_dout;
    sc_in< sc_logic > AXI_video_strm_V_dest_V_empty_n;
    sc_out< sc_logic > AXI_video_strm_V_dest_V_read;
    sc_in< sc_lv<12> > img_rows_V_read;
    sc_in< sc_lv<12> > img_cols_V_read;
    sc_out< sc_lv<8> > img_data_stream_0_V_din;
    sc_in< sc_logic > img_data_stream_0_V_full_n;
    sc_out< sc_logic > img_data_stream_0_V_write;
    sc_out< sc_lv<8> > img_data_stream_1_V_din;
    sc_in< sc_logic > img_data_stream_1_V_full_n;
    sc_out< sc_logic > img_data_stream_1_V_write;
    sc_out< sc_lv<8> > img_data_stream_2_V_din;
    sc_in< sc_logic > img_data_stream_2_V_full_n;
    sc_out< sc_logic > img_data_stream_2_V_write;


    // Module declarations
    AXIvideo2Mat_32_1080_1920_32_s(sc_module_name name);
    SC_HAS_PROCESS(AXIvideo2Mat_32_1080_1920_32_s);

    ~AXIvideo2Mat_32_1080_1920_32_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_lv<12> > p_1_reg_233;
    sc_signal< sc_lv<1> > eol_1_reg_244;
    sc_signal< sc_lv<32> > axi_0_2_reg_255;
    sc_signal< sc_lv<1> > eol_reg_266;
    sc_signal< sc_logic > AXI_video_strm_V_0_status;
    sc_signal< bool > ap_sig_bdd_89;
    sc_signal< bool > ap_sig_bdd_97;
    sc_signal< bool > ap_sig_bdd_107;
    sc_signal< sc_lv<12> > i_V_fu_367_p2;
    sc_signal< sc_lv<12> > i_V_reg_466;
    sc_signal< sc_lv<1> > exitcond2_fu_373_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_471;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it0;
    sc_signal< sc_lv<1> > brmerge_fu_398_p2;
    sc_signal< bool > ap_sig_bdd_139;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it1;
    sc_signal< sc_lv<12> > j_V_fu_378_p2;
    sc_signal< sc_lv<1> > sof_1_load_reg_480;
    sc_signal< sc_lv<1> > not_sof_2_fu_387_p2;
    sc_signal< sc_lv<1> > not_sof_2_reg_485;
    sc_signal< sc_lv<1> > exitcond1_fu_362_p2;
    sc_signal< sc_lv<1> > axi_4_reg_165;
    sc_signal< sc_lv<32> > axi_reg_177;
    sc_signal< sc_lv<1> > sof_reg_189;
    sc_signal< sc_lv<1> > axi_4_4_reg_302;
    sc_signal< sc_lv<1> > axi_4_1_reg_200;
    sc_signal< sc_lv<32> > axi_0_4_reg_314;
    sc_signal< sc_lv<32> > axi_0_1_reg_211;
    sc_signal< sc_lv<12> > p_s_reg_222;
    sc_signal< sc_lv<1> > eol_2_phi_fu_295_p4;
    sc_signal< sc_lv<32> > p_Val2_s_phi_fu_282_p4;
    sc_signal< sc_lv<1> > eol_1_mux_fu_403_p2;
    sc_signal< sc_lv<1> > eol_3_reg_326;
    sc_signal< sc_logic > AXI_video_strm_V_0_update;
    sc_signal< sc_lv<1> > sof_1_fu_110;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< bool > ap_sig_bdd_265;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_st1_fsm_0;
    static const sc_lv<3> ap_ST_st2_fsm_1;
    static const sc_lv<3> ap_ST_st3_fsm_2;
    static const sc_lv<3> ap_ST_st4_fsm_3;
    static const sc_lv<3> ap_ST_pp1_stg0_fsm_4;
    static const sc_lv<3> ap_ST_st7_fsm_5;
    static const sc_lv<3> ap_ST_st8_fsm_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AXI_video_strm_V_0_status();
    void thread_AXI_video_strm_V_0_update();
    void thread_AXI_video_strm_V_data_V_read();
    void thread_AXI_video_strm_V_dest_V_read();
    void thread_AXI_video_strm_V_id_V_read();
    void thread_AXI_video_strm_V_keep_V_read();
    void thread_AXI_video_strm_V_last_V_read();
    void thread_AXI_video_strm_V_strb_V_read();
    void thread_AXI_video_strm_V_user_V_read();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_107();
    void thread_ap_sig_bdd_139();
    void thread_ap_sig_bdd_265();
    void thread_ap_sig_bdd_89();
    void thread_ap_sig_bdd_97();
    void thread_brmerge_fu_398_p2();
    void thread_eol_1_mux_fu_403_p2();
    void thread_eol_2_phi_fu_295_p4();
    void thread_exitcond1_fu_362_p2();
    void thread_exitcond2_fu_373_p2();
    void thread_i_V_fu_367_p2();
    void thread_img_data_stream_0_V_din();
    void thread_img_data_stream_0_V_write();
    void thread_img_data_stream_1_V_din();
    void thread_img_data_stream_1_V_write();
    void thread_img_data_stream_2_V_din();
    void thread_img_data_stream_2_V_write();
    void thread_j_V_fu_378_p2();
    void thread_not_sof_2_fu_387_p2();
    void thread_p_Val2_s_phi_fu_282_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif