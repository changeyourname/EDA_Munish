// ==============================================================
// File generated by AutoESL - High-Level Synthesis System (C, C++, SystemC)
// Version: 2012.1
// Copyright (C) 2012 Xilinx Inc. All rights reserved.
// 
// ==============================================================


`timescale 1ns/1ps

module INPUT_STREAM_if (
    // system singals
    input  wire        clk,
    input  wire        reset,
    // AXI4-Stream singals
    input  wire        TVALID,
    output wire        TREADY,
    input  wire [31:0] TDATA,
    input  wire [3:0]  TSTRB,
    input  wire [0:0]  TUSER,
    input  wire [0:0]  TLAST,
    input  wire [0:0]  TDEST,
    // User signals
    output wire [31:0] inter_pix_data_V_dout,
    output wire        inter_pix_data_V_empty_n,
    input  wire        inter_pix_data_V_read,
    output wire [3:0]  inter_pix_strb_V_dout,
    output wire        inter_pix_strb_V_empty_n,
    input  wire        inter_pix_strb_V_read,
    output wire [0:0]  inter_pix_user_V_dout,
    output wire        inter_pix_user_V_empty_n,
    input  wire        inter_pix_user_V_read,
    output wire [0:0]  inter_pix_last_V_dout,
    output wire        inter_pix_last_V_empty_n,
    input  wire        inter_pix_last_V_read,
    output wire [0:0]  inter_pix_tdest_V_dout,
    output wire        inter_pix_tdest_V_empty_n,
    input  wire        inter_pix_tdest_V_read
);
//------------------------Local signal-------------------
// FIFO
wire [0:0]  fifo_write;
wire [0:0]  fifo_full_n;
wire [31:0] inter_pix_data_V_din;
wire [0:0]  inter_pix_data_V_full_n;
wire [3:0]  inter_pix_strb_V_din;
wire [0:0]  inter_pix_strb_V_full_n;
wire [0:0]  inter_pix_user_V_din;
wire [0:0]  inter_pix_user_V_full_n;
wire [0:0]  inter_pix_last_V_din;
wire [0:0]  inter_pix_last_V_full_n;
wire [0:0]  inter_pix_tdest_V_din;
wire [0:0]  inter_pix_tdest_V_full_n;
// register slice
wire [0:0]  s_valid;
wire [0:0]  s_ready;
wire [38:0] s_data;
wire [0:0]  m_valid;
wire [0:0]  m_ready;
wire [38:0] m_data;

//------------------------Instantiation------------------
// rs
INPUT_STREAM_reg_slice #(
    .N       ( 39 )
) rs (
    .clk     ( clk ),
    .reset   ( reset ),
    .s_data  ( s_data ),
    .s_valid ( s_valid ),
    .s_ready ( s_ready ),
    .m_data  ( m_data ),
    .m_valid ( m_valid ),
    .m_ready ( m_ready )
);

// inter_pix_data_V_fifo
INPUT_STREAM_fifo #(
    .DATA_BITS  ( 32 ),
    .DEPTH_BITS ( 4 )
) inter_pix_data_V_fifo (
    .clk        ( clk ),
    .aclr       ( reset ),
    .empty_n    ( inter_pix_data_V_empty_n ),
    .full_n     ( inter_pix_data_V_full_n ),
    .read       ( inter_pix_data_V_read ),
    .write      ( fifo_write ),
    .dout       ( inter_pix_data_V_dout ),
    .din        ( inter_pix_data_V_din )
);

// inter_pix_strb_V_fifo
INPUT_STREAM_fifo #(
    .DATA_BITS  ( 4 ),
    .DEPTH_BITS ( 4 )
) inter_pix_strb_V_fifo (
    .clk        ( clk ),
    .aclr       ( reset ),
    .empty_n    ( inter_pix_strb_V_empty_n ),
    .full_n     ( inter_pix_strb_V_full_n ),
    .read       ( inter_pix_strb_V_read ),
    .write      ( fifo_write ),
    .dout       ( inter_pix_strb_V_dout ),
    .din        ( inter_pix_strb_V_din )
);

// inter_pix_user_V_fifo
INPUT_STREAM_fifo #(
    .DATA_BITS  ( 1 ),
    .DEPTH_BITS ( 4 )
) inter_pix_user_V_fifo (
    .clk        ( clk ),
    .aclr       ( reset ),
    .empty_n    ( inter_pix_user_V_empty_n ),
    .full_n     ( inter_pix_user_V_full_n ),
    .read       ( inter_pix_user_V_read ),
    .write      ( fifo_write ),
    .dout       ( inter_pix_user_V_dout ),
    .din        ( inter_pix_user_V_din )
);

// inter_pix_last_V_fifo
INPUT_STREAM_fifo #(
    .DATA_BITS  ( 1 ),
    .DEPTH_BITS ( 4 )
) inter_pix_last_V_fifo (
    .clk        ( clk ),
    .aclr       ( reset ),
    .empty_n    ( inter_pix_last_V_empty_n ),
    .full_n     ( inter_pix_last_V_full_n ),
    .read       ( inter_pix_last_V_read ),
    .write      ( fifo_write ),
    .dout       ( inter_pix_last_V_dout ),
    .din        ( inter_pix_last_V_din )
);

// inter_pix_tdest_V_fifo
INPUT_STREAM_fifo #(
    .DATA_BITS  ( 1 ),
    .DEPTH_BITS ( 4 )
) inter_pix_tdest_V_fifo (
    .clk        ( clk ),
    .aclr       ( reset ),
    .empty_n    ( inter_pix_tdest_V_empty_n ),
    .full_n     ( inter_pix_tdest_V_full_n ),
    .read       ( inter_pix_tdest_V_read ),
    .write      ( fifo_write ),
    .dout       ( inter_pix_tdest_V_dout ),
    .din        ( inter_pix_tdest_V_din )
);

//------------------------Body---------------------------
//++++++++++++++++++++++++AXI4-Stream++++++++++++++++++++
assign TREADY = s_ready;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

//++++++++++++++++++++++++Reigister Slice++++++++++++++++
assign s_valid = TVALID;
assign m_ready = fifo_full_n;
assign s_data  = {TDEST, TLAST, TUSER, TSTRB, TDATA};

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

//++++++++++++++++++++++++FIFO+++++++++++++++++++++++++++
assign fifo_write            = fifo_full_n & m_valid;
assign inter_pix_data_V_din  = m_data[31:0];
assign inter_pix_strb_V_din  = m_data[35:32];
assign inter_pix_user_V_din  = m_data[36:36];
assign inter_pix_last_V_din  = m_data[37:37];
assign inter_pix_tdest_V_din = m_data[38:38];
assign fifo_full_n           = inter_pix_data_V_full_n & inter_pix_strb_V_full_n & inter_pix_user_V_full_n & inter_pix_last_V_full_n & inter_pix_tdest_V_full_n;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++

endmodule



`timescale 1ns/1ps

