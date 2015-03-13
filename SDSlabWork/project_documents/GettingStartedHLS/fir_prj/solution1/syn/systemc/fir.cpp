// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> fir::ap_ST_st1_fsm_0 = "0000";
const sc_lv<4> fir::ap_ST_st2_fsm_1 = "1";
const sc_lv<4> fir::ap_ST_st3_fsm_2 = "10";
const sc_lv<4> fir::ap_ST_st4_fsm_3 = "11";
const sc_lv<4> fir::ap_ST_st5_fsm_4 = "100";
const sc_lv<4> fir::ap_ST_st6_fsm_5 = "101";
const sc_lv<4> fir::ap_ST_st7_fsm_6 = "110";
const sc_lv<4> fir::ap_ST_st8_fsm_7 = "111";
const sc_lv<4> fir::ap_ST_st9_fsm_8 = "1000";
const sc_lv<4> fir::ap_ST_st10_fsm_9 = "1001";
const sc_lv<4> fir::ap_ST_st11_fsm_10 = "1010";
const sc_lv<4> fir::ap_ST_st12_fsm_11 = "1011";
const sc_lv<4> fir::ap_ST_st13_fsm_12 = "1100";
const sc_lv<4> fir::ap_ST_st14_fsm_13 = "1101";
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<5> fir::ap_const_lv5_A = "1010";
const sc_lv<64> fir::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<4> fir::ap_const_lv4_0 = "0000";
const sc_lv<32> fir::ap_const_lv32_4 = "100";
const sc_lv<5> fir::ap_const_lv5_0 = "00000";
const sc_lv<4> fir::ap_const_lv4_F = "1111";
const sc_lv<5> fir::ap_const_lv5_1F = "11111";

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {
    shift_reg_U = new fir_shift_reg("shift_reg_U");
    shift_reg_U->clk(ap_clk);
    shift_reg_U->reset(ap_rst);
    shift_reg_U->address0(shift_reg_address0);
    shift_reg_U->ce0(shift_reg_ce0);
    shift_reg_U->we0(shift_reg_we0);
    shift_reg_U->d0(shift_reg_d0);
    shift_reg_U->q0(shift_reg_q0);
    fir_mul_32s_32s_32_6_U1 = new fir_mul_32s_32s_32_6<1,6,32,32,32>("fir_mul_32s_32s_32_6_U1");
    fir_mul_32s_32s_32_6_U1->clk(ap_clk);
    fir_mul_32s_32s_32_6_U1->reset(ap_rst);
    fir_mul_32s_32s_32_6_U1->din0(grp_fu_172_p0);
    fir_mul_32s_32s_32_6_U1->din1(grp_fu_172_p1);
    fir_mul_32s_32s_32_6_U1->ce(grp_fu_172_ce);
    fir_mul_32s_32s_32_6_U1->dout(grp_fu_172_p2);
    fir_mul_32s_32s_32_6_U2 = new fir_mul_32s_32s_32_6<2,6,32,32,32>("fir_mul_32s_32s_32_6_U2");
    fir_mul_32s_32s_32_6_U2->clk(ap_clk);
    fir_mul_32s_32s_32_6_U2->reset(ap_rst);
    fir_mul_32s_32s_32_6_U2->din0(grp_fu_184_p0);
    fir_mul_32s_32s_32_6_U2->din1(grp_fu_184_p1);
    fir_mul_32s_32s_32_6_U2->ce(grp_fu_184_ce);
    fir_mul_32s_32s_32_6_U2->dout(grp_fu_184_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_acc_1_fu_189_p2);
    sensitive << ( acc_reg_99 );
    sensitive << ( p_pn_reg_124 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_ap_sig_bdd_63);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_c_addr_gep_fu_57_p3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_c_address0);
    sensitive << ( c_addr_reg_201 );
    sensitive << ( tmp_1_fu_146_p2 );
    sensitive << ( tmp_5_fu_167_p1 );
    sensitive << ( ap_sig_bdd_63 );

    SC_METHOD(thread_c_ce0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_1_fu_146_p2 );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_grp_fu_172_ce);

    SC_METHOD(thread_grp_fu_172_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( c_q0 );

    SC_METHOD(thread_grp_fu_172_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( shift_reg_q0 );

    SC_METHOD(thread_grp_fu_184_ce);

    SC_METHOD(thread_grp_fu_184_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( c_q0 );

    SC_METHOD(thread_grp_fu_184_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( x );

    SC_METHOD(thread_i_1_fu_178_p2);
    sensitive << ( i_reg_112 );

    SC_METHOD(thread_shift_reg_address0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_5_reg_218 );
    sensitive << ( tmp_4_fu_162_p1 );

    SC_METHOD(thread_shift_reg_ce0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_1_fu_146_p2 );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_shift_reg_d0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( x );
    sensitive << ( shift_reg_q0 );

    SC_METHOD(thread_shift_reg_we0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_tmp_1_fu_146_p2);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );
    sensitive << ( i_reg_112 );

    SC_METHOD(thread_tmp_3_fu_156_p2);
    sensitive << ( tmp_7_fu_152_p1 );

    SC_METHOD(thread_tmp_4_fu_162_p1);
    sensitive << ( tmp_3_fu_156_p2 );

    SC_METHOD(thread_tmp_5_fu_167_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_1_fu_146_p2 );
    sensitive << ( tmp_fu_138_p3 );
    sensitive << ( i_reg_112 );

    SC_METHOD(thread_tmp_5_fu_167_p1);
    sensitive << ( tmp_5_fu_167_p0 );

    SC_METHOD(thread_tmp_7_fu_152_p1);
    sensitive << ( i_reg_112 );

    SC_METHOD(thread_tmp_fu_138_p3);
    sensitive << ( i_reg_112 );

    SC_METHOD(thread_y);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );
    sensitive << ( acc_reg_99 );

    SC_METHOD(thread_y_ap_vld);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_fu_138_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_1_fu_146_p2 );
    sensitive << ( tmp_fu_138_p3 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    const char* dump_vcd = std::getenv("AP_WRITE_VCD");
    if (dump_vcd && string(dump_vcd) == "1" ) {
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, y, "(port)y");
    sc_trace(mVcdFile, y_ap_vld, "(port)y_ap_vld");
    sc_trace(mVcdFile, c_address0, "(port)c_address0");
    sc_trace(mVcdFile, c_ce0, "(port)c_ce0");
    sc_trace(mVcdFile, c_q0, "(port)c_q0");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, shift_reg_address0, "shift_reg_address0");
    sc_trace(mVcdFile, shift_reg_ce0, "shift_reg_ce0");
    sc_trace(mVcdFile, shift_reg_we0, "shift_reg_we0");
    sc_trace(mVcdFile, shift_reg_d0, "shift_reg_d0");
    sc_trace(mVcdFile, shift_reg_q0, "shift_reg_q0");
    sc_trace(mVcdFile, c_addr_gep_fu_57_p3, "c_addr_gep_fu_57_p3");
    sc_trace(mVcdFile, c_addr_reg_201, "c_addr_reg_201");
    sc_trace(mVcdFile, tmp_1_fu_146_p2, "tmp_1_fu_146_p2");
    sc_trace(mVcdFile, tmp_1_reg_209, "tmp_1_reg_209");
    sc_trace(mVcdFile, tmp_fu_138_p3, "tmp_fu_138_p3");
    sc_trace(mVcdFile, tmp_5_fu_167_p1, "tmp_5_fu_167_p1");
    sc_trace(mVcdFile, tmp_5_reg_218, "tmp_5_reg_218");
    sc_trace(mVcdFile, grp_fu_172_p2, "grp_fu_172_p2");
    sc_trace(mVcdFile, grp_fu_184_p2, "grp_fu_184_p2");
    sc_trace(mVcdFile, i_1_fu_178_p2, "i_1_fu_178_p2");
    sc_trace(mVcdFile, i_1_reg_248, "i_1_reg_248");
    sc_trace(mVcdFile, acc_1_fu_189_p2, "acc_1_fu_189_p2");
    sc_trace(mVcdFile, acc_reg_99, "acc_reg_99");
    sc_trace(mVcdFile, i_reg_112, "i_reg_112");
    sc_trace(mVcdFile, p_pn_reg_124, "p_pn_reg_124");
    sc_trace(mVcdFile, tmp_4_fu_162_p1, "tmp_4_fu_162_p1");
    sc_trace(mVcdFile, tmp_7_fu_152_p1, "tmp_7_fu_152_p1");
    sc_trace(mVcdFile, tmp_3_fu_156_p2, "tmp_3_fu_156_p2");
    sc_trace(mVcdFile, tmp_5_fu_167_p0, "tmp_5_fu_167_p0");
    sc_trace(mVcdFile, grp_fu_172_p0, "grp_fu_172_p0");
    sc_trace(mVcdFile, grp_fu_172_p1, "grp_fu_172_p1");
    sc_trace(mVcdFile, grp_fu_184_p0, "grp_fu_184_p0");
    sc_trace(mVcdFile, grp_fu_184_p1, "grp_fu_184_p1");
    sc_trace(mVcdFile, grp_fu_172_ce, "grp_fu_172_ce");
    sc_trace(mVcdFile, grp_fu_184_ce, "grp_fu_184_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_sig_bdd_63, "ap_sig_bdd_63");

    }
    mHdltvinHandle.open("fir.hdltvin.dat");
    mHdltvoutHandle.open("fir.hdltvout.dat");
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete shift_reg_U;
    delete fir_mul_32s_32s_32_6_U1;
    delete fir_mul_32s_32s_32_6_U2;
}

