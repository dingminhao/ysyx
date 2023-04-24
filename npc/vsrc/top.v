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
    .rs1_data(), // from regfile 
    .imm_data(imm_data), // from ID
    .execute_data(), // from EX
    .clint_pc_i(), // from clint 
    .clint_pc_valid_i(), // from clint
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
wire [`EXCOP_LEN1-1 : 0] exc_op;
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
)

 /****************通用寄存器组***************/
wire [`X_LEN] rs1_data;
wire [`X_LEN] rs2_data;


rv64reg ysyx_22051145_rv64reg(
    // input
    .clk(clk),
    .rst(rst),
    // input 读rs1 、rs2 与 rd 的索引
    .rs1_idx(rs1_idx),
    .rs2_idx(rs2_idx),
    .rd_idx(rd_idx),
    // input 是否进行写数据
    .rd_data(rd_data),
    .wen(wen), // 写使能
    // output 读rs1 与 rs2 的数据
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
)






endmodule