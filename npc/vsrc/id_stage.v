`include "defines.v"
module ysyx_22051145_idstage (
    input wire rst,
    input wire [31:0]inst,
    input wire [`REG_BUS]rs1_data,
    input wire [`REG_BUS]rs2_data,

    output wire en_w,
    output wire [4:0]waddr,

    output wire [4:0]raddr1,
    output wire [4:0]raddr2,

    output [7:0]inst_type,
    output wire [`REG_BUS]op1,
    output wire [`REG_BUS]op2
);
    
// Itype
wire [6  : 0]opcode;
wire [4  : 0]rd;
wire [2  : 0]func3;
wire [4  : 0]rs1;
wire [11 : 0]imm;
assign opcode = inst[6  :  0];
assign rd     = inst[11 :  7];
assign func3  = inst[14 : 12];
assign rs1    = inst[19 : 15];
assign imm    = inst[31 : 20];

wire inst_addi =   ~opcode[2] & ~opcode[3] & opcode[4] & ~opcode[5] & ~opcode[6] & ~func3[0] & ~func3[1] & ~func3[2];
assign inst_type[0] = (  rst == 1'b1 ) ? 0 : inst_addi;
assign inst_type[1] = (  rst == 1'b1 ) ? 0 : 0;
assign inst_type[2] = (  rst == 1'b1 ) ? 0 : 0;
assign inst_type[3] = (  rst == 1'b1 ) ? 0 : 0;
assign inst_type[4] = (  rst == 1'b1 ) ? 0 : inst_addi;
assign inst_type[5] = (  rst == 1'b1 ) ? 0 : 0;
assign inst_type[6] = (  rst == 1'b1 ) ? 0 : 0;
assign inst_type[7] = (  rst == 1'b1 ) ? 0 : 0;

assign en_w = ( rst == 1'b1 ) ? 0 : inst_addi;

assign waddr = (rst == 1'b1) ? 0 : (inst_addi == 1'b1 ? rd : 0);

assign raddr1 = (rst == 1'b1) ? 0 : (inst_addi == 1'b1 ? rs1 : 0);

assign raddr2 =  0;

assign op1 = (rst == 1'b1) ? 0 : (inst_addi == 1'b1 ? rs1_data : 0);
assign op2 = (rst == 1'b1) ? 0 : (inst_addi == 1'b1 ? {{52{imm[11]}}, imm} : 0);
endmodule