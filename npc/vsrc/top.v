`include "sysconfig.v"
module ysyx_22051145_top (
    input clk,
    input rst
);

wire [`XLEN_BUS] pc_now; // 正在执行的PC值
wire [`XLEN_BUS] pc_next; // 下一条执行的PC值 
wire read_req; // 是否读取指令 只要不是复位命令，读请求就有效

// 计算出下一次的PC值
pc_reg ysyx_22051145_pc_reg(
    .clk                (clk),
    .rst                (rst),
    // 流水控制
    .stall_valid_i      (stall_clint),
    .flush_valid_i      (flush_clint),
    // 分支指令 包括 jalr jal beq bne blt bge bltu bgeu
    .branch_pc_i        (), // 分支指令 来自exc阶段
    .branch_pc_valid_i  (),
    // ecall ebreak mret
    .clint_pc_i         (), // trap指令 来自mem阶段
    .clint_pc_valid_i   (),
    
    .read_req_o         (read_req), //向icache发送读请求
    .if_rdata_valid_i   (), // icache数据准备好了s

    // PC值
    .pc_next_o          (pc_next),
    .pc_o               (pc_now)
);


wire [`XLEN_BUS] inst_addr_if; // 指令地址
wire [`INST_LEN-1 : 0] inst_data_if; // 指令数据
wire [`TRAP_BUS] trap_bus_if; // trap指令

wire ram_stall_valid_if;

fetch  ysyx_22051145_fetch(
    .rst(rst),
    // 当前执行指令
    .pc_now_i(pc_now),

    .if_rdata_valid_i(),  //数据准备好了 来自于icache中
    .if_rdata_i(),

    .ram_stall_valid_if_o(ram_stall_valid_if), //icache数据没有准备好，则指令暂停
    
    // 传给下一级流水
    .inst_addr_o(inst_addr_if),
    .inst_data_o(inst_data_if),
    .trap_bus_o(trap_bus_if)
);

wire [`XLEN_BUS] inst_addr_if_id; // 指令地址
wire [`INST_LEN-1 : 0] inst_data_if_id; // 指令数据
wire [`TRAP_BUS] trap_bus_if_id; // trap指令

if_id ysyx_22051145_if_id(
    .clk(clk),
    .input(rst),
    // 流水控制
    .stall_valid_i(stall_clint),
    .flush_valid_i(flush_clint),

    // input IF to next
    .inst_addr_if_id_i(inst_addr_if),
    .inst_data_if_id_i(inst_data_if),
    .trap_bus_if_id_i(trap_bus_if),

    // output IF to next
    .inst_addr_if_id_o(inst_addr_if_id),
    .inst_data_if_id_o(inst_data_if_id),
    .trap_bus_if_id_o(trap_bus_if_id)
);


// 译码结果 索引
wire [`REG_ADDRWIDTH-1 : 0] rs1_idx_id;
wire [`REG_ADDRWIDTH-1 : 0] rs2_idx_id;
wire [`REG_ADDRWIDTH-1 : 0] rd_idx_id;
wire [`CSR_REG_ADDRWIDTH-1 : 0] csr_idx_id;

// rs1_data rs2_data csr_data
wire [`XLEN_BUS] rs1_data_id;
wire [`XLEN_BUS] rs2_data_id;
wire [`XLEN_BUS] csr_data_id;

// imm_data csr_imm
wire [`XLEN_BUS] csr_imm_id;
wire csr_imm_valid_id;
wire [`XLEN_BUS] imm_data_id;

// 计算操作符
wire [`ALU_OP_WIDTH-1 : 0] alu_op_id;
wire [`MEM_OP_WIDTH-1 : 0] mem_op_id;
wire [`CSR_OP_WIDTH-1 : 0] csr_op_id;
wire [`EXCOP_LEN-1 : 0] exc_op_id;
wire [`PC_OP_LEN-1 : 0] pc_op_id;

// PC and 指令
wire [`XLEN_BUS] pc_id;
wire [`INST_LEN-1 : 0] inst_id;

// 发生load use
wire load_use_id;

// 异常命令过渡
wire [`TRAP_BUS] trap_bus_id;

