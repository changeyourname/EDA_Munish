// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2013.3
// Copyright (C) 2013 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module CvtColor_0_32_32_1080_1920_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        p_src_rows_V_read,
        p_src_cols_V_read,
        p_src_data_stream_0_V_dout,
        p_src_data_stream_0_V_empty_n,
        p_src_data_stream_0_V_read,
        p_src_data_stream_1_V_dout,
        p_src_data_stream_1_V_empty_n,
        p_src_data_stream_1_V_read,
        p_src_data_stream_2_V_dout,
        p_src_data_stream_2_V_empty_n,
        p_src_data_stream_2_V_read,
        p_dst_data_stream_0_V_din,
        p_dst_data_stream_0_V_full_n,
        p_dst_data_stream_0_V_write,
        p_dst_data_stream_1_V_din,
        p_dst_data_stream_1_V_full_n,
        p_dst_data_stream_1_V_write,
        p_dst_data_stream_2_V_din,
        p_dst_data_stream_2_V_full_n,
        p_dst_data_stream_2_V_write
);

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [11:0] p_src_rows_V_read;
input  [11:0] p_src_cols_V_read;
input  [7:0] p_src_data_stream_0_V_dout;
input   p_src_data_stream_0_V_empty_n;
output   p_src_data_stream_0_V_read;
input  [7:0] p_src_data_stream_1_V_dout;
input   p_src_data_stream_1_V_empty_n;
output   p_src_data_stream_1_V_read;
input  [7:0] p_src_data_stream_2_V_dout;
input   p_src_data_stream_2_V_empty_n;
output   p_src_data_stream_2_V_read;
output  [7:0] p_dst_data_stream_0_V_din;
input   p_dst_data_stream_0_V_full_n;
output   p_dst_data_stream_0_V_write;
output  [7:0] p_dst_data_stream_1_V_din;
input   p_dst_data_stream_1_V_full_n;
output   p_dst_data_stream_1_V_write;
output  [7:0] p_dst_data_stream_2_V_din;
input   p_dst_data_stream_2_V_full_n;
output   p_dst_data_stream_2_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg p_src_data_stream_0_V_read;
reg p_src_data_stream_1_V_read;
reg p_src_data_stream_2_V_read;
reg p_dst_data_stream_0_V_write;
reg p_dst_data_stream_1_V_write;
reg p_dst_data_stream_2_V_write;
reg    ap_done_reg = 1'b0;
reg   [1:0] ap_CS_fsm = 2'b00;
reg   [11:0] j_reg_148;
reg    ap_sig_bdd_56;
wire   [11:0] i_1_fu_165_p2;
reg   [11:0] i_1_reg_300;
wire   [0:0] exitcond_fu_171_p2;
reg   [0:0] exitcond_reg_305;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_sig_bdd_89;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
wire   [11:0] j_1_fu_176_p2;
wire   [0:0] exitcond8_fu_160_p2;
reg   [11:0] i_reg_137;
wire   [7:0] tmp_9_fu_276_p3;
wire   [7:0] p_Val2_s_fu_186_p0;
wire   [7:0] p_Val2_1_fu_196_p0;
wire   [7:0] p_Val2_2_fu_206_p0;
wire   [26:0] p_Val2_s_fu_186_p2;
wire   [27:0] p_Val2_2_fu_206_p2;
wire   [27:0] tmp_cast_fu_212_p1;
wire   [27:0] p_Val2_3_fu_216_p2;
wire   [28:0] p_Val2_1_fu_196_p2;
wire   [28:0] tmp_8_cast_fu_222_p1;
wire   [28:0] p_Val2_4_fu_226_p2;
wire   [7:0] tmp_1_fu_232_p4;
wire   [0:0] tmp_11_fu_246_p3;
wire   [8:0] p_Val2_5_cast_fu_242_p1;
wire   [8:0] tmp_11_cast_fu_254_p1;
wire   [8:0] p_Val2_6_fu_258_p2;
wire   [0:0] tmp_12_fu_264_p3;
wire   [7:0] tmp_13_fu_272_p1;
reg   [1:0] ap_NS_fsm;
wire   [28:0] p_Val2_1_fu_196_p00;
wire   [27:0] p_Val2_2_fu_206_p00;
wire   [26:0] p_Val2_s_fu_186_p00;
parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 2'b00;
parameter    ap_ST_st2_fsm_1 = 2'b1;
parameter    ap_ST_pp0_stg0_fsm_2 = 2'b10;
parameter    ap_ST_st5_fsm_3 = 2'b11;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv12_0 = 12'b000000000000;
parameter    ap_const_lv12_1 = 12'b1;
parameter    ap_const_lv27_3A5E3 = 27'b111010010111100011;
parameter    ap_const_lv29_12C8B4 = 29'b100101100100010110100;
parameter    ap_const_lv28_99168 = 28'b10011001000101101000;
parameter    ap_const_lv32_15 = 32'b10101;
parameter    ap_const_lv32_1C = 32'b11100;
parameter    ap_const_lv32_14 = 32'b10100;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv8_FF = 8'b11111111;
parameter    ap_true = 1'b1;




