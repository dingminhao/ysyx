`include "sysconfig.v"
module id_ex(
    input                        clk,
    input                        rst,
    /*EX 中的输入*/
    input [`XLEN-1 : 0] i_pc,
    output [`XLEN-1 : 0] o_pc,

    input  [`REG_ADDRWIDTH-1 : 0] i_rd_idx,
    output [`REG_ADDRWIDTH-1 : 0] o_rd_idx,

    input [`CSR_REG_ADDRWIDTH-1:0] i_csr_addr,
    output [`CSR_REG_ADDRWIDTH-1:0] o_csr_addr,

    input [`XLEN-1 : 0] i_rs1_data,
    output [`XLEN-1 : 0] o_rs1_data,

    input [`XLEN-1 : 0] i_rs2_data,
    output [`XLEN-1 : 0] o_rs2_data,

    input  [`IMM_LEN-1 : 0] i_imm_data,
    output [`IMM_LEN-1 : 0] o_imm_data,

    input [`XLEN-1 : 0] i_csr_data,
    output [`XLEN-1 : 0] o_csr_data,

    input  [`XLEN-1 : 0] i_imm_CSR,
    output [`XLEN-1 : 0] o_imm_CSR,

    input i_isNeedimmCSR,
    output o_isNeedimmCSR,

    input  [`ALUOP_LEN-1 : 0] i_aluop,
    output [`ALUOP_LEN-1 : 0] o_aluop,

    input  [`MEMOP_LEN-1 : 0] i_memop,
    output [`MEMOP_LEN-1 : 0] o_memop,

    input  [`EXCOP_LEN-1 : 0] i_exc_op,
    output [`EXCOP_LEN-1 : 0] o_exc_op,

    input  [`PCOP_LEN-1 : 0] i_pc_op,
    output [`PCOP_LEN-1 : 0] o_pc_op,

    input  [`CSROP_LEN-1 : 0] i_csr_op,
    output [`CSROP_LEN-1 : 0] o_csr_op,

    /*MEM 中的输入*/
    input [`INST_LEN-1 : 0] i_inst_data,
    output [`INST_LEN-1 : 0] o_inst_data,

    input  [`CSR_REG_ADDRWIDTH-1 : 0] i_csr_addr,
    output [`CSR_REG_ADDRWIDTH-1 : 0] o_csr_addr,

    input [`TRAP_LEN-1 : 0] i_trap_bus,
    output [`TRAP_LEN-1 : 0] o_trap_bus
); 

    wire [`CSR_REG_ADDRWIDTH-1 : 0] _i_csr_addr = i_csr_addr;
    reg  [`CSR_REG_ADDRWIDTH-1 : 0] _o_csr_addr;

    regTemplate #(
        .WIDTH(`CSR_REG_ADDRWIDTH),
        .RESET_VAL(`CSR_REG_ADDRWIDTH'b0)  // 重置值为 0
    ) id_ex_csr_addr (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_addr),
        .dout(_o_csr_addr),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_csr_addr = _o_csr_addr;

    wire [`XLEN-1 : 0] _i_pc = i_pc;
    reg  [`XLEN-1 : 0] _o_pc;
    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) id_ex_pc (
        .clk(clk),
        .rst(rst),
        .din(_i_pc),
        .dout(_o_pc),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_pc = _o_pc;


    wire [`XLEN-1 : 0] _i_rs1_data = i_rs1_data;
    reg  [`XLEN-1 : 0] _o_rs1_data;
    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) id_ex_rs1_data (
        .clk(clk),
        .rst(rst),
        .din(_i_rs1_data),
        .dout(_o_rs1_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_rs1_data = _o_rs1_data;



    wire [`XLEN-1 : 0] _i_rs2_data = i_rs2_data;
    reg  [`XLEN-1 : 0] _o_rs2_data;
    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) id_ex_rs2_data (
        .clk(clk),
        .rst(rst),
        .din(_i_rs2_data),
        .dout(_o_rs2_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_rs2_data = _o_rs2_data;



    wire [`XLEN-1 : 0] _i_csr_data = i_csr_data;
    reg  [`XLEN-1 : 0] _o_csr_data;
    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) id_ex_csr_data (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_data),
        .dout(_o_csr_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_csr_data = _o_csr_data;



    input [`INST_LEN-1 : 0] _i_inst_data = i_inst_data,
    output [`INST_LEN-1 : 0] _o_inst_data,
    regTemplate #(
        .WIDTH(`INST_LEN),
        .RESET_VAL(`INST_LEN'b0)  // 重置值为 0
    ) id_ex_inst_data (
        .clk(clk),
        .rst(rst),
        .din(_i_inst_data),
        .dout(_o_inst_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_inst_data = _o_inst_data;



    wire [`REG_ADDRWIDTH-1 : 0] _i_rs1_idx = i_rs1_idx;
    reg  [`REG_ADDRWIDTH-1 : 0] _o_rs1_idx;
    regTemplate #(
        .WIDTH(`REG_ADDRWIDTH),
        .RESET_VAL(`REG_ADDRWIDTH'b0)  // 重置值为 0
    ) id_ex_rs1_idx (
        .clk(clk),
        .rst(rst),
        .din(_i_rs1_idx),
        .dout(_o_rs1_idx),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_rs1_idx = _o_rs1_idx;



    wire [`REG_ADDRWIDTH-1 : 0] _i_rs2_idx = i_rs2_idx;
    reg  [`REG_ADDRWIDTH-1 : 0] _o_rs2_idx;
    regTemplate #(
        .WIDTH(`REG_ADDRWIDTH),
        .RESET_VAL(`REG_ADDRWIDTH'b0)  // 重置值为 0
    ) id_ex_rs2_idx (
        .clk(clk),
        .rst(rst),
        .din(_i_rs2_idx),
        .dout(_o_rs2_idx),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_rs2_idx = _o_rs2_idx;



    wire [`REG_ADDRWIDTH-1 : 0] _i_rd_idx = i_rd_idx;
    reg  [`REG_ADDRWIDTH-1 : 0] _o_rd_idx;
    regTemplate #(
        .WIDTH(`REG_ADDRWIDTH),
        .RESET_VAL(`REG_ADDRWIDTH'b0)  // 重置值为 0
    ) id_ex_rd_idx (
        .clk(clk),
        .rst(rst),
        .din(_i_rd_idx),
        .dout(_o_rd_idx),
        .wen(1)    // wen = 1, 使能写入 
    );
    assign o_rd_idx = _o_rd_idx;



    wire [`IMM_LEN-1 : 0] _i_imm_data = i_imm_data;
    reg  [`IMM_LEN-1 : 0] _o_imm_data;
        regTemplate #(
            .WIDTH(`IMM_LEN),
            .RESET_VAL(`IMM_LEN'b0)  // 重置值为 0
        ) id_ex_imm_data (
            .clk(clk),
            .rst(rst),
            .din(_i_imm_data),
            .dout(_o_imm_data),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_imm_data = _o_imm_data;



    wire [`XLEN-1 : 0] _i_imm_CSR = i_imm_CSR;
    reg  [`XLEN-1 : 0] _o_imm_CSR;
        regTemplate #(
            .WIDTH(`XLEN),
            .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) id_ex_imm_CSR (
            .clk(clk),
            .rst(rst),
            .din(_i_imm_CSR),
            .dout(_o_imm_CSR),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_imm_CSR = _o_imm_CSR;



    wire _i_isNeedimmCSR = i_isNeedimmCSR;
    reg  _o_isNeedimmCSR;
        regTemplate #(
            .WIDTH(1),
            .RESET_VAL(1'b0)  // 重置值为 0
        ) id_ex_isNeedimmCSR (
            .clk(clk),
            .rst(rst),
            .din(_i_isNeedimmCSR),
            .dout(_o_isNeedimmCSR),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_isNeedimmCSR = _o_isNeedimmCSR;



    wire [`CSR_REG_ADDRWIDTH-1 : 0] _i_csr_addr = i_csr_addr;
    reg  [`CSR_REG_ADDRWIDTH-1 : 0] _o_csr_addr;
        regTemplate #(
            .WIDTH(`CSR_REG_ADDRWIDTH),
            .RESET_VAL(`CSR_REG_ADDRWIDTH'b0)  // 重置值为 0
        ) id_ex_csr_addr (
            .clk(clk),
            .rst(rst),
            .din(_i_csr_addr),
            .dout(_o_csr_addr),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_csr_addr = _o_csr_addr;



    wire [`ALUOP_LEN-1 : 0] _i_aluop = i_aluop;
    reg  [`ALUOP_LEN-1 : 0] _o_aluop;
        regTemplate #(
            .WIDTH(`ALUOP_LEN),
            .RESET_VAL(`ALUOP_LEN)  // 重置值为 0
        ) id_ex_aluop (
            .clk(clk),
            .rst(rst),
            .din(_i_aluop),
            .dout(_o_aluop),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_aluop = _o_aluop;



    wire [`MEMOP_LEN-1 : 0] _i_memop = i_memop;
    reg  [`MEMOP_LEN-1 : 0] _o_memop;
        regTemplate #(
            .WIDTH(`MEMOP_LEN),
            .RESET_VAL(`MEMOP_LEN'b0)  // 重置值为 0
        ) id_ex_memop (
            .clk(clk),
            .rst(rst),
            .din(_i_memop),
            .dout(_o_memop),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_memop = _o_memop;



    wire [`EXCOP_LEN-1 : 0] _i_exc_op = i_exc_op;
    reg  [`EXCOP_LEN-1 : 0] _o_exc_op;
        regTemplate #(
            .WIDTH(`EXCOP_LEN),
            .RESET_VAL(`EXCOP_LEN'b0)  // 重置值为 0
        ) id_ex_exc_op (
            .clk(clk),
            .rst(rst),
            .din(_i_exc_op),
            .dout(_o_exc_op),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_exc_op = _o_exc_op;



    wire [`PCOP_LEN-1 : 0] _i_pc_op = i_pc_op;
    reg  [`PCOP_LEN-1 : 0] _o_pc_op; 
        regTemplate #(
            .WIDTH(`PCOP_LEN),
            .RESET_VAL(`PCOP_LEN'b0)  // 重置值为 0
        ) id_ex_pc_op (
            .clk(clk),
            .rst(rst),
            .din(_i_pc_op),
            .dout(_o_pc_op),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_pc_op = _o_pc_op;



    wire [`CSROP_LEN-1 : 0] _i_csr_op = i_csr_op;
    reg  [`CSROP_LEN-1 : 0] _o_csr_op;
        regTemplate #(
            .WIDTH(`CSROP_LEN),
            .RESET_VAL(`CSROP_LEN'b0)  // 重置值为 0
        ) id_ex_csr_op (
            .clk(clk),
            .rst(rst),
            .din(_i_csr_op),
            .dout(_o_csr_op),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_csr_op = _o_csr_op;



    wire [`TRAP_LEN-1 : 0] _i_trap_bus = i_trap_bus;
    reg  [`TRAP_LEN-1 : 0] _o_trap_bus;
        regTemplate #(
            .WIDTH(`TRAP_LEN),
            .RESET_VAL(`TRAP_LEN'b0)  // 重置值为 0
        ) id_ex_trap_bus (
            .clk(clk),
            .rst(rst),
            .din(_i_trap_bus),
            .dout(_o_trap_bus),
            .wen(1)    // wen = 1, 使能写入 
        );
    assign o_trap_bus = _o_trap_bus;

endmodule