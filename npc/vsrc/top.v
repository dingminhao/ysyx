`timescale  1ns/1ps
`include "defines.v"
module ysyx_top (
    input wire clk,
    input wire rst
);
// jal jalr
wire jump_flag;
wire [`REG_BUS]jump_addr;
wire [`REG_BUS] in_addr;
wire [`REG_BUS]rd_data;
wire access_rs2;
wire access_rd;
wire [4:0] rd_waddr;
wire [31:0] inst;
wire [4:0] raddr1;
wire [4:0] raddr2;

wire [7:0] inst_type;

wire [`REG_BUS] rs1;
wire [`REG_BUS] rs2;

wire[`REG_BUS] dec_imm;
wire[`DECINFO_WIDTH-1:0] dec_info_bus;

ysyx_22051145_ifu IFU( 
    .rst(rst),
    .clk(clk),
    .jump_flag(jump_flag),
    .jump_addr(jump_addr),
    .in_addr(in_addr)
);

ysyx_22051145_fetch Fetch (

    .inst_addr(in_addr),
    .inst_data(inst)

);

ysyx_22051145_idstage Idstage(
    .inst(inst),

    .access_rd(access_rd),
    .rd_waddr_o(rd_waddr),

    .rs1_raddr_o(raddr1),
    .rs2_raddr_o(raddr2),
    .dec_imm_o(dec_imm),

    .dec_info_bus_o(dec_info_bus)

);

ysyx_22051145_exestage Exestage(
    .pc(in_addr),

    .rs1(rs1),
    .rs2(rs2),
    .dec_imm(dec_imm),

    .dec_info_bus(dec_info_bus),

    .access_rs2(access_rs2),

    .jump_flag(jump_flag),
    .jump_addr(jump_addr),
    .wbck_dest_dat(rd_data)
);

ysyx_22051145_regfile Regfile(
    .rst(rst),
    .clk(clk),
    .w_data(rd_data),

    .waddr(rd_waddr),

    .raddr1(raddr1),
    .raddr2(raddr2),

    .en_w(access_rd),
    .rdata_1(rs1),
    .rdata_2(rs2)
);
    
endmodule
