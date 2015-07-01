// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "CvtColor_0_32_32_1080_1920_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic CvtColor_0_32_32_1080_1920_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic CvtColor_0_32_32_1080_1920_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> CvtColor_0_32_32_1080_1920_s::ap_ST_st1_fsm_0 = "00";
const sc_lv<2> CvtColor_0_32_32_1080_1920_s::ap_ST_st2_fsm_1 = "1";
const sc_lv<2> CvtColor_0_32_32_1080_1920_s::ap_ST_pp0_stg0_fsm_2 = "10";
const sc_lv<2> CvtColor_0_32_32_1080_1920_s::ap_ST_st5_fsm_3 = "11";
const sc_lv<1> CvtColor_0_32_32_1080_1920_s::ap_const_lv1_0 = "0";
const sc_lv<12> CvtColor_0_32_32_1080_1920_s::ap_const_lv12_0 = "000000000000";
const sc_lv<12> CvtColor_0_32_32_1080_1920_s::ap_const_lv12_1 = "1";
const sc_lv<27> CvtColor_0_32_32_1080_1920_s::ap_const_lv27_3A5E3 = "111010010111100011";
const sc_lv<29> CvtColor_0_32_32_1080_1920_s::ap_const_lv29_12C8B4 = "100101100100010110100";
const sc_lv<28> CvtColor_0_32_32_1080_1920_s::ap_const_lv28_99168 = "10011001000101101000";
const sc_lv<32> CvtColor_0_32_32_1080_1920_s::ap_const_lv32_15 = "10101";
const sc_lv<32> CvtColor_0_32_32_1080_1920_s::ap_const_lv32_1C = "11100";
const sc_lv<32> CvtColor_0_32_32_1080_1920_s::ap_const_lv32_14 = "10100";
const sc_lv<32> CvtColor_0_32_32_1080_1920_s::ap_const_lv32_8 = "1000";
const sc_lv<8> CvtColor_0_32_32_1080_1920_s::ap_const_lv8_FF = "11111111";

