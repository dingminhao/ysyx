`include "sysconfig.v"


/* 需要设为为input熟悉才能才仿真中改变值 */
module ysyx_top (
    input clk,
    input rst
);
/*×××××××××××××××××××××××××× PC 模块 用于选择下一跳指令地址 ×××××××××××××××××××××××*/
wire [`XLEN_BUS] inst_addr;
pc u_pc (
    .clk(clk),
    .rst(rst),
    // ID
    .pc_op(),
    // regfile
    .rs1_data(),
    .imm_data(),
    .execute_data(),

    // trap pc
    .clint_pc_i(),
    .clint_pc_valid_i(),

    .pc_out()
);
/*************************** 取指阶段 *************************************/






endmodule