decode ysyx_22051145_decode(
    // 来自于if_id缓存器
    .inst_addr_i(inst_addr_if_id),
    .inst_data_i(inst_data_if_id),
    .trap_bus_i(trap_bus_if_id),

    // 来自于gpr_file
    .rs1_data_i(),
    .rs2_data_i(),

    // 来自于csr_file
    .csr_data_i(),

    // 来自于ID/EX阶段，用于判断上一条指令是否是访存指令 解决 load-use hazard
    .id_ex_exc_op_i(),

    // EX bypass 是否rd等于rs1或者rs2，如果等于利用rd_data进行bypass
    .ex_rd_data_i(),
    .ex_rd_addr_i(),
    // MEM bypass 
    mem_rd_data_i(),
    mem_rd_addr_i(),

    // 译码结果
    // rs1 rs2 rd 索引
    .rs1_idx_o(rs1_idx_id),
    .rs2_idx_o(rs2_idx_id),
    .rd_idx_o(rd_idx_id),
    .csr_idx_o(csr_idx_id),

    // 数据传递用来bypass
    .rs1_data_o(rs1_data_id),
    .rs2_data_o(rs2_data_id),
    .csr_data_o(csr_data_id),

    // imm
    .csr_imm_o(csr_imm_id),
    .csr_imm_valid_o(csr_imm_valid_id), //用来区分csr指令是否使用imm
    .imm_data_o(imm_data_id),

    // 计算操作符
    .alu_op_o(alu_op_id),
    .mem_op_o(mem_op_id),
    .exc_op_o(exc_op_id),
    .pc_op_o(pc_op_id),
    .csr_op_o(csr_op_id),

    .inst_addr_o(pc_id),
    .inst_data_o(inst_id),

    .load_use_valid_o(load_use_id),
    .trap_bus_o(trap_bus_id)
);

//PC inst相关
wire [`XLEN_BUS] pc_id_ex;
wire [`INST_LEN-1 : 0] inst_id_ex;
// 索引相关
wire [`REG_ADDRWIDTH-1 : 0] rs1_idx_id_ex;
wire [`REG_ADDRWIDTH-1 : 0] rs2_idx_id_ex;
wire [`REG_ADDRWIDTH-1 : 0] rd_idx_id_ex;
wire [`CSR_REG_ADDRWIDTH-1 : 0] csr_idx_id_ex;

// 立即数相关
wire [`XLEN_BUS] imm_data_id_ex;
wire [`XLEN_BUS] csr_imm_id_ex;
wire csr_imm_valid_id_ex;

