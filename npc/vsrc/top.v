`include "sysconfig.v"
module ysyx_top(
    input clk,
    input rst
);


reg [`X_LEN] now_pc;

// 通过 ID 得到的操作码对跳转指令进行操作，得到下一条指令的地址，再用触发器等一拍
pc ysyx_22051145_pc ( 
    // input 
    .clk(clk),
    .rst(rst),
    .pc_op(pc_op), // from ID
    .rs1_data(rs1_data), // from regfile 
    .imm_data(imm_data), // from ID
    .execute_data(exc_alu_out), // from EX
    .clint_pc_i(clint_pc), // from clint 
    .clint_pc_valid_i(clint_pc_valid), // from clint
    // output
    .pc_out(now_pc)
);

//通过DPI-C 实现的取指模块，利用当前的pc地址，从仿真环境中取指令
reg [`INST_LEN-1 : 0] now_inst_data; 
fetch ysyx_22051145_IF (
    // input 
    .inst_addr(now_pc),
    // output
    .inst_data(now_inst_data)
);



  /************           **********译码模块********             **************/
// 通过 inst 得到该指令的rs1 rs2 rd 的索引，以及立即数  并且得到csr的索引与立即数 
wire [`REG_ADDRWIDTH-1 : 0] rs1_idx;
wire [`REG_ADDRWIDTH-1 : 0] rs2_idx;
wire [`REG_ADDRWIDTH-1 : 0] rd_idx;
wire [`IMM_LEN-1 : 0] imm_data;
// csr相关
wire [`X_LEN] immCSR;
wire isNeedimmCSR; 
wire [`CSR_REG_ADDRWIDTH-1 : 0] csr_idx;
// 操作码
wire [`ALUOP_LEN-1 : 0] alu_op;
wire [`MEMOP_LEN-1 : 0] mem_op;
wire [`EXCOP_LEN-1 : 0] exc_op;
wire [`PCOP_LEN-1 : 0] pc_op;
wire [`CSROP_LEN-1:0] csr_op;
// 自陷 操作码
wire [`TRAP_BUS] trap_bus_o;

decode ysyx_22051145_decode(
    // input 输入的信号是当前指令
    .inst_data(now_inst_data),

    // output 输出的信号是对应的寄存器的索引
    .rs1_idx(rs1_idx),
    .rs2_idx(rs2_idx),
    .rd_idx(rd_idx),
    .imm_data(imm_data),

    // output csr相关指令
    .immCSR(immCSR),
    .isNeedimmCSR(isNeedimmCSR), //通过是否有立即数 判断指令是否是带imm的csr指令
    .csr_idx(csr_idx),

    // output 不同操作的操作码
    .alu_op(alu_op),
    .mem_op(mem_op),
    .exc_op(exc_op),
    .pc_op(pc_op),
    .csr_op(csr_op),
    
    // 自陷 指令的相关操作码  ebreak ecall mret
    .trap_bus_o(trap_bus_o) 
);

 /****************通用寄存器组***************/
wire [`X_LEN] rs1_data;
wire [`X_LEN] rs2_data;
wire [`X_LEN] rd_data = wb_data;  // TODO: 需要进行赋值

rv64reg ysyx_22051145_rv64reg(
    // input
    .clk(clk),
    // input 读rs1 、rs2 与 rd 的索引
    .rs1_idx(rs1_idx),
    .rs2_idx(rs2_idx),
    .write_idx(rd_idx),
    // input 是否进行写数据
    .write_data(rd_data),
    .wen(1), // 写使能 目前置为1，rd_idx = 0 时，寄存器的值不会改变   妙到家了
    // output 读rs1 与 rs2 的数据
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
);

/*****************CSR寄存器组*********************/
    wire [`XLEN-1:0] csr_mepc_i;
    wire [`XLEN-1:0] csr_mcause_i;
    wire [`XLEN-1:0] csr_mtval_i;
    wire [`XLEN-1:0] csr_mtvec_i;
    wire [`XLEN-1:0] csr_mstatus_i;
    // 寄存器写使能信号
    wire csr_mepc_i_en;
    wire csr_mcause_i_en;
    wire csr_mtval_i_en;
    wire csr_mtvec_i_en;
    wire csr_mstatus_i_en;
    // 寄存器的信息   牵出来的目的是给 clint 做中断处理
    wire [`XLEN-1:0] csr_mepc_o;
    wire [`XLEN-1:0] csr_mcause_o;
    wire [`XLEN-1:0] csr_mtval_o;
    wire [`XLEN-1:0] csr_mtvec_o;
    wire [`XLEN-1:0] csr_mstatus_o;

    wire [`CSR_REG_ADDRWIDTH-1:0] csr_readaddr = csr_idx;
    wire [`X_LEN] csr_readdata;
    

    wire [`CSR_REG_ADDRWIDTH-1:0] csr_writeaddr = csr_idx;  // 能不能换成wire型呢？
    wire write_enable = exc_csr_valid;
    wire [`X_LEN] csr_writedata = exc_csr_out;

