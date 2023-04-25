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
wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id;

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

    .i_rs1_data(rs1_data_gpr),    // TODO from gpr
    .i_rs2_data(rs2_data_gpr),    // TODO from gpr
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
    .csr_idx(csr_idx_id),
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
wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_id_ex;
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
    .i_csr_addr(csr_idx_id),
    
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
    .o_csr_addr(csr_idx_id_ex),
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
    .o_trap_bus(trap_bus_id_ex),
);

/*************************** EX 执行模块 *************************************/
// think : pc  inst_data rd_idx rs1_data rs2_data imm_data mem_op 
wire [`XLEN_BUS]exc_alu_out_ex; // ex alu的计算结果
wire [`XLEN_BUS]exc_csr_out_ex; // ex csr的计算结果
wire exc_csr_valid_ex; // csr有效信号 是否发生set clear write
wire [`CSR_REG_ADDRWIDTH-1:0] exc_csr_addr_ex = csr_idx_id_ex; // csr地址
wire [`INST_LEN-1:0] inst_data_ex;
wire [`XLEN_BUS] inst_addr_ex;
wire [`REG_ADDRWIDTH-1:0] rd_idx_ex;
wire [`XLEN_BUS] rs1_data_ex;
wire [`XLEN_BUS] rs2_data_ex;
wire [`XLEN_BUS] imm_data_ex;
wire [`MEMOP_LEN-1:0] mem_op_ex;
wire [`TRAP_LEN-1:0] trap_bus_ex;
execute u_execute(
    // input pc
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
    .i_trap(trap_bus_id_ex),

    // output 
    .exc_alu_out(exc_alu_out_ex),
    .exc_csr_out(exc_csr_out_ex),
    .exc_csr_valid(exc_csr_valid_ex),

    // 过渡参量
    .o_pc(inst_addr_ex),
    .o_inst_data(inst_data_ex),
    .o_rd_idx(rd_idx_ex),
    .o_rs1_data(rs1_data_ex),
    .o_rs2_data(rs2_data_ex),
    .o_imm_data(imm_data_ex),
    .o_memop(mem_op_ex),
    .o_trap(trap_bus_ex)
);

  /**********************  ex/mem 流水线间缓存 **************************/
// think : 
wire [`XLEN_BUS] inst_addr_ex_mem;
wire [`INST_LEN-1:0] inst_data_ex_mem;
wire [`REG_ADDRWIDTH-1:0] rd_idx_ex_mem;
wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_ex_mem;
wire [`XLEN_BUS] rs1_data_ex_mem;
wire [`XLEN_BUS] rs2_data_ex_mem;
wire [`XLEN_BUS] imm_data_ex_mem;
wire [`MEMOP_LEN-1:0] mem_op_ex_mem;
wire [`XLEN_BUS] exc_alu_out_ex_mem;
wire [`XLEN_BUS] exc_csr_out_ex_mem;
wire exc_csr_valid_ex_mem;
wire [`XLEN_BUS]trap_bus_ex_mem;
ex_mem u_ex_mem(
    .clk(clk),
    .rst(rst),

    .i_pc(inst_addr_ex),
    .o_pc(inst_addr_ex_mem),

    .i_inst_data(inst_data_ex),
    .o_inst_data(inst_data_ex_mem),

    .i_rd_idx(rd_idx_ex),
    .o_rd_idx(rd_idx_ex_mem),

    .i_csr_addr(csr_idx_ex),
    .o_csr_addr(csr_idx_ex_mem),

    .i_rs1_data(rs1_data_ex),
    .o_rs1_data(rs1_data_ex_mem),

    .i_rs2_data(rs2_data_ex),
    .o_rs2_data(rs2_data_ex_mem),

    .i_imm_data(imm_data_ex),
    .o_imm_data(imm_data_ex_mem),

    .i_memop(mem_op_ex),
    .o_memop(mem_op_ex_mem),

    .i_exc_alu_out(exc_alu_out_ex),
    .o_exc_alu_out(exc_alu_out_ex_mem),

    .i_exc_csr_out(exc_csr_out_ex),
    .o_exc_csr_out(exc_csr_out_ex_mem),

    .i_exc_csr_valid(exc_csr_valid_ex),
    .o_exc_csr_valid(exc_csr_valid_ex_mem),

    .i_trap(trap_bus_ex),
    .o_trap(trap_bus_ex_mem)

);

 /**********************  访存阶段   MEM **************************/
// think :
wire [`XLEN_BUS] inst_addr_mem;
wire [`INST_LEN-1:0] inst_data_mem;
wire [`XLEN_BUS] mem_out_mem;
wire isloadEnable_mem;
wire [`XLEN_BUS] exc_alu_out_mem;
wire [`XLEN_BUS] trap_bus_mem = trap_bus_ex_mem;
wire [`REG_ADDRWIDTH-1:0] rd_idx_mem;
wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_mem = csr_idx_ex_mem;

wire  exc_csr_valid_mem = exc_csr_valid_ex_mem;
wire [`XLEN_BUS] exc_csr_out_mem = exc_csr_out_ex_mem;
memory u_memory(
    .clk(clk),
    .rst(rst),
    .i_pc(inst_addr_ex_mem),
    .i_inst_data(inst_data_ex_mem),

    .rd_idx(rd_idx_ex_mem),
    .rs1_data(rs1_data_ex_mem),
    .rs2_data(rs2_data_ex_mem),
    .imm_data(imm_data_ex_mem),
    .mem_op(mem_op_ex_mem),
    .exc_in(exc_alu_out_ex_mem),

    .o_exc_in(exc_alu_out_mem)
    .o_pc(inst_addr_mem),
    .o_inst_data(inst_data_mem),

    .mem_out(mem_out_mem),
    .isloadEnable(isloadEnable_mem)
    .o_rd_idx(rd_idx_mem),
);