// rs1 rs2数据相关
wire [`XLEN_BUS] rs1_data_id_ex;
wire [`XLEN_BUS] rs2_data_id_ex;
wire [`XLEN_BUS] csr_data_id_ex;

// 操作符相关
wire [`ALU_OP_WIDTH-1 : 0] alu_op_id_ex;
wire [`MEM_OP_WIDTH-1 : 0] mem_op_id_ex;
wire [`CSR_OP_WIDTH-1 : 0] csr_op_id_ex;
wire [`EXCOP_LEN-1 : 0] exc_op_id_ex;
wire [`PC_OP_LEN-1 : 0] pc_op_id_ex;
wire [`TRAP_BUS] trap_bus_id_ex;
id_ex ysyx_22051145_id_ex(
    .clk(clk),
    .rst(rst),
    // 流水控制
    .flush_valid_i(flush_clint),
    .stall_valid_i(stall_clint),
    // 输入 PC与指令
    .pc_id_ex_i(pc_id),
    .inst_addr_id_ex_i(inst_id),
    // rs1 rs2 rd 索引
    .rs1_idx_id_ex_i(rs1_data_id),
    .rs2_idx_id_ex_i(rs2_idx_id),
    .rd_idx_id_ex_i(rd_idx_id),
    .csr_idx_id_ex_i(csr_idx_id),
    // 立即数
    .imm_data_id_ex_i(imm_data_id),
    .csr_imm_id_ex_i(csr_imm_id),
    .csr_imm_valid_id_ex_i(csr_imm_valid_id),
    //操作符
    .alu_op_id_ex_i(alu_op_id),
    .mem_op_id_ex_i(mem_op_id),
    .exc_op_id_ex_i(exc_op_id),
    .pc_op_id_ex_i(pc_op_id),
    .csr_op_id_ex_i(csr_op_id),
    .trap_bus_id_ex_i(trap_bus_id),

    // 输出 PC与指令
    .pc_id_ex_o(pc_id_ex),
    .inst_addr_id_ex_o(inst_id_ex),
    // rs1 rs2 rd 索引
    .rs1_idx_id_ex_o(rs1_idx_id_ex),
    .rs2_idx_id_ex_o(rs2_idx_id_ex),
    ,rd_idx_id_ex_o(rd_idx_id_ex),
    .csr_idx_id_ex_o(csr_idx_id_ex),
    // 立即数
    .imm_data_id_ex_o(imm_data_id_ex),
    .csr_imm_id_ex_o(csr_imm_id_ex),
    .csr_imm_valid_id_ex_o(csr_imm_valid_id_ex),
    // 数据
    .rs1_data_id_ex_o(rs1_data_id_ex),
    .rs2_data_id_ex_o(rs2_data_id_ex),
    .csr_data_id_ex_o(csr_data_id_ex),
    // 操作符
    .alu_op_id_ex_o(alu_op_id_ex),
    .mem_op_id_ex_o(mem_op_id_ex),
    .exc_op_id_ex_o(exc_op_id_ex),
    .pc_op_id_ex_o(pc_op_id_ex),
    .csr_op_id_ex_o(csr_op_id_ex),
    .trap_bus_id_ex_o(trap_bus_id_ex)
);



wire [`XLEN_BUS] pc_ex;
wire [`INST_LEN-1 : 0] inst_data_ex;

wire [`REG_ADDRWIDTH-1 : 0] rd_idx_ex;
wire [`XLEN_BUS] rs1_data_ex;
wire [`XLEN_BUS] rs2_data_ex;
wire [`XLEN_BUS] imm_data_ex;
// csr相关参数

wire [`XLEN_BUS] csr_data_ex;
wire[`XLEN_BUS] csr_imm_ex;
wire csr_imm_valid_ex;

// 操作符相关
wire [`MEM_OP_WIDTH-1 : 0] mem_op_ex;
wire [`PC_OP_LEN-1 : 0] pc_op_ex;

// 送到ID
wire [`CSR_REG_ADDRWIDTH-1 : 0] exc_csr_idx_ex;
wire [`XLEN_BUS] exc_alu_data_ex;
wire [`XLEN_BUS] exc_csr_data_ex;
wire exc_csr_valid_ex;
wire [`PC_OP_LEN-1 : 0]exc_op_ex;

wire [`XLEN_BUS] branch_pc_ex;
wire branch_pc_valid;

