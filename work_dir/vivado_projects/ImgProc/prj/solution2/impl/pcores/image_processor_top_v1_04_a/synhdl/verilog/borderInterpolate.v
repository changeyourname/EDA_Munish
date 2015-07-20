// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module borderInterpolate (
        ap_clk,
        ap_rst,
        p,
        len,
        borderType,
        ap_return,
        ap_ce
);

input   ap_clk;
input   ap_rst;
input  [12:0] p;
input  [11:0] len;
input  [4:0] borderType;
output  [14:0] ap_return;
input   ap_ce;

reg   [11:0] len_read_reg_409;
reg   [12:0] p_read_reg_416;
reg   [12:0] ap_reg_ppstg_p_read_reg_416_pp0_it1;
wire   [0:0] tmp_fu_59_p3;
reg   [0:0] tmp_reg_423;
wire   [13:0] len_cast1_fu_73_p1;
reg   [13:0] len_cast1_reg_428;
wire   [0:0] tmp_1_fu_81_p2;
reg   [0:0] tmp_1_reg_433;
wire   [0:0] or_cond_fu_87_p2;
reg   [0:0] or_cond_reg_438;
reg   [0:0] ap_reg_ppstg_or_cond_reg_438_pp0_it1;
wire   [0:0] tmp_2_fu_93_p2;
reg   [0:0] tmp_2_reg_444;
wire   [0:0] tmp_85_fu_99_p3;
reg   [0:0] tmp_85_reg_450;
wire   [0:0] tmp_5_fu_107_p2;
reg   [0:0] tmp_5_reg_456;
wire   [0:0] tmp_7_fu_113_p2;
reg   [0:0] tmp_7_reg_462;
reg   [0:0] ap_reg_ppstg_tmp_7_reg_462_pp0_it1;
wire   [12:0] p_assign_1_fu_119_p2;
reg   [12:0] p_assign_1_reg_468;
wire   [0:0] tmp_11_fu_125_p2;
reg   [0:0] tmp_11_reg_473;
reg   [0:0] ap_reg_ppstg_tmp_11_reg_473_pp0_it1;
wire   [12:0] p_p2_fu_137_p3;
reg   [12:0] p_p2_reg_478;
reg   [12:0] ap_reg_ppstg_p_p2_reg_478_pp0_it1;
reg   [12:0] ap_reg_ppstg_p_p2_reg_478_pp0_it2;
wire   [0:0] tmp_6_fu_165_p2;
reg   [0:0] tmp_6_reg_485;
wire   [12:0] p_p_fu_170_p3;
reg   [12:0] p_p_reg_491;
reg   [12:0] ap_reg_ppstg_p_p_reg_491_pp0_it2;
wire   [0:0] tmp_9_fu_179_p2;
reg   [0:0] tmp_9_reg_496;
wire   [14:0] p_assign_2_fu_205_p2;
reg   [14:0] p_assign_2_reg_501;
wire   [13:0] sel_tmp2_fu_250_p3;
reg   [13:0] sel_tmp2_reg_506;
wire   [0:0] sel_tmp6_fu_268_p2;
reg   [0:0] sel_tmp6_reg_511;
wire   [0:0] sel_tmp8_fu_279_p2;
reg   [0:0] sel_tmp8_reg_516;
wire   [0:0] sel_tmp9_fu_285_p2;
reg   [0:0] sel_tmp9_reg_522;
wire   [0:0] sel_tmp16_demorgan_fu_291_p2;
reg   [0:0] sel_tmp16_demorgan_reg_527;
wire   [0:0] tmp31_fu_296_p2;
reg   [0:0] tmp31_reg_533;
wire   [14:0] sel_tmp20_fu_341_p3;
reg   [14:0] sel_tmp20_reg_538;
wire   [0:0] sel_tmp22_fu_348_p2;
reg   [0:0] sel_tmp22_reg_543;
wire   [0:0] sel_tmp24_fu_352_p2;
reg   [0:0] sel_tmp24_reg_548;
wire   [0:0] sel_tmp28_fu_366_p2;
reg   [0:0] sel_tmp28_reg_553;
wire   [0:0] sel_tmp30_fu_371_p2;
reg   [0:0] sel_tmp30_reg_558;
wire   [13:0] tmp_1_fu_81_p0;
wire   [0:0] rev_fu_67_p2;
wire   [12:0] p_assign_3_fu_131_p2;
wire   [12:0] len_cast1_cast_fu_145_p1;
wire   [12:0] tmp_4_fu_148_p2;
wire   [12:0] p_assign_fu_154_p3;
wire   [13:0] tmp_9_fu_179_p0;
wire   [12:0] tmp_12_fu_184_p3;
wire   [12:0] tmp_13_fu_195_p2;
wire   [14:0] tmp_12_cast_fu_191_p1;
wire   [14:0] p_assign_2_fu_205_p1;
wire   [13:0] p_p2_cast_cast_fu_211_p1;
wire   [13:0] tmp_17_fu_223_p2;
wire   [13:0] tmp_16_cast_cast_fu_219_p1;
wire   [0:0] tmp_1_not_fu_235_p2;
wire   [0:0] sel_tmp_fu_240_p2;
wire   [0:0] sel_tmp1_fu_245_p2;
wire   [13:0] sel_tmp2_fu_250_p1;
wire   [13:0] p_assign_4_fu_229_p2;
wire   [0:0] sel_tmp5_demorgan_fu_258_p2;
wire   [0:0] sel_tmp5_fu_262_p2;
wire   [0:0] sel_tmp7_fu_273_p2;
wire   [0:0] tmp_15_fu_214_p2;
wire   [12:0] p_p3_fu_305_p3;
wire   [0:0] sel_tmp10_fu_318_p2;
wire   [14:0] sel_tmp11_fu_322_p2;
wire   [0:0] sel_tmp18_demorgan_fu_329_p2;
wire   [14:0] sel_tmp11_fu_322_p3;
wire   [14:0] sel_tmp19_fu_333_p2;
wire   [14:0] sel_tmp20_fu_341_p1;
wire   [14:0] sel_tmp19_fu_333_p3;
wire   [0:0] sel_tmp26_fu_356_p2;
wire   [0:0] sel_tmp27_fu_361_p2;
wire   [14:0] sel_tmp25_fu_388_p1;
wire   [14:0] sel_tmp23_fu_382_p3;
wire   [14:0] sel_tmp25_fu_388_p3;
wire   [14:0] p_p2_cast1_cast_fu_379_p1;
wire   [14:0] sel_tmp29_fu_395_p3;
parameter    ap_const_logic_1 = 1'b1;
parameter    ap_true = 1'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv32_C = 32'b1100;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv5_1 = 5'b1;
parameter    ap_const_lv5_2 = 5'b10;
parameter    ap_const_lv5_4 = 5'b100;
parameter    ap_const_lv13_1FFF = 13'b1111111111111;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv13_0 = 13'b0000000000000;
parameter    ap_const_lv12_1 = 12'b1;
parameter    ap_const_lv14_3FFE = 14'b11111111111110;
parameter    ap_const_lv15_0 = 15'b000000000000000;
parameter    ap_const_logic_0 = 1'b0;




