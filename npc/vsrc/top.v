`include "sysconfig.v"

// 命名 规则，输入/输出 +  数据名称 + 阶段
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
    // 指令地址，PC的位置
    .i_inst_addr(inst_addr),
    .o_inst_addr(inst_addr_if_id)
    // 指令数据
    .i_inst_data(inst_data_if),
    .o_inst_data(inst_data_if_id)
);

/*************************** ID译码模块 *************************************/
// 实际上这里的 rs1 data rs2 data 不需要在 ID中过一遍，但是这里做个中间变量，有利于理解代码

// output from regfile csrfile
wire [`XLEN_BUS] rs1_data_id;  // TODO
wire [`XLEN_BUS] rs2_data_id;  // TODO
wire [`XLEN_BUS] csr_data_id;  // TODO
wire [`XLEN_BUS] inst_addr_id;  // TODO

// output 译码索引
wire [`REG_ADDRWIDTH-1:0] rs1_idx_id;
wire [`REG_ADDRWIDTH-1:0] rs2_idx_id;
wire [`REG_ADDRWIDTH-1:0] rd_idx_id;
wire [`CSR_REG_ADDRWIDTH-1:0] rd_idx_id;

//output 立即数 
wire [`XLEN_BUS] imm_data_id;
wire [`XLEN_BUS] immCSR_id;
wire isNeedimmCSR_id;

// output 译码操作码
wire [`ALU_OP_WIDTH-1:0] alu_op_id;
wire [`MEM_OP_WIDTH-1:0] mem_op_id;
wire [`EXC_OP_WIDTH-1:0] exc_op_id;
wire [`PC_OP_WIDTH-1:0] pc_op_id;
wire [`CSR_OP_WIDTH-1:0] csr_op_id;
wire [`TRAP_BUS_WIDTH-1:0] trap_bus_id;

// 过渡信号
wire [             `XLEN_BUS]  inst_addr_id;
wire [         `INST_LEN-1:0 ] inst_data_id;

decode u_id(
    // input 指令地址 from if/id 与 指令数据
    .inst_addr(inst_addr_if_id),
    .inst_data(inst_data_if_id),
    // input 通用寄存器数据 from regfile

    .i_rs1_data(),    // TODO from gpr
    .i_rs2_data(),    // TODO from gpr
    // input csr寄存器数据 from csr
    .i_csr_data(),    // TODO from gpr

    // output execute需要的数据
    .o_inst_addr(inst_addr_id),
    .o_rs1_data(rs1_data_id),
    .o_rs2_data(rs2_data_id),
    .o_csr_data(csr_data_id),

    //output 译码得到的索引
    .rs1_idx(rs1_idx_id),
    .rs2_idx(rs2_idx_id),
    .rd_idx(rd_idx_id),
    .csr_idx(rd_idx_id),
    // output 译码得到的立即数
    .imm_data(imm_data_id),
    .immCSR(immCSR_id),
    .isNeedimmCSR(isNeedimmCSR_id),

    // output 译码得到的操作码
    .alu_op(alu_op_id),
    .mem_op(mem_op_id),
    .exc_op(exc_op_id),
    .pc_op(pc_op_id),
    .csr_op(csr_op_id),
    // output 自陷指令的操作码
    .trap_bus_o(trap_bus_id),
    //过渡信号
    .o_inst_data(inst_data_id)
    .o_inst_addr(inst_addr_id)
);

  /*************************** id/ex 流水线缓存 *************************************/
wire [`XLEN_BUS] inst_addr_id_ex;
wire [`INST_LEN-1:0] inst_data_id_ex;
wire [`REG_ADDRWIDTH-1:0] rd_idx_id_ex;
wire [`XLEN_BUS] rs1_data_id_ex;
wire [`XLEN_BUS] rs2_data_id_ex;
wire [`XLEN_BUS] csr_data_id_ex;
wire [`XLEN_BUS] imm_data_id_ex;
wire [`XLEN_BUS] immCSR_id_ex;
wire isNeedimmCSR_id_ex;
wire [`ALU_OP_WIDTH-1:0] alu_op_id_ex;
wire [`MEM_OP_WIDTH-1:0] mem_op_id_ex;
wire [`EXC_OP_WIDTH-1:0] exc_op_id_ex;
wire [`PC_OP_WIDTH-1:0] pc_op_id_ex;
wire [`CSR_OP_WIDTH-1:0] csr_op_id_ex;
wire [`TRAP_BUS_WIDTH-1:0] trap_bus_id_ex;
id_ex u_id_ex(
    .clk(clk),
    .rst(rst),
    // input  PC
    .i_pc(inst_addr_id),
    .i_inst_data(inst_data_id),

    // input 索引译码结果
    .i_rd_idx(rd_idx_id),
    //input gpr值 csr值 
    .i_rs1_data(rs1_data_id),
    .i_rs2_data(rs2_data_id),
    .i_csr_data(csr_data_id),
    // input 立即数相关
    .i_imm_data(imm_data_id),
    .i_imm_CSR(immCSR_id),
    .i_isNeedimmCSR(isNeedimmCSR_id),
    // input 译码得到的操作码
    .i_alu_op(alu_op_id),
    .i_mem_op(mem_op_id),
    .i_exc_op(exc_op_id),
    .i_pc_op(pc_op_id),
    .i_csr_op(csr_op_id),
    .i_trap_bus(trap_bus_id),

    // output PC
    .o_pc(inst_addr_id_ex),
    .o_inst_data(inst_data_id_ex),
    // output 索引译码结果
    .o_rd_idx(rd_idx_id_ex),
    // output gpr值 csr值
    .o_rs1_data(rs1_data_id_ex),
    .o_rs2_data(rs2_data_id_ex),
    .o_csr_data(csr_data_id_ex),
    // output 立即数相关 
    .o_imm_data(imm_data_id_ex),
    .o_imm_CSR(immCSR_id_ex),
    .o_isNeedimmCSR(isNeedimmCSR_id_ex),
    // output 译码得到的操作码
    .o_alu_op(alu_op_id_ex),
    .o_mem_op(mem_op_id_ex),
    .o_exc_op(exc_op_id_ex),
    .o_pc_op(pc_op_id_ex),
    .o_csr_op(csr_op_id_ex),
    .o_trap_bus(trap_bus_id_ex)
);

/*************************** EX 执行模块 *************************************/
// think : pc  inst_data rd_idx rs1_data rs2_data imm_data mem_op 


execute u_execute(
    // input
    .pc(inst_addr_id_ex),
    .inst_data(inst_data_id_ex),
    .rd_idx(rd_idx_id_ex),
    .rs1_data(rs1_data_id_ex),
    .rs2_data(rs2_data_id_ex),
    .imm_data(imm_data_id_ex),

    .csr_data(csr_data_id_ex),
    .immCSR(immCSR_id_ex),
    .isNeedimmCSR(isNeedimmCSR_id_ex),

    .alu_op(alu_op_id_ex),
    .mem_op(mem_op_id_ex),
    .exc_op(exc_op_id_ex),
    .pc_op(pc_op_id_ex),
    .csr_op(csr_op_id_ex),

    // output 
    .exc_alu_out(),
    .exc_csr_out(),
    .exc_csr_valid(),

    // 过渡参量
    .o_pc(),
    .o_inst_data(),
    .o_rd_idx(),
    .o_rs1_data(),
    .o_rs2_data(),
    .o_imm_data(),
    .o_memop()
)











endmodule