CvtColor_0_32_32_1080_1920_s::CvtColor_0_32_32_1080_1920_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond8_fu_160_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond8_fu_160_p2 );

    SC_METHOD(thread_ap_sig_bdd_56);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_bdd_89);
    sensitive << ( p_src_data_stream_0_V_empty_n );
    sensitive << ( p_src_data_stream_1_V_empty_n );
    sensitive << ( p_src_data_stream_2_V_empty_n );
    sensitive << ( p_dst_data_stream_0_V_full_n );
    sensitive << ( p_dst_data_stream_1_V_full_n );
    sensitive << ( p_dst_data_stream_2_V_full_n );
    sensitive << ( exitcond_reg_305 );

    SC_METHOD(thread_exitcond8_fu_160_p2);
    sensitive << ( ap_CS_fsm );
    sensitive << ( p_src_rows_V_read );
    sensitive << ( i_reg_137 );

    SC_METHOD(thread_exitcond_fu_171_p2);
    sensitive << ( ap_CS_fsm );
    sensitive << ( p_src_cols_V_read );
    sensitive << ( j_reg_148 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_i_1_fu_165_p2);
    sensitive << ( i_reg_137 );

    SC_METHOD(thread_j_1_fu_176_p2);
    sensitive << ( j_reg_148 );

    SC_METHOD(thread_p_Val2_1_fu_196_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( p_Val2_1_fu_196_p00 );

    SC_METHOD(thread_p_Val2_1_fu_196_p00);
    sensitive << ( p_src_data_stream_1_V_dout );

    SC_METHOD(thread_p_Val2_1_fu_196_p2);
    sensitive << ( p_Val2_1_fu_196_p0 );

    SC_METHOD(thread_p_Val2_2_fu_206_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( p_Val2_2_fu_206_p00 );

    SC_METHOD(thread_p_Val2_2_fu_206_p00);
    sensitive << ( p_src_data_stream_0_V_dout );

    SC_METHOD(thread_p_Val2_2_fu_206_p2);
    sensitive << ( p_Val2_2_fu_206_p0 );

    SC_METHOD(thread_p_Val2_3_fu_216_p2);
    sensitive << ( p_Val2_2_fu_206_p2 );
    sensitive << ( tmp_cast_fu_212_p1 );

    SC_METHOD(thread_p_Val2_4_fu_226_p2);
    sensitive << ( p_Val2_1_fu_196_p2 );
    sensitive << ( tmp_8_cast_fu_222_p1 );

    SC_METHOD(thread_p_Val2_5_cast_fu_242_p1);
    sensitive << ( tmp_1_fu_232_p4 );

    SC_METHOD(thread_p_Val2_6_fu_258_p2);
    sensitive << ( p_Val2_5_cast_fu_242_p1 );
    sensitive << ( tmp_11_cast_fu_254_p1 );

    SC_METHOD(thread_p_Val2_s_fu_186_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( p_Val2_s_fu_186_p00 );

    SC_METHOD(thread_p_Val2_s_fu_186_p00);
    sensitive << ( p_src_data_stream_2_V_dout );

    SC_METHOD(thread_p_Val2_s_fu_186_p2);
    sensitive << ( p_Val2_s_fu_186_p0 );

    SC_METHOD(thread_p_dst_data_stream_0_V_din);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_9_fu_276_p3 );

    SC_METHOD(thread_p_dst_data_stream_0_V_write);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_p_dst_data_stream_1_V_din);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_9_fu_276_p3 );

    SC_METHOD(thread_p_dst_data_stream_1_V_write);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_p_dst_data_stream_2_V_din);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_9_fu_276_p3 );

    SC_METHOD(thread_p_dst_data_stream_2_V_write);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_p_src_data_stream_0_V_read);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_p_src_data_stream_1_V_read);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_p_src_data_stream_2_V_read);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_reg_305 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_tmp_11_cast_fu_254_p1);
    sensitive << ( tmp_11_fu_246_p3 );

    SC_METHOD(thread_tmp_11_fu_246_p3);
    sensitive << ( p_Val2_4_fu_226_p2 );

    SC_METHOD(thread_tmp_12_fu_264_p3);
    sensitive << ( p_Val2_6_fu_258_p2 );

    SC_METHOD(thread_tmp_13_fu_272_p1);
    sensitive << ( p_Val2_6_fu_258_p2 );

    SC_METHOD(thread_tmp_1_fu_232_p4);
    sensitive << ( p_Val2_4_fu_226_p2 );

    SC_METHOD(thread_tmp_8_cast_fu_222_p1);
    sensitive << ( p_Val2_3_fu_216_p2 );

    SC_METHOD(thread_tmp_9_fu_276_p3);
    sensitive << ( tmp_12_fu_264_p3 );
    sensitive << ( tmp_13_fu_272_p1 );

    SC_METHOD(thread_tmp_cast_fu_212_p1);
    sensitive << ( p_Val2_s_fu_186_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_sig_bdd_56 );
    sensitive << ( exitcond_fu_171_p2 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_89 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond8_fu_160_p2 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "00";
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "CvtColor_0_32_32_1080_1920_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    const char* dump_vcd = std::getenv("AP_WRITE_VCD");
    if (dump_vcd && string(dump_vcd) == "1" ) {
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_src_rows_V_read, "(port)p_src_rows_V_read");
    sc_trace(mVcdFile, p_src_cols_V_read, "(port)p_src_cols_V_read");
    sc_trace(mVcdFile, p_src_data_stream_0_V_dout, "(port)p_src_data_stream_0_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_0_V_empty_n, "(port)p_src_data_stream_0_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_0_V_read, "(port)p_src_data_stream_0_V_read");
    sc_trace(mVcdFile, p_src_data_stream_1_V_dout, "(port)p_src_data_stream_1_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_1_V_empty_n, "(port)p_src_data_stream_1_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_1_V_read, "(port)p_src_data_stream_1_V_read");
    sc_trace(mVcdFile, p_src_data_stream_2_V_dout, "(port)p_src_data_stream_2_V_dout");
    sc_trace(mVcdFile, p_src_data_stream_2_V_empty_n, "(port)p_src_data_stream_2_V_empty_n");
    sc_trace(mVcdFile, p_src_data_stream_2_V_read, "(port)p_src_data_stream_2_V_read");
    sc_trace(mVcdFile, p_dst_data_stream_0_V_din, "(port)p_dst_data_stream_0_V_din");
    sc_trace(mVcdFile, p_dst_data_stream_0_V_full_n, "(port)p_dst_data_stream_0_V_full_n");
    sc_trace(mVcdFile, p_dst_data_stream_0_V_write, "(port)p_dst_data_stream_0_V_write");
    sc_trace(mVcdFile, p_dst_data_stream_1_V_din, "(port)p_dst_data_stream_1_V_din");
    sc_trace(mVcdFile, p_dst_data_stream_1_V_full_n, "(port)p_dst_data_stream_1_V_full_n");
    sc_trace(mVcdFile, p_dst_data_stream_1_V_write, "(port)p_dst_data_stream_1_V_write");
    sc_trace(mVcdFile, p_dst_data_stream_2_V_din, "(port)p_dst_data_stream_2_V_din");
    sc_trace(mVcdFile, p_dst_data_stream_2_V_full_n, "(port)p_dst_data_stream_2_V_full_n");
    sc_trace(mVcdFile, p_dst_data_stream_2_V_write, "(port)p_dst_data_stream_2_V_write");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, j_reg_148, "j_reg_148");
    sc_trace(mVcdFile, ap_sig_bdd_56, "ap_sig_bdd_56");
    sc_trace(mVcdFile, i_1_fu_165_p2, "i_1_fu_165_p2");
    sc_trace(mVcdFile, i_1_reg_300, "i_1_reg_300");
    sc_trace(mVcdFile, exitcond_fu_171_p2, "exitcond_fu_171_p2");
    sc_trace(mVcdFile, exitcond_reg_305, "exitcond_reg_305");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, ap_sig_bdd_89, "ap_sig_bdd_89");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, j_1_fu_176_p2, "j_1_fu_176_p2");
    sc_trace(mVcdFile, exitcond8_fu_160_p2, "exitcond8_fu_160_p2");
    sc_trace(mVcdFile, i_reg_137, "i_reg_137");
    sc_trace(mVcdFile, tmp_9_fu_276_p3, "tmp_9_fu_276_p3");
    sc_trace(mVcdFile, p_Val2_s_fu_186_p0, "p_Val2_s_fu_186_p0");
    sc_trace(mVcdFile, p_Val2_1_fu_196_p0, "p_Val2_1_fu_196_p0");
    sc_trace(mVcdFile, p_Val2_2_fu_206_p0, "p_Val2_2_fu_206_p0");
    sc_trace(mVcdFile, p_Val2_s_fu_186_p2, "p_Val2_s_fu_186_p2");
    sc_trace(mVcdFile, p_Val2_2_fu_206_p2, "p_Val2_2_fu_206_p2");
    sc_trace(mVcdFile, tmp_cast_fu_212_p1, "tmp_cast_fu_212_p1");
    sc_trace(mVcdFile, p_Val2_3_fu_216_p2, "p_Val2_3_fu_216_p2");
    sc_trace(mVcdFile, p_Val2_1_fu_196_p2, "p_Val2_1_fu_196_p2");
    sc_trace(mVcdFile, tmp_8_cast_fu_222_p1, "tmp_8_cast_fu_222_p1");
    sc_trace(mVcdFile, p_Val2_4_fu_226_p2, "p_Val2_4_fu_226_p2");
    sc_trace(mVcdFile, tmp_1_fu_232_p4, "tmp_1_fu_232_p4");
    sc_trace(mVcdFile, tmp_11_fu_246_p3, "tmp_11_fu_246_p3");
    sc_trace(mVcdFile, p_Val2_5_cast_fu_242_p1, "p_Val2_5_cast_fu_242_p1");
    sc_trace(mVcdFile, tmp_11_cast_fu_254_p1, "tmp_11_cast_fu_254_p1");
    sc_trace(mVcdFile, p_Val2_6_fu_258_p2, "p_Val2_6_fu_258_p2");
    sc_trace(mVcdFile, tmp_12_fu_264_p3, "tmp_12_fu_264_p3");
    sc_trace(mVcdFile, tmp_13_fu_272_p1, "tmp_13_fu_272_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, p_Val2_1_fu_196_p00, "p_Val2_1_fu_196_p00");
    sc_trace(mVcdFile, p_Val2_2_fu_206_p00, "p_Val2_2_fu_206_p00");
    sc_trace(mVcdFile, p_Val2_s_fu_186_p00, "p_Val2_s_fu_186_p00");

    }
}