/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_const_logic_1 == ap_ce)) begin
        ap_reg_ppstg_or_cond_reg_438_pp0_it1 <= or_cond_reg_438;
        ap_reg_ppstg_p_p2_reg_478_pp0_it1 <= p_p2_reg_478;
        ap_reg_ppstg_p_p2_reg_478_pp0_it2 <= ap_reg_ppstg_p_p2_reg_478_pp0_it1;
        ap_reg_ppstg_p_p_reg_491_pp0_it2 <= p_p_reg_491;
        ap_reg_ppstg_p_read_reg_416_pp0_it1 <= p_read_reg_416;
        ap_reg_ppstg_tmp_11_reg_473_pp0_it1 <= tmp_11_reg_473;
        ap_reg_ppstg_tmp_7_reg_462_pp0_it1 <= tmp_7_reg_462;
        len_cast1_reg_428[0] <= len_cast1_fu_73_p1[0];
len_cast1_reg_428[1] <= len_cast1_fu_73_p1[1];
len_cast1_reg_428[2] <= len_cast1_fu_73_p1[2];
len_cast1_reg_428[3] <= len_cast1_fu_73_p1[3];
len_cast1_reg_428[4] <= len_cast1_fu_73_p1[4];
len_cast1_reg_428[5] <= len_cast1_fu_73_p1[5];
len_cast1_reg_428[6] <= len_cast1_fu_73_p1[6];
len_cast1_reg_428[7] <= len_cast1_fu_73_p1[7];
len_cast1_reg_428[8] <= len_cast1_fu_73_p1[8];
len_cast1_reg_428[9] <= len_cast1_fu_73_p1[9];
len_cast1_reg_428[10] <= len_cast1_fu_73_p1[10];
len_cast1_reg_428[11] <= len_cast1_fu_73_p1[11];
        len_read_reg_409 <= len;
        or_cond_reg_438 <= or_cond_fu_87_p2;
        p_assign_1_reg_468 <= p_assign_1_fu_119_p2;
        p_p2_reg_478 <= p_p2_fu_137_p3;
        p_p_reg_491 <= p_p_fu_170_p3;
        p_read_reg_416 <= p;
        sel_tmp16_demorgan_reg_527 <= sel_tmp16_demorgan_fu_291_p2;
        sel_tmp20_reg_538 <= sel_tmp20_fu_341_p3;
        sel_tmp22_reg_543 <= sel_tmp22_fu_348_p2;
        sel_tmp24_reg_548 <= sel_tmp24_fu_352_p2;
        sel_tmp28_reg_553 <= sel_tmp28_fu_366_p2;
        sel_tmp30_reg_558 <= sel_tmp30_fu_371_p2;
        sel_tmp6_reg_511 <= sel_tmp6_fu_268_p2;
        sel_tmp8_reg_516 <= sel_tmp8_fu_279_p2;
        tmp31_reg_533 <= tmp31_fu_296_p2;
        tmp_11_reg_473 <= tmp_11_fu_125_p2;
        tmp_1_reg_433 <= tmp_1_fu_81_p2;
        tmp_2_reg_444 <= tmp_2_fu_93_p2;
        tmp_5_reg_456 <= tmp_5_fu_107_p2;
        tmp_6_reg_485 <= tmp_6_fu_165_p2;
        tmp_7_reg_462 <= tmp_7_fu_113_p2;
        tmp_85_reg_450 <= p[ap_const_lv32_C];
        tmp_9_reg_496 <= tmp_9_fu_179_p2;
        tmp_reg_423 <= p[ap_const_lv32_C];
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_const_logic_1 == ap_ce) & (or_cond_reg_438 == ap_const_lv1_0))) begin
        p_assign_2_reg_501 <= p_assign_2_fu_205_p2;
        sel_tmp2_reg_506 <= sel_tmp2_fu_250_p3;
        sel_tmp9_reg_522 <= sel_tmp9_fu_285_p2;
    end