wire jump_hazard_valid_ex;
wire [`TRAP_BUS]trap_bus_ex;


execute_top ysyx_22051145_execute(
    // pc
    .pc_i(pc_id_ex),
    .inst_data_i(inst_id_ex),

    // GPR的相关参数
    .rd_idx_i(rd_idx_id_ex),
    .rs1_data_i(rs1_idx_id_ex),
    .rs2_data_i(rs2_idx_id_ex),
    .imm_data_i(imm_data_id_ex),

    // csr的相关参数
    .csr_readaddr_i(csr_idx_id_ex),
    .csr_data_i(csr_data_id_ex),
    .csr_imm_i(csr_imm_id_ex),
    .csr_imm_valid_i(csr_imm_valid_id_ex),

    // 操作符
    .alu_op_i(alu_op_id_ex),
    .mem_op_i(mem_op_id_ex),
    .exc_op_i(exc_op_id_ex),
    .csr_op_i(csr_op_id_ex),
    .pc_op_i(pc_op_id_ex),
    .trap_bus_i(trap_bus_id_ex),

    // 输出 PC
    .pc_o(pc_ex),
    .inst_data_o(inst_data_ex),
    // 索引传给 gpr
    .rd_idx_o(rd_idx_ex),

    .rs1_data_o(rs1_data_ex),
    .rs2_data_o(rs2_data_ex),
    .imm_data_o(imm_data_ex),

    // csr的相关参数
    .csr_data_o(csr_data_ex),
    .csr_imm_o(csr_imm_ex),
    .csr_imm_valid_o(csr_imm_valid_ex),
    
    .mem_op_o(mem_op_ex),
    .pc_op_o(pc_op_ex),

    // 将exe的数据送到ID 与 ex阶段EX/MEM
    .exc_csr_addr_o(exc_csr_idx_ex),
    .exc_alu_data_o(exc_alu_data_ex),
    .exc_csr_data_o(exc_csr_data_ex),
    .exc_csr_valid_o(exc_csr_valid_ex), //需要写回进csr
    // 传给ID用来做pc跳转
    .exc_op_o(exc_op_ex),

    .branch_pc_o(branch_pc_ex),
    .branch_pc_valid_o(branch_pc_valid),

    // 请求暂停流水线
    .jump_hazard_valid_o(jump_hazard_valid_ex),
    .trap_bus_o(trap_bus_ex)
);


wire [`XLEN_BUS] pc_ex_mem;
wire [`INST_LEN-1 : 0] inst_data_ex_mem;

wire [`XLEN_BUS] imm_data_ex_mem;
wire [`REG_ADDRWIDTH-1 : 0] rd_idx_ex_mem;
wire [`XLEN_BUS] rs1_data_ex_mem;
wire [`XLEN_BUS] rs2_data_ex_mem;

wire [`XLEN_BUS] alu_data_ex_mem;
wire [`XLEN_BUS] csr_data_ex_mem;
wire csr_valid_ex_mem;
wire [`CSR_REG_ADDRWIDTH-1 : 0]csr_idx_ex_mem;

wire [`PC_OP_LEN-1 : 0]pc_op_ex_mem;
wire [`MEM_OP_WIDTH-1 : 0]mem_op_ex_mem;
wire [`TRAP_BUS]trap_bus_ex_mem;
ex_mem ysyx_22051145_ex_mem(
    .clk(clk),
    .rst(rst),

    .flush_valid_i(flush_clint),
    .stall_valid_i(stall_clint),
    // PC与指令
    .pc_ex_mem_i(pc_ex),
    .inst_data_ex_mem_i(inst_data_ex),

    .imm_data_ex_mem_i(imm_data),
    .rd_idx_ex_mem_i(rd_idx_ex),
    .rs1_data_ex_mem_i(rs1_data),
    .rs2_data_ex_mem_i(rs2_data),
    .alu_data_ex_mem_i(exc_alu_data_ex),
    
    // csr 相关操作
    .csr_writedata_ex_mem_i(exc_csr_data_ex),
    .csr_writevalid_ex_mem_i(exc_csr_valid_ex),
    .csr_addr_ex_mem_i(exc_csr_idx_ex),
    // 操作符
    .pc_op_ex_mem_i(pc_op_ex),
    .mem_op_ex_mem_i(mem_op_ex),
    .trap_bus_ex_mem_i(trap_bus_ex),

    //输出 指令
    .pc_ex_mem_o(pc_ex_mem),
    .inst_data_ex_mem_o(inst_data_ex_mem),
    // 解析参数
    .imm_data_ex_mem_o(imm_data_ex_mem),
    .rd_idx_ex_mem_o(rd_idx_ex_mem),
    .rs1_data_ex_mem_o(rs1_data_ex_mem),
    .rs2_data_ex_mem_o(rs2_data_ex_mem),
    
    .alu_data_ex_mem_o(alu_data_ex_mem),

    // csr 相关操作
    .csr_writedata_ex_mem_o(csr_data_ex_mem),
    .csr_writevalid_ex_mem_o(csr_valid_ex_mem),
    .csr_addr_ex_mem_o(csr_idx_ex_mem),

    // 操作符
    .pc_op_ex_mem_o(pc_op_ex_mem),
    .mem_op_ex_mem_o(mem_op_ex_mem),
    .trap_bus_ex_mem_o(trap_bus_ex_mem)
);


wire                           mem_data_ready;  // 读/写 数据是否准备好
wire [             `XLEN_BUS]  mem_rdata;  // 返回到读取的数据

