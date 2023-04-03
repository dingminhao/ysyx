`include "defines.v"

module ysyx_22051145_exestage(
    input [63:0] pc,
    input [63:0] rs1,
    input [63:0] rs2,
    input [63:0] dec_imm,
    input [`DECINFO_WIDTH-1:0] dec_info_bus,

    input access_rs2, // rs2使能 判断 是 rs2 还是 立即数
    
    output jump_flag, //跳跃标志
    output [63:0] jump_addr, //跳跃地址
    output [63:0] wbck_dest_dat
);

    wire [63:0] alu_op1;
    wire [63:0] alu_op2;

    reg [63:0] alu_wbck_dat;
    reg [63:0] bjp_wbck_dat;
    wire alu_flag;
    wire bjp_flag;

    assign alu_flag = dec_info_bus[`DECINFO_GRP_BUS] == `DECINFO_GRP_ALU;
    assign bjp_flag = dec_info_bus[`DECINFO_GRP_BUS] == `DECINFO_GRP_BJP;


    assign alu_op1 = rs1;     //可能是rs1  或者  pc     
    assign alu_op2 = (access_rs2 == 0) ? dec_imm : rs2; //判断条件有误 思考一下
    



    ysyx_22051145_alu ex_alu(
        .op1(alu_op1),
        .op2(alu_op2),
        .pc(pc),
        .dec_info_bus(dec_info_bus),
        .result(alu_wbck_dat)
    );

    ysyx_22051145_bjp ex_bjp(
        .pc(pc),
        .dec_info_bus,
        .rs1(rs1),
        .dec_imm(dec_imm),
        .rd(bjp_wbck_dat),
        .jump_flag(jump_flag),
        .jump_addr(jump_addr)
    );

    assign wbck_dest_dat = ({64{alu_flag}} & alu_wbck_dat) | ({64{bjp_flag}} & bjp_wbck_dat);




    wire e_break ;
    assign e_break = (dec_info_bus[`DECINFO_GRP_BUS] == `DECINFO_GRP_SYS) && (dec_info_bus[`DECINFO_SYS_EBREAK] == 1'b1);
    always @(*) begin
    if (e_break) begin
      $finish;
    end
    end

endmodule