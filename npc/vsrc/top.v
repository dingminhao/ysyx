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

    .pc_out(inst_addr)
);
/*************************** 取指阶段 *************************************/
wire [`XLEN_BUS] inst_addr_if;
wire [`INST_LEN-1:0] inst_data_if;
fetch u_fetch(
    .rst(rst),
    .inst_addr(inst_addr_if),
    .inst_data(inst_data_if)
);


/*************************** if/id 流水线缓存 *************************************/
wire [`INST_LEN-1:0] inst_data_if_id;
wire [`XLEN_BUS] inst_addr_if_id;
if_id u_if_id(
    .clk(clk),
    .rst(rst),

    .i_inst_addr(inst_addr),
    .o_inst_addr(inst_addr_if_id)

    .i_inst_data

)










endmodule