wire [`XLEN_BUS] pc_mem;
wire [`INST_LEN-1 : 0] inst_data_mem;

// 对Dcache进行操作
wire [`NPC_ADDR_BUS] mem_addr; // 内存地址
wire mem_addr_valid; // 内存地址有效
wire [7:0] mem_mask;  // 内存掩码
wire mem_write_valid;
wire [`XLEN_BUS] mem_wdata;

// 流水线暂停信号
wire ram_stall_valid_mem;

// gpr
wire [`REG_ADDRWIDTH-1:0] rd_idx_mem;
wire [`XLEN_BUS] mem_data_mem; //bypass to ID

//csr
wire [`CSR_REG_ADDRWIDTH-1:0]csr_idx_mem;
wire [`XLEN_BUS] exc_csr_data_mem;
wire exc_csr_valid_mem;

wire [`TRAP_LEN-1:0] trap_bus_mem;
memory ysyx_22051145_memory(
    .clk(clk),
    .rst(rst),
    // PC与指令
    .pc_i(pc_ex_mem),
    .inst_data_i(inst_data_ex_mem),
    
    .rd_idx_i(rd_idx_ex_mem),
    .rs2_data_i(rs2_data_ex_mem),

    // 操作
    .mem_op_i(mem_op_ex_mem), //用于访存的指令
    .exc_alu_data_i(alu_data_ex_mem), 
    .csr_addr_i(csr_idx_ex_mem),
    .exc_csr_data_i(csr_data_ex_mem),
    .exc_csr_valid_i(csr_valid_ex_mem),

    // dcache接口
    .mem_data_ready_i(mem_data_ready), // dcache 是否准备好数据
    .mem_rdata_i(mem_rdata), // dcache数据输入
    // 异常种类
    .trap_bus_i(trap_bus_ex_mem),

    // 输出 PC与指令
    .pc_o(pc_mem),
    .inst_data_o(inst_data_mem),

    // 用于访问dcache
    .mem_addr_o(mem_addr), //存储地址，用于访存
    .mem_addr_valid_o(mem_addr_valid),  // 是否访问 dcache
    .mem_mask_o(mem_mask), // 访存掩码
    .mem_write_valid_o(mem_write_valid), // 是否写入
    .mem_wdata_o(mem_wdata), // 写入数据

    .ram_stall_valid_mem_o(ram_stall_valid_mem), // 如果数据没有准备好，暂停流水线

    // 最终写回gpr中的数据 与 地址
    .rd_idx_o(rd_idx_mem),
    .mem_data_o(mem_data_mem),

    // csr 相关操作
    .csr_addr_o(csr_idx_mem),
    .exc_csr_data_o(exc_csr_data_mem),
    .exc_csr_valid_o(exc_csr_valid_mem),

    //异常
    .trap_bus_o(trap_bus_mem)
);

// 五个寄存器的控制管理
wire [`XLEN-1:0] csr_mstatus_writedata_clint;
wire [`XLEN-1:0] csr_mepc_writedata_clint;
wire [`XLEN-1:0] csr_mcause_writedata_clint;
wire [`XLEN-1:0] csr_mtval_writedata_clint;
wire [`XLEN-1:0] csr_mtvec_writedata_clint;
wire csr_mstatus_write_valid_clint;
wire csr_mepc_write_valid_clint;
wire csr_mcause_write_valid_clint;
wire csr_mtval_write_valid_clint;
wire csr_mtvec_write_valid_clint;