/// the current state (ap_CS_fsm) of the state machine. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

/// ap_done_reg assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_done_reg
    if (ap_rst == 1'b1) begin
        ap_done_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_continue)) begin
            ap_done_reg <= ap_const_logic_0;
        end else if (((ap_ST_st2_fsm_1 == ap_CS_fsm) & ~(ap_const_lv1_0 == exitcond8_fu_160_p2))) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

/// ap_reg_ppiten_pp0_it0 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(exitcond_fu_171_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_ST_st2_fsm_1 == ap_CS_fsm) & (ap_const_lv1_0 == exitcond8_fu_160_p2))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

/// ap_reg_ppiten_pp0_it1 assign process. ///
always @ (posedge ap_clk)
begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (exitcond_fu_171_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_ST_st2_fsm_1 == ap_CS_fsm) & (ap_const_lv1_0 == exitcond8_fu_160_p2)) | ((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(exitcond_fu_171_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_ST_st5_fsm_3 == ap_CS_fsm)) begin
        i_reg_137 <= i_1_reg_300;
    end else if (((ap_ST_st1_fsm_0 == ap_CS_fsm) & ~ap_sig_bdd_56)) begin
        i_reg_137 <= ap_const_lv12_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (exitcond_fu_171_p2 == ap_const_lv1_0))) begin
        j_reg_148 <= j_1_fu_176_p2;
    end else if (((ap_ST_st2_fsm_1 == ap_CS_fsm) & (ap_const_lv1_0 == exitcond8_fu_160_p2))) begin
        j_reg_148 <= ap_const_lv12_0;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        exitcond_reg_305 <= exitcond_fu_171_p2;
    end
end

/// assign process. ///
always @(posedge ap_clk)
begin
    if ((ap_ST_st2_fsm_1 == ap_CS_fsm)) begin
        i_1_reg_300 <= i_1_fu_165_p2;
    end
end

/// ap_done assign process. ///
always @ (ap_done_reg or ap_CS_fsm or exitcond8_fu_160_p2)
begin
    if (((ap_const_logic_1 == ap_done_reg) | ((ap_ST_st2_fsm_1 == ap_CS_fsm) & ~(ap_const_lv1_0 == exitcond8_fu_160_p2)))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

/// ap_idle assign process. ///
always @ (ap_start or ap_CS_fsm)
begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_ST_st1_fsm_0 == ap_CS_fsm))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

