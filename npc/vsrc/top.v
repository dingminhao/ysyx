`timescale  1ns/1ps
`include "defines.v"
module ysyx_top (
    input wire clk,
    input wire rst,
    input wire [31:0] inst,
    output wire [`REG_BUS] in_addr
);

wire [`REG_BUS]rs1_data;
wire [`REG_BUS]rs2_data;
reg [`REG_BUS]rd_data;

wire en_w;
wire [4:0] waddr;
wire [4:0] raddr1;
wire [4:0] raddr2;

wire [7:0] inst_type;

wire [`REG_BUS] op1;
wire [`REG_BUS] op2;


ysyx_22051145_ifu IFU( 
    .rst(rst),
    .clk(clk),
    .in_addr(in_addr)
);

ysyx_22051145_idstage Idstage(
    .rst(rst),
    .inst(inst),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),

    .en_w(en_w),
    .waddr(waddr),

    .raddr1(raddr1),
    .raddr2(raddr2),

    .inst_type(inst_type),
    .op1(op1),
    .op2(op2)
);

ysyx_22051145_exestage Exestage(
    .rst(rst),
    .inst_type(inst_type),
    .op1(op1),
    .op2(op2),
    .rd_data(rd_data)
);

ysyx_22051145_regfile Regfile(
    .rst(rst),
    .clk(clk),
    .w_data(rd_data),
    .waddr(waddr),
    .raddr1(raddr1),
    .raddr2(raddr2),
    .en_w(en_w),
    .rdata_1(rs1_data),
    .rdata_2(rs2_data)
);
    
endmodule