rv64_csr_regfile ysyx_22051145_csr_regfile(
    .clk(clk),
    .rst(rst),
    /* 单独引出寄存器 */
    .csr_mstatus_i(csr_mstatus_i), // 状态寄存器
    .csr_mepc_i(csr_mepc_i),       // 保存异常发生时的pc
    .csr_mcause_i(csr_mcause_i),   // 保存异常发生时的原因
    .csr_mtval_i(csr_mtval_i),     // 保存异常发生时的错误信息
    .csr_mtvec_i(csr_mtvec_i),     // 保存异常发生时的中断向量表的地址
    // 使能信号
    .csr_mstatus_i_en(csr_mstatus_i_en),         
    .csr_mepc_i_en(csr_mepc_i_en),
    .csr_mcause_i_en(csr_mcause_i_en),
    .csr_mtval_i_en(csr_mtval_i_en),
    .csr_mtvec_i_en(csr_mtvec_i_en),
    // 读出寄存器的值
    .csr_mstatus_o(csr_mstatus_o),
    .csr_mepc_o(csr_mepc_o),
    .csr_mcause_o(csr_mcause_o),
    .csr_mtval_o(csr_mtval_o),
    .csr_mtvec_o(csr_mtvec_o),

    .csr_readaddr(csr_readaddr), // input 读取的地址
    .csr_readdata(csr_readdata), // output 读取的数据

    .csr_writeaddr(csr_writeaddr), // input 写入的地址
    .write_enable(write_enable),    // input 写使能
    .csr_writedata(csr_writedata)  // input 写入的数据
);

/**********************执行模块**********************/

wire [`X_LEN] exc_alu_out;
wire [`X_LEN] exc_csr_out;
wire exc_csr_valid;
execute ysyx_22051145_excute(
    .pc(now_pc),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .csr_data(csr_readdata),
    .imm_data(imm_data),
    // input csr相关指令
    .imm_CSR(immCSR),
    .isNeedimmCSR(isNeedimmCSR), //通过是否有立即数 判断指令是否是带imm的csr指令
    // input 不同操作的操作码
    .alu_op(alu_op),
    .mem_op(mem_op),
    .exc_op(exc_op),
    .csr_op(csr_op),
    // 自陷 指令的相关操作码  ebreak ecall mret
    // output
    .exc_alu_out(exc_alu_out),
    .exc_csr_out(exc_csr_out),
    .exc_csr_valid(exc_csr_valid)
);


/**********************访问内存**********************/
// 实现读取ram中的值，并作为mem_out输出. 写入ram值 exc_in 作为输入
wire [`X_LEN] mem_out;
wire isloadEnable;

memory ysyx_22051145_memory(
    .clk(clk),
    .rst(rst),
    .pc(now_pc),
    .rd_idx(rd_idx),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .imm_data(imm_data),
    .mem_op(mem_op),

    .exc_in(exc_alu_out),

    .mem_out(mem_out),
    .isloadEnable(isloadEnable)
);

/**********************写回模块**********************/
// 要么是load的数据进行写回，要么是alu的数据进行写回  写回到对应的寄存器中
wire [`X_LEN] wb_data;

writeback ysyx_22051145_writeback(
    .exc_data_in(exc_alu_out),
    .mem_data_in(mem_out),
    .isloadEnable(isloadEnable),
    .wb_data(wb_data)
);



/*******************中断异常控制模块*****************************/
//  通过trap_bus（异常总线）， 对 ecall ebreak mret 进行处理  实际上就是对寄存器进行处理

wire [`XLEN-1:0] clint_pc;
wire clint_pc_valid;

clint ysyx_22051145_csr_clint(
    .pc_i(now_pc),
    .inst_data_i(now_inst_data),

    .trap_bus_i(trap_bus_o),

    /*来自于csr寄存器的读，*/
    .csr_mstatus_clint_i(csr_mstatus_o),
    .csr_mepc_clint_i(csr_mepc_o),
    .csr_mcause_clint_i(csr_mcause_o),
    .csr_mtval_clint_i(csr_mtval_o),
    .csr_mtvec_clint_i(csr_mtvec_o),

    /*来自于csr寄存器的写*/
      .csr_mstatus_clint_o(csr_mstatus_i),
      .csr_mepc_clint_o   (csr_mepc_i),
      .csr_mcause_clint_o (csr_mcause_i),
      .csr_mtval_clint_o  (csr_mtval_i),
      .csr_mtvec_clint_o  (csr_mtvec_i),


    .csr_mstatus_clint_o_valid(csr_mstatus_i_en),
    .csr_mepc_clint_o_valid(csr_mepc_i_en),
    .csr_mcause_clint_o_valid(csr_mcause_i_en),
    .csr_mtval_clint_o_valid(csr_mtval_i_en),
    .csr_mtvec_clint_o_valid(csr_mtvec_i_en),
    /*输出给取指阶段*/
    .clint_pc_o(clint_pc),
    .clint_pc_valid_o (clint_pc_valid)
);


endmodule