end
assign ap_return = ((sel_tmp30_reg_558)? p_p2_cast1_cast_fu_379_p1: sel_tmp29_fu_395_p3);
assign len_cast1_cast_fu_145_p1 = $unsigned(len_read_reg_409);
assign len_cast1_fu_73_p1 = $unsigned(len);
assign or_cond_fu_87_p2 = (tmp_1_fu_81_p2 & rev_fu_67_p2);
assign p_assign_1_fu_119_p2 = (p ^ ap_const_lv13_1FFF);
assign p_assign_2_fu_205_p1 = $signed(tmp_13_fu_195_p2);
assign p_assign_2_fu_205_p2 = (tmp_12_cast_fu_191_p1 + p_assign_2_fu_205_p1);
assign p_assign_3_fu_131_p2 = (ap_const_lv13_0 - p);
assign p_assign_4_fu_229_p2 = (tmp_17_fu_223_p2 + tmp_16_cast_cast_fu_219_p1);
assign p_assign_fu_154_p3 = ((tmp_85_reg_450)? ap_const_lv13_0: tmp_4_fu_148_p2);
assign p_p2_cast1_cast_fu_379_p1 = $unsigned(ap_reg_ppstg_p_p2_reg_478_pp0_it2);
assign p_p2_cast_cast_fu_211_p1 = $unsigned(p_p2_reg_478);
assign p_p2_fu_137_p3 = ((tmp_85_fu_99_p3)? p_assign_3_fu_131_p2: p);
assign p_p3_fu_305_p3 = ((ap_reg_ppstg_tmp_11_reg_473_pp0_it1)? ap_const_lv13_1FFF: ap_reg_ppstg_p_read_reg_416_pp0_it1);
assign p_p_fu_170_p3 = ((tmp_85_reg_450)? p_assign_1_reg_468: p_read_reg_416);
assign rev_fu_67_p2 = (tmp_fu_59_p3 ^ ap_const_lv1_1);
assign sel_tmp10_fu_318_p2 = (sel_tmp8_reg_516 & sel_tmp9_reg_522);
assign sel_tmp11_fu_322_p2 = $signed(sel_tmp2_reg_506);
assign sel_tmp11_fu_322_p3 = ((sel_tmp10_fu_318_p2)? p_assign_2_reg_501: sel_tmp11_fu_322_p2);
assign sel_tmp16_demorgan_fu_291_p2 = (sel_tmp5_demorgan_fu_258_p2 | tmp_5_reg_456);
assign sel_tmp18_demorgan_fu_329_p2 = (sel_tmp16_demorgan_reg_527 | ap_reg_ppstg_tmp_7_reg_462_pp0_it1);
assign sel_tmp19_fu_333_p2 = $signed(p_p3_fu_305_p3);
assign sel_tmp19_fu_333_p3 = ((sel_tmp18_demorgan_fu_329_p2)? sel_tmp11_fu_322_p3: sel_tmp19_fu_333_p2);
assign sel_tmp1_fu_245_p2 = (tmp_2_reg_444 & sel_tmp_fu_240_p2);
assign sel_tmp20_fu_341_p1 = $signed(ap_reg_ppstg_p_read_reg_416_pp0_it1);
assign sel_tmp20_fu_341_p3 = ((ap_reg_ppstg_or_cond_reg_438_pp0_it1)? sel_tmp20_fu_341_p1: sel_tmp19_fu_333_p3);
assign sel_tmp22_fu_348_p2 = (sel_tmp6_reg_511 & tmp_6_reg_485);
assign sel_tmp23_fu_382_p3 = ((sel_tmp22_reg_543)? ap_const_lv15_0: sel_tmp20_reg_538);
assign sel_tmp24_fu_352_p2 = (sel_tmp8_reg_516 & tmp_9_reg_496);
assign sel_tmp25_fu_388_p1 = $signed(ap_reg_ppstg_p_p_reg_491_pp0_it2);
assign sel_tmp25_fu_388_p3 = ((sel_tmp24_reg_548)? sel_tmp25_fu_388_p1: sel_tmp23_fu_382_p3);
assign sel_tmp26_fu_356_p2 = (sel_tmp16_demorgan_reg_527 ^ ap_const_lv1_1);
assign sel_tmp27_fu_361_p2 = (ap_reg_ppstg_tmp_7_reg_462_pp0_it1 & sel_tmp26_fu_356_p2);
assign sel_tmp28_fu_366_p2 = (sel_tmp27_fu_361_p2 & tmp_6_reg_485);
assign sel_tmp29_fu_395_p3 = ((sel_tmp28_reg_553)? ap_const_lv15_0: sel_tmp25_fu_388_p3);
assign sel_tmp2_fu_250_p1 = $signed(p_assign_fu_154_p3);
assign sel_tmp2_fu_250_p3 = ((sel_tmp1_fu_245_p2)? sel_tmp2_fu_250_p1: p_assign_4_fu_229_p2);
assign sel_tmp30_fu_371_p2 = (tmp31_reg_533 & sel_tmp27_fu_361_p2);
assign sel_tmp5_demorgan_fu_258_p2 = (or_cond_reg_438 | tmp_2_reg_444);
assign sel_tmp5_fu_262_p2 = (sel_tmp5_demorgan_fu_258_p2 ^ ap_const_lv1_1);
assign sel_tmp6_fu_268_p2 = (tmp_5_reg_456 & sel_tmp5_fu_262_p2);
assign sel_tmp7_fu_273_p2 = (tmp_6_fu_165_p2 ^ ap_const_lv1_1);
assign sel_tmp8_fu_279_p2 = (sel_tmp6_fu_268_p2 & sel_tmp7_fu_273_p2);
assign sel_tmp9_fu_285_p2 = (tmp_9_fu_179_p2 ^ ap_const_lv1_1);
assign sel_tmp_fu_240_p2 = (tmp_reg_423 | tmp_1_not_fu_235_p2);
assign tmp31_fu_296_p2 = (tmp_15_fu_214_p2 & sel_tmp7_fu_273_p2);
assign tmp_11_fu_125_p2 = (borderType == ap_const_lv5_0? 1'b1: 1'b0);
assign tmp_12_cast_fu_191_p1 = $unsigned(tmp_12_fu_184_p3);
assign tmp_12_fu_184_p3 = {{len_read_reg_409}, {ap_const_lv1_0}};
assign tmp_13_fu_195_p2 = (p_p_fu_170_p3 ^ ap_const_lv13_1FFF);
assign tmp_15_fu_214_p2 = (p_p2_reg_478 < len_cast1_cast_fu_145_p1? 1'b1: 1'b0);
assign tmp_16_cast_cast_fu_219_p1 = $unsigned(tmp_12_fu_184_p3);
assign tmp_17_fu_223_p2 = (ap_const_lv14_3FFE - p_p2_cast_cast_fu_211_p1);
assign tmp_1_fu_81_p0 = $signed(p);
assign tmp_1_fu_81_p2 = ($signed(tmp_1_fu_81_p0) < $signed(len_cast1_fu_73_p1)? 1'b1: 1'b0);
assign tmp_1_not_fu_235_p2 = (tmp_1_reg_433 ^ ap_const_lv1_1);
assign tmp_2_fu_93_p2 = (borderType == ap_const_lv5_1? 1'b1: 1'b0);
assign tmp_4_fu_148_p2 = (len_cast1_cast_fu_145_p1 + ap_const_lv13_1FFF);
assign tmp_5_fu_107_p2 = (borderType == ap_const_lv5_2? 1'b1: 1'b0);
assign tmp_6_fu_165_p2 = (len_read_reg_409 == ap_const_lv12_1? 1'b1: 1'b0);
assign tmp_7_fu_113_p2 = (borderType == ap_const_lv5_4? 1'b1: 1'b0);
assign tmp_85_fu_99_p3 = p[ap_const_lv32_C];
assign tmp_9_fu_179_p0 = $signed(p_p_fu_170_p3);
assign tmp_9_fu_179_p2 = ($signed(tmp_9_fu_179_p0) < $signed(len_cast1_reg_428)? 1'b1: 1'b0);
assign tmp_fu_59_p3 = p[ap_const_lv32_C];
always @ (posedge ap_clk)
begin
    len_cast1_reg_428[13:12] <= 2'b00;
end



endmodule //borderInterpolate