module INPUT_STREAM_fifo
#(parameter
    DATA_BITS  = 8,
    DEPTH_BITS = 4
)(
    input  wire                 clk,
    input  wire                 aclr,
    output wire                 empty_n,
    output wire                 full_n,
    input  wire                 read,
    input  wire                 write,
    output wire [DATA_BITS-1:0] dout,
    input  wire [DATA_BITS-1:0] din
);
//------------------------Parameter----------------------
localparam
    DEPTH = 1 << DEPTH_BITS;
//------------------------Local signal-------------------
reg                   empty;
reg                   full;
reg  [DEPTH_BITS-1:0] index;
reg  [DATA_BITS-1:0]  mem[0:DEPTH-1];
//------------------------Body---------------------------
assign empty_n = ~empty;
assign full_n  = ~full;
assign dout    = mem[index];

// empty
always @(posedge clk or posedge aclr) begin
    if (aclr)
        empty <= 1'b1;
    else if (empty & write & ~read)
        empty <= 1'b0;
    else if (~empty & ~write & read & (index==1'b0))
        empty <= 1'b1;
end

// full
always @(posedge clk or posedge aclr) begin
    if (aclr)
        full <= 1'b0;
    else if (full & read & ~write)
        full <= 1'b0;
    else if (~full & ~read & write & (index==DEPTH-2'd2))
        full <= 1'b1;
end

// index
always @(posedge clk or posedge aclr) begin
    if (aclr)
        index <= {DEPTH_BITS{1'b1}};
    else if (~empty & ~write & read)
        index <= index - 1'b1;
    else if (~full & ~read & write)
        index <= index + 1'b1;
end

// mem
always @(posedge clk) begin
    if (~full & write) mem[0] <= din;
end

genvar i;
generate
    for (i = 1; i < DEPTH; i = i + 1) begin : gen_sr
        always @(posedge clk) begin
            if (~full & write) mem[i] <= mem[i-1];
        end
    end
endgenerate

endmodule

`timescale 1ns/1ps

module INPUT_STREAM_reg_slice
#(parameter
    N = 8   // data width
) (
    // system signals
    input  wire         clk,
    input  wire         reset,
    // slave side
    input  wire [N-1:0] s_data,
    input  wire         s_valid,
    output wire         s_ready,
    // master side
    output wire [N-1:0] m_data,
    output wire         m_valid,
    input  wire         m_ready
);
//------------------------Parameter----------------------
// state
localparam [1:0]
    ZERO = 2'b10,
    ONE  = 2'b11,
    TWO  = 2'b01;
//------------------------Local signal-------------------
reg  [N-1:0] data_p1;
reg  [N-1:0] data_p2;
wire         load_p1;
wire         load_p2;
wire         load_p1_from_p2;
reg          s_ready_t;
reg  [1:0]   state;
reg  [1:0]   next;
//------------------------Body---------------------------
assign s_ready = s_ready_t;
assign m_data  = data_p1;
assign m_valid = state[0];

assign load_p1 = (state == ZERO && s_valid) ||
                 (state == ONE && s_valid && m_ready) ||
                 (state == TWO && m_ready);
assign load_p2 = s_valid & s_ready;
assign load_p1_from_p2 = (state == TWO);

// data_p1
always @(posedge clk) begin
    if (load_p1) begin
        if (load_p1_from_p2)
            data_p1 <= data_p2;
        else
            data_p1 <= s_data;
    end
end

// data_p2
always @(posedge clk) begin
    if (load_p2) data_p2 <= s_data;
end

// s_ready_t
always @(posedge clk) begin
    if (reset)
        s_ready_t <= 1'b0;
    else if (state == ZERO)
        s_ready_t <= 1'b1;
    else if (state == ONE && next == TWO)
        s_ready_t <= 1'b0;
    else if (state == TWO && next == ONE)
        s_ready_t <= 1'b1;
end

// state
always @(posedge clk) begin
    if (reset)
        state <= ZERO;
    else
        state <= next;
end

// next
always @(*) begin
    case (state)
        ZERO:
            if (s_valid & s_ready)
                next = ONE;
            else
                next = ZERO;
        ONE:
            if (~s_valid & m_ready)
                next = ZERO;
            else if (s_valid & ~m_ready)
                next = TWO;
            else
                next = ONE;
        TWO:
            if (m_ready)
                next = ONE;
            else
                next = TWO;
        default:
            next = ZERO;
    endcase
end

endmodule