wire [`XLEN_BUS] cline_pc_clint;
wire clint_pc_valid_clint;

// 全局stall 与 flush管理
wire [5:0] stall_clint;
wire [5:0] flush_clint;
// 调节阻塞 并且 将异常信息记录 并计算出异常地址 mret 
clint ysyx_22051145_clint(
    .rst(rst),
    // 指令相关
    .pc_i(pc_mem),
    .inst_data_i(inst_data_mem), 
    // trap 异常处理
    .trap_bus_i(trap_bus_mem),
    // 访存暂停管理
    .ram_stall_valid_if_i(ram_stall_valid_if), // IF 阶段暂停
    .ram_stall_valid_mem_i(ram_stall_valid_mem), // MEM 阶段暂停
    .load_use_valid_id_i(load_use_id), // EX阶段发现load use hazard
    .jump_valid_ex_i(jump_hazard_valid_ex), // EX阶段发现跳转

    // csr寄存器相关 读数据 利用csr的读数据计算
    .csr_mstatus_readdata_i(),
    .csr_mepc_readdata_i(),
    .csr_mcause_readdata_i(),
    .csr_mtval_readdata_i(),
    .csr_mtvec_readdata_i(),

    // csr写数据相关
    .csr_mstatus_writedata_o(csr_mstatus_writedata),
    .csr_mepc_writedata_o(csr_mepc_writedata),
    .csr_mcause_writedata_o(csr_mcause_writedata),
    .csr_mtval_writedata_o(csr_mtval_writedata),
    .csr_mtvec_writedata_o(csr_mtvec_writedata),
    .csr_mstatus_write_valid_o(csr_mstatus_write_valid),
    .csr_mepc_write_valid_o(csr_mepc_write_valid),
    .csr_mcause_write_valid_o(csr_mcause_write_valid),
    .csr_mtval_write_valid_o(csr_mtval_write_valid),
    .csr_mtvec_write_valid_o(csr_mtvec_write_valid),

    // 中断地址传递给pc
    .clint_pc_o(cline_pc_clint),
    .clint_pc_valid_o(clint_pc_valid_clint),

    // 控制流水线
    .stall_o(stall_clint),
    .flush_o(flush_clint)
);

wire [`XLEN-1:0 ] csr_mstatus_writedata_mem_wb;
wire [`XLEN-1:0 ] csr_mepc_writedata_mem_wb;
wire [`XLEN-1:0 ] csr_mcause_writedata_mem_wb;
wire [`XLEN-1:0 ] csr_mtval_writedata_mem_wb;
wire [`XLEN-1:0 ] csr_mtvec_writedata_mem_wb;
wire csr_mstatus_write_valid_mem_wb;
wire csr_mepc_write_valid_mem_wb;
wire csr_mcause_write_valid_mem_wb;
wire csr_mtval_write_valid_mem_wb;
wire csr_mtvec_write_valid_mem_wb;
// PC and inst
wire [`XLEN-1:0 ] pc_mem_wb;  
wire [`INST_LEN-1:0 ] inst_data_mem_wb; 

wire [`CSR_REG_ADDRWIDTH-1:0 ] csr_addr_mem_wb;  //csr 写回地址
wire [             `XLEN_BUS]  exc_csr_data_mem_wb;  //csr 写回数据
wire                           exc_csr_valid_mem_wb;  // csr 写回使能
wire [    `REG_ADDRWIDTH-1:0 ] rd_addr_mem_wb;  // gpr 写回使能
wire [             `XLEN-1:0 ] mem_data_mem_wb;  //访存阶段的数据