CvtColor_0_32_32_1080_1920_s::~CvtColor_0_32_32_1080_1920_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void CvtColor_0_32_32_1080_1920_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
                    !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
             !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             !esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
             !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
                     esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read())) || 
                    (esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
                     !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
                     !esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0)))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,2,2>(ap_ST_st5_fsm_3, ap_CS_fsm.read())) {
        i_reg_137 = i_1_reg_300.read();
    } else if ((esl_seteq<1,2,2>(ap_ST_st1_fsm_0, ap_CS_fsm.read()) && 
                !ap_sig_bdd_56.read())) {
        i_reg_137 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
         esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0))) {
        j_reg_148 = j_1_fu_176_p2.read();
    } else if ((esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read()))) {
        j_reg_148 = ap_const_lv12_0;
    }
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        exitcond_reg_305 = exitcond_fu_171_p2.read();
    }
    if (esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read())) {
        i_1_reg_300 = i_1_fu_165_p2.read();
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,2,2>(ap_ST_st1_fsm_0, ap_CS_fsm.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_ready() {
    if ((esl_seteq<1,2,2>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_sig_bdd_56() {
    ap_sig_bdd_56 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_sig_bdd_89() {
    ap_sig_bdd_89 = ((esl_seteq<1,1,1>(p_src_data_stream_0_V_empty_n.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_src_data_stream_1_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_src_data_stream_2_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_dst_data_stream_0_V_full_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_dst_data_stream_1_V_full_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(p_dst_data_stream_2_V_full_n.read(), ap_const_logic_0)));
}

void CvtColor_0_32_32_1080_1920_s::thread_exitcond8_fu_160_p2() {
    exitcond8_fu_160_p2 = (!i_reg_137.read().is_01() || !p_src_rows_V_read.read().is_01())? sc_lv<1>(): sc_lv<1>(i_reg_137.read() == p_src_rows_V_read.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_exitcond_fu_171_p2() {
    exitcond_fu_171_p2 = (!j_reg_148.read().is_01() || !p_src_cols_V_read.read().is_01())? sc_lv<1>(): sc_lv<1>(j_reg_148.read() == p_src_cols_V_read.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_i_1_fu_165_p2() {
    i_1_fu_165_p2 = (!i_reg_137.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_bigint<12>(i_reg_137.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void CvtColor_0_32_32_1080_1920_s::thread_j_1_fu_176_p2() {
    j_1_fu_176_p2 = (!j_reg_148.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_bigint<12>(j_reg_148.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_1_fu_196_p0() {
    p_Val2_1_fu_196_p0 =  (sc_lv<8>) (p_Val2_1_fu_196_p00.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_1_fu_196_p00() {
    p_Val2_1_fu_196_p00 = esl_zext<29,8>(p_src_data_stream_1_V_dout.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_1_fu_196_p2() {
    p_Val2_1_fu_196_p2 = (!p_Val2_1_fu_196_p0.read().is_01() || !ap_const_lv29_12C8B4.is_01())? sc_lv<29>(): sc_biguint<8>(p_Val2_1_fu_196_p0.read()) * sc_biguint<29>(ap_const_lv29_12C8B4);
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_2_fu_206_p0() {
    p_Val2_2_fu_206_p0 =  (sc_lv<8>) (p_Val2_2_fu_206_p00.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_2_fu_206_p00() {
    p_Val2_2_fu_206_p00 = esl_zext<28,8>(p_src_data_stream_0_V_dout.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_2_fu_206_p2() {
    p_Val2_2_fu_206_p2 = (!p_Val2_2_fu_206_p0.read().is_01() || !ap_const_lv28_99168.is_01())? sc_lv<28>(): sc_biguint<8>(p_Val2_2_fu_206_p0.read()) * sc_biguint<28>(ap_const_lv28_99168);
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_3_fu_216_p2() {
    p_Val2_3_fu_216_p2 = (!p_Val2_2_fu_206_p2.read().is_01() || !tmp_cast_fu_212_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_2_fu_206_p2.read()) + sc_biguint<28>(tmp_cast_fu_212_p1.read()));
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_4_fu_226_p2() {
    p_Val2_4_fu_226_p2 = (!p_Val2_1_fu_196_p2.read().is_01() || !tmp_8_cast_fu_222_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_1_fu_196_p2.read()) + sc_biguint<29>(tmp_8_cast_fu_222_p1.read()));
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_5_cast_fu_242_p1() {
    p_Val2_5_cast_fu_242_p1 = esl_zext<9,8>(tmp_1_fu_232_p4.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_6_fu_258_p2() {
    p_Val2_6_fu_258_p2 = (!p_Val2_5_cast_fu_242_p1.read().is_01() || !tmp_11_cast_fu_254_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(p_Val2_5_cast_fu_242_p1.read()) + sc_biguint<9>(tmp_11_cast_fu_254_p1.read()));
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_s_fu_186_p0() {
    p_Val2_s_fu_186_p0 =  (sc_lv<8>) (p_Val2_s_fu_186_p00.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_s_fu_186_p00() {
    p_Val2_s_fu_186_p00 = esl_zext<27,8>(p_src_data_stream_2_V_dout.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_p_Val2_s_fu_186_p2() {
    p_Val2_s_fu_186_p2 = (!p_Val2_s_fu_186_p0.read().is_01() || !ap_const_lv27_3A5E3.is_01())? sc_lv<27>(): sc_biguint<8>(p_Val2_s_fu_186_p0.read()) * sc_biguint<27>(ap_const_lv27_3A5E3);
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_0_V_din() {
    p_dst_data_stream_0_V_din = tmp_9_fu_276_p3.read();
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_0_V_write() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_dst_data_stream_0_V_write = ap_const_logic_1;
    } else {
        p_dst_data_stream_0_V_write = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_1_V_din() {
    p_dst_data_stream_1_V_din = tmp_9_fu_276_p3.read();
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_1_V_write() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_dst_data_stream_1_V_write = ap_const_logic_1;
    } else {
        p_dst_data_stream_1_V_write = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_2_V_din() {
    p_dst_data_stream_2_V_din = tmp_9_fu_276_p3.read();
}

void CvtColor_0_32_32_1080_1920_s::thread_p_dst_data_stream_2_V_write() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_dst_data_stream_2_V_write = ap_const_logic_1;
    } else {
        p_dst_data_stream_2_V_write = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_p_src_data_stream_0_V_read() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_src_data_stream_0_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_0_V_read = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_p_src_data_stream_1_V_read() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_src_data_stream_1_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_1_V_read = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_p_src_data_stream_2_V_read() {
    if ((esl_seteq<1,2,2>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_305.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        p_src_data_stream_2_V_read = ap_const_logic_1;
    } else {
        p_src_data_stream_2_V_read = ap_const_logic_0;
    }
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_11_cast_fu_254_p1() {
    tmp_11_cast_fu_254_p1 = esl_zext<9,1>(tmp_11_fu_246_p3.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_11_fu_246_p3() {
    tmp_11_fu_246_p3 = p_Val2_4_fu_226_p2.read().range(20, 20);
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_12_fu_264_p3() {
    tmp_12_fu_264_p3 = p_Val2_6_fu_258_p2.read().range(8, 8);
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_13_fu_272_p1() {
    tmp_13_fu_272_p1 = p_Val2_6_fu_258_p2.read().range(8-1, 0);
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_1_fu_232_p4() {
    tmp_1_fu_232_p4 = p_Val2_4_fu_226_p2.read().range(28, 21);
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_8_cast_fu_222_p1() {
    tmp_8_cast_fu_222_p1 = esl_zext<29,28>(p_Val2_3_fu_216_p2.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_9_fu_276_p3() {
    tmp_9_fu_276_p3 = (!tmp_12_fu_264_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_12_fu_264_p3.read()[0].to_bool())? ap_const_lv8_FF: tmp_13_fu_272_p1.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_tmp_cast_fu_212_p1() {
    tmp_cast_fu_212_p1 = esl_zext<28,27>(p_Val2_s_fu_186_p2.read());
}

void CvtColor_0_32_32_1080_1920_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint()) {
        case 0 : 
            if (!ap_sig_bdd_56.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_160_p2.read())) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_89.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(exitcond_fu_171_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_st5_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 3 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}
}