void fir::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,4,4>(ap_ST_st14_fsm_13, ap_CS_fsm.read())) {
        acc_reg_99 = acc_1_fu_189_p2.read();
    } else if ((esl_seteq<1,4,4>(ap_ST_st1_fsm_0, ap_CS_fsm.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        acc_reg_99 = ap_const_lv32_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,4,4>(ap_ST_st14_fsm_13, ap_CS_fsm.read())) {
        i_reg_112 = i_1_reg_248.read();
    } else if ((esl_seteq<1,4,4>(ap_ST_st1_fsm_0, ap_CS_fsm.read()) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_112 = ap_const_lv5_A;
    }
    if (esl_seteq<1,4,4>(ap_ST_st8_fsm_7, ap_CS_fsm.read())) {
        if (esl_seteq<1,1,1>(tmp_1_reg_209.read(), ap_const_lv1_0)) {
            p_pn_reg_124 = grp_fu_172_p2.read();
        } else if (!esl_seteq<1,1,1>(tmp_1_reg_209.read(), ap_const_lv1_0)) {
            p_pn_reg_124 = grp_fu_184_p2.read();
        }
    }
    if ((esl_seteq<1,4,4>(ap_ST_st1_fsm_0, ap_CS_fsm.read()) && !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        c_addr_reg_201 = c_addr_gep_fu_57_p3.read();
    }
    if (esl_seteq<1,4,4>(ap_ST_st8_fsm_7, ap_CS_fsm.read())) {
        i_1_reg_248 = i_1_fu_178_p2.read();
    }
    if ((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0))) {
        tmp_1_reg_209 = tmp_1_fu_146_p2.read();
    }
    if ((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0))) {
        tmp_5_reg_218 = tmp_5_fu_167_p1.read();
    }
}

void fir::thread_acc_1_fu_189_p2() {
    acc_1_fu_189_p2 = (!p_pn_reg_124.read().is_01() || !acc_reg_99.read().is_01())? sc_lv<32>(): (sc_bigint<32>(p_pn_reg_124.read()) + sc_biguint<32>(acc_reg_99.read()));
}

void fir::thread_ap_done() {
    if ((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,4,4>(ap_ST_st1_fsm_0, ap_CS_fsm.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if ((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_ap_sig_bdd_63() {
    ap_sig_bdd_63 = (esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0));
}

void fir::thread_c_addr_gep_fu_57_p3() {
    c_addr_gep_fu_57_p3 =  (sc_lv<4>) (ap_const_lv64_0);
}

void fir::thread_c_address0() {
    if (ap_sig_bdd_63.read()) {
        if (!esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0)) {
            c_address0 = c_addr_reg_201.read();
        } else if (esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0)) {
            c_address0 =  (sc_lv<4>) (tmp_5_fu_167_p1.read());
        } else {
            c_address0 = "XXXX";
        }
    } else {
        c_address0 = "XXXX";
    }
}

void fir::thread_c_ce0() {
    if (((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0)))) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void fir::thread_grp_fu_172_ce() {
    grp_fu_172_ce = ap_const_logic_1;
}

void fir::thread_grp_fu_172_p0() {
    grp_fu_172_p0 = c_q0.read();
}

void fir::thread_grp_fu_172_p1() {
    grp_fu_172_p1 = shift_reg_q0.read();
}

void fir::thread_grp_fu_184_ce() {
    grp_fu_184_ce = ap_const_logic_1;
}

void fir::thread_grp_fu_184_p0() {
    grp_fu_184_p0 = c_q0.read();
}

void fir::thread_grp_fu_184_p1() {
    grp_fu_184_p1 = x.read();
}

void fir::thread_i_1_fu_178_p2() {
    i_1_fu_178_p2 = (!i_reg_112.read().is_01() || !ap_const_lv5_1F.is_01())? sc_lv<5>(): (sc_bigint<5>(i_reg_112.read()) + sc_biguint<5>(ap_const_lv5_1F));
}

void fir::thread_shift_reg_address0() {
    if (esl_seteq<1,4,4>(ap_ST_st9_fsm_8, ap_CS_fsm.read())) {
        shift_reg_address0 = ap_const_lv4_0;
    } else if (esl_seteq<1,4,4>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
        shift_reg_address0 =  (sc_lv<4>) (tmp_5_reg_218.read());
    } else if (esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read())) {
        shift_reg_address0 =  (sc_lv<4>) (tmp_4_fu_162_p1.read());
    } else {
        shift_reg_address0 = "XXXX";
    }
}

void fir::thread_shift_reg_ce0() {
    if (((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0)) || 
         esl_seteq<1,4,4>(ap_ST_st3_fsm_2, ap_CS_fsm.read()) || 
         esl_seteq<1,4,4>(ap_ST_st9_fsm_8, ap_CS_fsm.read()))) {
        shift_reg_ce0 = ap_const_logic_1;
    } else {
        shift_reg_ce0 = ap_const_logic_0;
    }
}

void fir::thread_shift_reg_d0() {
    if (esl_seteq<1,4,4>(ap_ST_st9_fsm_8, ap_CS_fsm.read())) {
        shift_reg_d0 = x.read();
    } else if (esl_seteq<1,4,4>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
        shift_reg_d0 = shift_reg_q0.read();
    } else {
        shift_reg_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void fir::thread_shift_reg_we0() {
    if ((esl_seteq<1,4,4>(ap_ST_st3_fsm_2, ap_CS_fsm.read()) || 
         esl_seteq<1,4,4>(ap_ST_st9_fsm_8, ap_CS_fsm.read()))) {
        shift_reg_we0 = ap_const_logic_1;
    } else {
        shift_reg_we0 = ap_const_logic_0;
    }
}

void fir::thread_tmp_1_fu_146_p2() {
    tmp_1_fu_146_p2 = (!i_reg_112.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_112.read() == ap_const_lv5_0);
}

void fir::thread_tmp_3_fu_156_p2() {
    tmp_3_fu_156_p2 = (!tmp_7_fu_152_p1.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<4>(): (sc_bigint<4>(tmp_7_fu_152_p1.read()) + sc_biguint<4>(ap_const_lv4_F));
}

void fir::thread_tmp_4_fu_162_p1() {
    tmp_4_fu_162_p1 = esl_zext<64,4>(tmp_3_fu_156_p2.read());
}

void fir::thread_tmp_5_fu_167_p0() {
    tmp_5_fu_167_p0 = esl_sext<32,5>(i_reg_112.read());
}

void fir::thread_tmp_5_fu_167_p1() {
    tmp_5_fu_167_p1 = esl_zext<64,32>(tmp_5_fu_167_p0.read());
}

void fir::thread_tmp_7_fu_152_p1() {
    tmp_7_fu_152_p1 = i_reg_112.read().range(4-1, 0);
}

void fir::thread_tmp_fu_138_p3() {
    tmp_fu_138_p3 = i_reg_112.read().range(4, 4);
}

void fir::thread_y() {
    y = acc_reg_99.read();
}

void fir::thread_y_ap_vld() {
    if ((esl_seteq<1,4,4>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0))) {
        y_ap_vld = ap_const_logic_1;
    } else {
        y_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint()) {
        case 0 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 1 : 
            if (!esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else if ((esl_seteq<1,1,1>(tmp_fu_138_p3.read(), ap_const_lv1_0) && !esl_seteq<1,1,1>(tmp_1_fu_146_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_st9_fsm_8;
            } else {
                ap_NS_fsm = ap_ST_st3_fsm_2;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_st4_fsm_3;
            break;
        case 3 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st6_fsm_5;
            break;
        case 5 : 
            ap_NS_fsm = ap_ST_st7_fsm_6;
            break;
        case 6 : 
            ap_NS_fsm = ap_ST_st8_fsm_7;
            break;
        case 7 : 
            ap_NS_fsm = ap_ST_st14_fsm_13;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st10_fsm_9;
            break;
        case 9 : 
            ap_NS_fsm = ap_ST_st11_fsm_10;
            break;
        case 10 : 
            ap_NS_fsm = ap_ST_st12_fsm_11;
            break;
        case 11 : 
            ap_NS_fsm = ap_ST_st13_fsm_12;
            break;
        case 12 : 
            ap_NS_fsm = ap_ST_st8_fsm_7;
            break;
        case 13 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}
void fir::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y\" :  \"" << y.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_ap_vld\" :  \"" << y_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_address0\" :  \"" << c_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_ce0\" :  \"" << c_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"c_q0\" :  \"" << c_q0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x\" :  \"" << x.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