mem_wb ysyx_22051145_mem_wb(
    .clk(clk),
    .rst(rst),
    // 流水控制
    .flush_valid_i(flush_clint),
    .stall_valid_i(stall_clint),

    // 指令相关
    .pc_mem_wb_i(pc_mem),
    .inst_data_mem_wb_i(inst_data_mem),

    // csr写数据相关
    .csr_mstatus_writedata_mem_wb_i(csr_mstatus_writedata_clint),
    .csr_mepc_writedata_mem_wb_i(csr_mepc_writedata_clint),
    .csr_mcause_writedata_mem_wb_i(csr_mcause_writedata_clint),
    .csr_mtval_writedata_mem_wb_i(csr_mtval_writedata_clint),
    .csr_mtvec_writedata_mem_wb_i(csr_mtvec_writedata_clint), 
    .csr_mstatus_write_valid_mem_wb_i(csr_mstatus_write_valid_clint),
    .csr_mepc_write_valid_mem_wb_i(csr_mepc_write_valid_clint),
    .csr_mcause_write_valid_mem_wb_i(csr_mcause_write_valid_clint),
    .csr_mtval_write_valid_mem_wb_i(csr_mtval_write_valid_clint),
    .csr_mtvec_write_valid_mem_wb_i(csr_mtvec_write_valid_clint),

    // 写回gpr csr 的数据
    .csr_addr_mem_wb_i(csr_idx_mem),
    .exc_csr_data_mem_wb_i(exc_csr_data_mem),
    .exc_csr_valid_mem_wb_i(exc_csr_valid_mem),
    .rd_addr_mem_wb_i(rd_addr_mem),
    .mem_data_mem_wb_i(mem_data_mem),

    // 输出
    .csr_mstatus_writedata_mem_wb_o(csr_mstatus_writedata_mem_wb),
    .csr_mepc_writedata_mem_wb_o(csr_mepc_writedata_mem_wb),
    .csr_mcause_writedata_mem_wb_o(csr_mcause_writedata_mem_wb),
    .csr_mtval_writedata_mem_wb_o(csr_mtval_writedata_mem_wb),
    .csr_mtvec_writedata_mem_wb_o(csr_mtvec_writedata_mem_wb),
    .csr_mstatus_write_valid_mem_wb_o(csr_mstatus_write_valid_mem_wb),
    .csr_mepc_write_valid_mem_wb_o(csr_mepc_write_valid_mem_wb),
    .csr_mcause_write_valid_mem_wb_o(csr_mcause_write_valid_mem_wb),
    .csr_mtval_write_valid_mem_wb_o(csr_mtval_write_valid_mem_wb),
    .csr_mtvec_write_valid_mem_wb_o(csr_mtvec_write_valid_mem_wb),

    // 指令与PC
    .pc_mem_wb_o(pc_mem_wb),
    .inst_data_mem_wb_o(inst_data_mem_wb),

    .csr_addr_mem_wb_o(csr_addr_mem_wb),
    .exc_csr_data_mem_wb_o(exc_csr_data_mem_wb),
    .exc_csr_valid_mem_wb_o(exc_csr_valid_mem_wb),

    .rd_addr_mem_wb_o(rd_addr_mem_wb),
    .mem_data_mem_wb_o(mem_data_mem_wb)

);





// 将PC与inst上传到仿真环境
writeback ysyx_22051145_wb(
    .clk(clk),
    .rst(rst),

    .pc_wb_i(pc_mem_wb),
    .inst_data_wb_i(inst_data_mem_wb)
)