/// ap_ready assign process. ///
always @ (ap_CS_fsm or exitcond8_fu_160_p2)
begin
    if (((ap_ST_st2_fsm_1 == ap_CS_fsm) & ~(ap_const_lv1_0 == exitcond8_fu_160_p2))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

/// p_dst_data_stream_0_V_write assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_dst_data_stream_0_V_write = ap_const_logic_1;
    end else begin
        p_dst_data_stream_0_V_write = ap_const_logic_0;
    end
end

/// p_dst_data_stream_1_V_write assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_dst_data_stream_1_V_write = ap_const_logic_1;
    end else begin
        p_dst_data_stream_1_V_write = ap_const_logic_0;
    end
end

/// p_dst_data_stream_2_V_write assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_dst_data_stream_2_V_write = ap_const_logic_1;
    end else begin
        p_dst_data_stream_2_V_write = ap_const_logic_0;
    end
end

/// p_src_data_stream_0_V_read assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_src_data_stream_0_V_read = ap_const_logic_1;
    end else begin
        p_src_data_stream_0_V_read = ap_const_logic_0;
    end
end

/// p_src_data_stream_1_V_read assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_src_data_stream_1_V_read = ap_const_logic_1;
    end else begin
        p_src_data_stream_1_V_read = ap_const_logic_0;
    end
end

/// p_src_data_stream_2_V_read assign process. ///
always @ (ap_CS_fsm or exitcond_reg_305 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1)
begin
    if (((ap_ST_pp0_stg0_fsm_2 == ap_CS_fsm) & (exitcond_reg_305 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        p_src_data_stream_2_V_read = ap_const_logic_1;
    end else begin
        p_src_data_stream_2_V_read = ap_const_logic_0;
    end
end
always @ (ap_CS_fsm or ap_sig_bdd_56 or exitcond_fu_171_p2 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_89 or ap_reg_ppiten_pp0_it1 or exitcond8_fu_160_p2)
begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
            if (~ap_sig_bdd_56) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        ap_ST_st2_fsm_1 : 
            if (~(ap_const_lv1_0 == exitcond8_fu_160_p2)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            end
        ap_ST_pp0_stg0_fsm_2 : 
            if (~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(exitcond_fu_171_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_89 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(exitcond_fu_171_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_st5_fsm_3;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            end
        ap_ST_st5_fsm_3 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
        default : 
            ap_NS_fsm = 'bx;
    endcase
end

/// ap_sig_bdd_56 assign process. ///
always @ (ap_start or ap_done_reg)
begin
    ap_sig_bdd_56 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end

/// ap_sig_bdd_89 assign process. ///
always @ (p_src_data_stream_0_V_empty_n or p_src_data_stream_1_V_empty_n or p_src_data_stream_2_V_empty_n or p_dst_data_stream_0_V_full_n or p_dst_data_stream_1_V_full_n or p_dst_data_stream_2_V_full_n or exitcond_reg_305)
begin
    ap_sig_bdd_89 = (((p_src_data_stream_0_V_empty_n == ap_const_logic_0) & (exitcond_reg_305 == ap_const_lv1_0)) | ((exitcond_reg_305 == ap_const_lv1_0) & (p_src_data_stream_1_V_empty_n == ap_const_logic_0)) | ((exitcond_reg_305 == ap_const_lv1_0) & (p_src_data_stream_2_V_empty_n == ap_const_logic_0)) | ((exitcond_reg_305 == ap_const_lv1_0) & (p_dst_data_stream_0_V_full_n == ap_const_logic_0)) | ((exitcond_reg_305 == ap_const_lv1_0) & (p_dst_data_stream_1_V_full_n == ap_const_logic_0)) | ((exitcond_reg_305 == ap_const_lv1_0) & (p_dst_data_stream_2_V_full_n == ap_const_logic_0)));
end
assign exitcond8_fu_160_p2 = (i_reg_137 == p_src_rows_V_read? 1'b1: 1'b0);
assign exitcond_fu_171_p2 = (j_reg_148 == p_src_cols_V_read? 1'b1: 1'b0);
assign i_1_fu_165_p2 = (i_reg_137 + ap_const_lv12_1);
assign j_1_fu_176_p2 = (j_reg_148 + ap_const_lv12_1);
assign p_Val2_1_fu_196_p0 = p_Val2_1_fu_196_p00;
assign p_Val2_1_fu_196_p00 = $unsigned(p_src_data_stream_1_V_dout);
assign p_Val2_1_fu_196_p2 = ($signed({{1'b0}, {p_Val2_1_fu_196_p0}}) * $signed('h12C8B4));
assign p_Val2_2_fu_206_p0 = p_Val2_2_fu_206_p00;
assign p_Val2_2_fu_206_p00 = $unsigned(p_src_data_stream_0_V_dout);
assign p_Val2_2_fu_206_p2 = ($signed({{1'b0}, {p_Val2_2_fu_206_p0}}) * $signed('h99168));
assign p_Val2_3_fu_216_p2 = (p_Val2_2_fu_206_p2 + tmp_cast_fu_212_p1);
assign p_Val2_4_fu_226_p2 = (p_Val2_1_fu_196_p2 + tmp_8_cast_fu_222_p1);
assign p_Val2_5_cast_fu_242_p1 = $unsigned(tmp_1_fu_232_p4);
assign p_Val2_6_fu_258_p2 = (p_Val2_5_cast_fu_242_p1 + tmp_11_cast_fu_254_p1);
assign p_Val2_s_fu_186_p0 = p_Val2_s_fu_186_p00;
assign p_Val2_s_fu_186_p00 = $unsigned(p_src_data_stream_2_V_dout);
assign p_Val2_s_fu_186_p2 = ($signed({{1'b0}, {p_Val2_s_fu_186_p0}}) * $signed('h3A5E3));
assign p_dst_data_stream_0_V_din = tmp_9_fu_276_p3;
assign p_dst_data_stream_1_V_din = tmp_9_fu_276_p3;
assign p_dst_data_stream_2_V_din = tmp_9_fu_276_p3;
assign tmp_11_cast_fu_254_p1 = $unsigned(tmp_11_fu_246_p3);
assign tmp_11_fu_246_p3 = p_Val2_4_fu_226_p2[ap_const_lv32_14];
assign tmp_12_fu_264_p3 = p_Val2_6_fu_258_p2[ap_const_lv32_8];
assign tmp_13_fu_272_p1 = p_Val2_6_fu_258_p2[7:0];
assign tmp_1_fu_232_p4 = {{p_Val2_4_fu_226_p2[ap_const_lv32_1C : ap_const_lv32_15]}};
assign tmp_8_cast_fu_222_p1 = $unsigned(p_Val2_3_fu_216_p2);
assign tmp_9_fu_276_p3 = ((tmp_12_fu_264_p3)? ap_const_lv8_FF: tmp_13_fu_272_p1);
assign tmp_cast_fu_212_p1 = $unsigned(p_Val2_s_fu_186_p2);


endmodule //CvtColor_0_32_32_1080_1920_s