wire [`XLEN_BUS] csr_mstatus_writedata;
wire [`XLEN_BUS] csr_mepc_writedata;
wire [`XLEN_BUS] csr_mcause_writedata;
wire [`XLEN_BUS] csr_mtval_writedata;
wire [`XLEN_BUS] csr_mtvec_writedata;
wire csr_mstatus_write_valid;
wire csr_mepc_write_valid;
wire csr_mcause_write_valid;
wire csr_mtval_write_valid;
wire csr_mtvec_write_valid;
wire [`XLEN-1:0] clint_pc;
wire clint_pc_valid;
clint u_clint(
    .pc_i(inst_addr_mem),
    .inst_data_i(inst_data_mem),
    .trap_bus_i(trap_bus_mem),

    .csr_mstatus_clint_i(csr_mstatus_readdata_csr),
    .csr_mepc_clint_i(csr_mepc_readdata_csr),
    .csr_mcause_clint_i(csr_mcause_readdata_csr),
    .csr_mtval_clint_i(csr_mtval_readdata_csr),
    .csr_mtvec_clint_i(csr_mtvec_readdata_csr),

    .csr_mstatus_clint_o(csr_mstatus_writedata),
    .csr_mepc_clint_o(csr_mepc_writedata),
    .csr_mcause_clint_o(csr_mcause_writedata),
    .csr_mtval_clint_o(csr_mtval_writedata),
    .csr_mtvec_clint_o(csr_mtvec_writedata),

    .csr_mstatus_clint_o_valid(csr_mstatus_write_valid),
    .csr_mepc_clint_o_valid(csr_mepc_write_valid),
    .csr_mcause_clint_o_valid(csr_mcause_write_valid),
    .csr_mtval_clint_o_valid(csr_mtval_write_valid),
    .csr_mtvec_clint_o_valid(csr_mtvec_write_valid),

    .clint_pc_o(clint_pc),
    .clint_pc_valid_o(clint_pc_valid)
)


/**********************  mem/wb 阶段 **************************/

wire [`XLEN_BUS] inst_addr_mem_wb;
wire [`INST_LEN-1:0] inst_data_mem_wb;
wire [`XLEN_BUS] mem_out_mem_wb;
wire isloadEnable_mem_wb;
wire [`XLEN_BUS] exc_alu_out_mem_wb;
wire [`REG_ADDRWIDTH-1:0] rd_idx_mem_wb;
wire [`CSR_REG_ADDRWIDTH-1:0] csr_idx_mem_wb = csr_idx_mem;
mem_wb u_mem_wb(
    .clk(clk),
    .rst(rst),

    .i_inst_addr(inst_addr_mem),
    .o_inst_addr(inst_addr_mem_wb),

    .i_csr_addr(csr_idx_mem),
    .o_csr_addr(csr_idx_mem_wb),

    .i_inst_data(inst_data_mem),
    .o_inst_data(inst_data_mem_wb),

    .i_exc_data(exc_alu_out_mem),
    .o_exc_data(exc_alu_out_mem_wb),

    .i_mem_data(mem_out_mem),
    .o_mem_data(mem_out_mem_wb),

    i_isloadEnable(isloadEnable_mem),
    o_isloadEnable(isloadEnable_mem_wb),

    .i_rd_idx(rd_idx_mem),
    .o_rd_idx(rd_idx_mem_wb)
)

/**********************  wb 阶段 **************************/

wire [`XLEN_BUS] wb_data;
wire [`REG_ADDRWIDTH-1:0] rd_idx_wb = rd_idx_mem_wb;
writeback u_writeback(
    .exc_data_in(exc_alu_out_mem_wb),
    .mem_data_in(mem_out_mem_wb),
    .isloadEnable_in(isloadEnable_mem_wb),

    .wb_data(wb_data)
);

/******************** gpr 寄存器组、csr 寄存器组 ************************/

wire [`XLEN-1:0] csr_mstatus_readdata_csr;
wire [`XLEN-1:0] csr_mepc_readdata_csr;
wire [`XLEN-1:0] csr_mcause_readdata_csr;
wire [`XLEN-1:0] csr_mtval_readdata_csr;
wire [`XLEN-1:0] csr_mtvec_readdata_csr;

rv64_csr_regfile u_rv64_csr_regfile(
    .clk(clk),
    .rst(rst),
    .csr_mstatus_i(),
    .csr_mepc_i(),
    .csr_mcause_i(),
    .csr_mtval_i(),
    .csr_mtvec_i(),
    .csr_mstatus_i_en(),
    .csr_mepc_i_en(),
    .csr_mcause_i_en(),
    .csr_mtval_i_en(),
    .csr_mtvec_i_en(),

    .csr_mstatus_o(csr_mstatus_readdata_csr),
    .csr_mepc_o(csr_mepc_readdata_csr),
    .csr_mcause_o(csr_mcause_readdata_csr),
    .csr_mtval_o(csr_mtval_readdata_csr),
    .csr_mtvec_o(csr_mtvec_readdata_csr),

    .csr_readaddr(csr_idx_id),
    .csr_readdata(csr_data_id),
    .csr_writeaddr(),
    .write_enable(),
    .csr_writedata()
);


wire [`XLEN_BUS] rs1_data_gpr;
wire [`XLEN_BUS] rs2_data_gpr;
rv64reg u_rv64reg(
    .clk(clk),
    .rs1_idx(rs1_idx_id),
    .rs2_idx(rs2_idx_id),
    
    .write_idx(rd_idx_wb),
    .write_data(wb_data),
    .wen(1)

    // output
    .rs1_data(rs1_data_gpr),
    .rs2_data(rs2_data_gpr),
);

endmodule