// gpr寄存器
rv64_gpr_regfile ysyx_22051145_gpr(
    .clk(clk),
    .rst(rst),
    // 读数据
    .rs1_idx_i(rs1_idx_id),
    .rs2_idx_i(rs2_idx_id),
    // 读数据输出
    .rs1_data_o(rs1_data_id),
    .rs2_data_o(rs2_data_id),

    // 数据写入
    .write_idx_i(rd_addr_mem_wb),
    .write_data_i(mem_data_mem_wb),
    .write_valid_i(1'b1)
);



wire [`XLEN-1:0] csr_mstatus_readdata_csr;
wire [`XLEN-1:0] csr_mepc_readdata_csr;
wire [`XLEN-1:0] csr_mcause_readdata_csr;
wire [`XLEN-1:0] csr_mtval_readdata_csr;
wire [`XLEN-1:0] csr_mtvec_readdata_csr;

wire [`XLEN-1:0] csr_data_csr;


rv64_csr_regfile ysyx_22051145_rv64_csr_regfile(
    .clk(clk),
    .rst(rst),

    // 写数据
    .csr_mstatus_writedata_i(csr_mstatus_writedata_mem_wb),
    .csr_mepc_writedata_i(csr_mepc_writedata_mem_wb),
    .csr_mcause_writedata_i(csr_mcause_writedata_mem_wb),
    .csr_mtval_writedata_i(csr_mtval_writedata_mem_wb),
    .csr_mtvec_writedata_i(csr_mtvec_writedata_mem_wb),
    .csr_mstatus_write_valid_i(csr_mstatus_write_valid_mem_wb),
    .csr_mepc_write_valid_i(csr_mepc_write_valid_mem_wb),
    .csr_mcause_write_valid_i(csr_mcause_write_valid_mem_wb),
    .csr_mtval_write_valid_i(csr_mtval_write_valid_mem_wb),
    .csr_mtvec_write_valid_i(csr_mtvec_write_valid_mem_wb),

    // csr数据读出
    .csr_mstatus_readdata_o(csr_mstatus_readdata_csr),
    .csr_mepc_readdata_o(csr_mepc_readdata_csr),
    .csr_mcause_readdata_o(csr_mcause_readdata_csr),
    .csr_mtval_readdata_o(csr_mtval_readdata_csr),
    .csr_mtvec_readdata_o(csr_mtvec_readdata_csr),
    // 数据读出
    .csr_readaddr_i(csr_idx_id),
    .csr_readdata_o(csr_data_csr),
    
    .csr_writeaddr_i(csr_addr_mem_wb),
    .csr_write_valid_i(exc_csr_valid_mem_wb),       
    .csr_writedata_i(exc_csr_data_mem_wb)
);


// cache模块 

// Icache

wire [`XLEN_BUS] if_rdata_icache;
wire if_rdata_valid_icache;

wire [`NPC_ADDR_BUS] ram_raddr_icache;
wire ram_raddr_valid_icache;
wire [7:0] ram_rmask_icache;
icache_top ysyx_22051145_icache_top(
    .clk(clk),
    .rst(rst),

    // CPU 与 Icache 之间的接口
    .preif_raddr_i(pc_next[31:0]), // 将下一次的PC的指令取出
    .preif_rmask_i(8'b0000_1111),
    .preif_raddr_valid_i(read_req),
    // 取指返回的数据
    .if_rdata_o(if_rdata_icache),
    // 数据是否准备好
    .if_rdata_valid_o(if_rdata_valid_icache),

    // 由于cache中没有渠道数据，则在mem中进行取数据
    .ram_raddr_icache_o(ram_raddr_icache),
    .ram_raddr_valid_icache_o(ram_raddr_valid_icache),
    .ram_rmask_icache_o(ram_raddr_valid_icache),

    // mem 是否准备好数据
    .ram_rdata_ready_icache_i(),
    .ram_rdata_icache_i()
);


dcahche_top(
    .clk(clk),
    .rst(rst),

    // cpu与dcache之间的接口
    .mem_addr_i(mem_addr),
    .mem_mask_i(mem_mask),
    .mem_addr_valid_i(mem_addr_valid),
    // 写数据
    .mem_write_valid_i(mem_write_valid),
    .mem_wdata_i(mem_wdata),

    // 输出 读取的数据
    .mem_rdata_o (),
    .mem_data_ready_o(), // dcache数据准备完毕

    // dcache 与 mem 之间的接口 
    // 读端口
    .ram_raddr_dcache_o(),
    .ram_raddr_valid_dcache_o(),
    .ram_rmask_dcache_o(),
    // mem读数据准备好
    .ram_rdata_ready_dcache_i(),
    .ram_rdata_dcache_i(),

    // 写端口
    .ram_waddr_dcache_o(),
    .ram_waddr_valid_dcache_o(),
    .ram_wmask_dcache_o(),
    // 写数据准备好
    .ram_wdata_ready_dcache_i(),
    .ram_wdata_dcache_o()
);

endmodule