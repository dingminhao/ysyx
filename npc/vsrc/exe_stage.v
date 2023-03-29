`include "defines.v"

module ysyx_22051145_exestage(
    input [63:0] pc,

    input [63:0] rs1,
    input [63:0] rs2,
    input [63:0] dec_imm,

    input rd_en; //写使能
    output reg [`REG_BUS]rd_data
    output jump_flag, //跳跃标志
    output [63:0] jump_addr, //跳跃地址
    output [63:0] wbck_dest_dat
);

    wire zero_flag; 
    wire [63:0] alu_op1;
    wire [63:0] alu_op2;
    wire alu_flag;
    wire bjp_flag;
    wire [63:0] alu_wbck_dat; // alu进行计算后的数据
    wire [63:0] bjp_wbck_dat; //beq jar等 的数据


    integer i;
    always @(dec_info_bus)
        for(i = 0; i < DECINFO_ALU_BUS_WIDTH - DECINFO_GRP_WIDTH; i++)
            begin
                if(dec_info_bus[DECINFO_GRP_WIDTH + i] == 1) mode = i;
            end


    assign wbck_dest_dat = ({64{alu_flag}} & alu_wbck_dat) | ({64{bjp_flag}} & bjp_wbck_dat);
endmodule