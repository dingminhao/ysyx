`include "sysconfig.v"
module ex_mem(
    input clk,
    input rst,


    /*From ex output*/
    input [`XLEN-1 : 0] i_exc_alu_out,
    output [`XLEN-1 : 0] o_exc_alu_out,

    input [`XLEN-1 : 0] i_exc_csr_out,
    output [`XLEN-1 : 0] o_exc_csr_out,

    input i_exc_csr_valid,
    output o_exc_csr_valid,

    /*to mem*/
    input [`REG_ADDRWIDTH-1 : 0] i_rd_idx,
    output [`REG_ADDRWIDTH-1 : 0] o_rd_idx,

    input [`XLEN-1 : 0] i_rs1_data,
    output [`XLEN-1 : 0] o_rs1_data,

    input [`XLEN-1 : 0] i_rs2_data,
    output [`XLEN-1 : 0] o_rs2_data,

    input [`IMM_LEN-1 : 0] i_imm_data,
    output [`IMM_LEN-1 : 0] o_imm_data,

    input [`MEMOP_LEN-1 : 0] i_memop,
    output [`MEMOP_LEN-1 : 0] o_memop

    /*to writeback*/
    input [`XLEN-1 : 0] i_inst_data,
    output [`XLEN-1 : 0] o_inst_data

    input [`XLEN-1 : 0] i_pc,
    output [`XLEN-1 : 0] o_pc


)

    wire [`XLEN-1 : 0]_i_exc_alu_out = i_exc_alu_out;
    reg [`XLEN-1 : 0]_o_exc_alu_out;
        regTemplate #(
        .WIDTH(`XLEN)
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) ex_mem_exc_alu_out(
        .clk(clk),
        .rst(rst),
        .din(_i_exc_alu_out),
        .dout(_o_exc_alu_out)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_exc_alu_out = _o_exc_alu_out;



    wire [`XLEN-1 : 0]_i_exc_csr_out = i_exc_csr_out;
    reg [`XLEN-1 : 0]_o_exc_csr_out;
        regTemplate #(
        .WIDTH(`XLEN)
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) ex_mem_exc_csr_out(
        .clk(clk),
        .rst(rst),
        .din(_i_exc_csr_out),
        .dout(_o_exc_csr_out)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_exc_csr_out = _o_exc_csr_out;


    wire _i_exc_csr_valid = i_exc_csr_valid;
    reg _o_exc_csr_valid;
        regTemplate #(
        .WIDTH(1)
        .RESET_VAL(1'b0)  // 重置值为 0
        ) ex_mem_exc_csr_valid(
        .clk(clk),
        .rst(rst),
        .din(_i_exc_csr_valid),
        .dout(_o_exc_csr_valid)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_exc_csr_valid = _o_exc_csr_valid;



    wire [`XLEN-1 : 0]_i_pc = i_pc;
    reg [`XLEN-1 : 0]_o_pc;
        regTemplate #(
        .WIDTH(`XLEN)
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) ex_mem_pc(
        .clk(clk),
        .rst(rst),
        .din(_i_pc),
        .dout(_o_pc)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_pc = _o_pc;



    wire [`REG_ADDRWIDTH-1 : 0]_i_rd_idx = i_rd_idx;
    reg [`REG_ADDRWIDTH-1 : 0]_o_rd_idx;
        regTemplate #(
        .WIDTH(`REG_ADDRWIDTH)
        .RESET_VAL(`REG_ADDRWIDTH'b0)  // 重置值为 0
        ) ex_mem_rd_idx(
        .clk(clk),
        .rst(rst),
        .din(_i_rd_idx),
        .dout(_o_rd_idx)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_rd_idx = _o_rd_idx;



    wire [`XLEN-1 : 0]_i_rs1_data = i_rs1_data;
    reg [`XLEN-1 : 0]_o_rs1_data;
        regTemplate #(
        .WIDTH(`XLEN)
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) ex_mem_rs1_data(
        .clk(clk),
        .rst(rst),
        .din(_i_rs1_data),
        .dout(_o_rs1_data)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_rs1_data = _o_rs1_data;



    wire [`XLEN-1 : 0]_i_rs2_data = i_rs2_data;
    reg [`XLEN-1 : 0]_o_rs2_data;
        regTemplate #(
        .WIDTH(`XLEN)
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
        ) ex_mem_rs2_data(
        .clk(clk),
        .rst(rst),
        .din(_i_rs2_data),
        .dout(_o_rs2_data)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_rs2_data = _o_rs2_data;



    wire [`IMM_LEN-1 : 0]_i_imm_data = i_imm_data;
    reg [`IMM_LEN-1 : 0]_o_imm_data;
        regTemplate #(
        .WIDTH(`IMM_LEN)
        .RESET_VAL(`IMM_LEN'b0)  // 重置值为 0
        ) ex_mem_imm_data(
        .clk(clk),
        .rst(rst),
        .din(_i_imm_data),
        .dout(_o_imm_data)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_imm_data = _o_imm_data;


    wire [`MEMOP_LEN-1 : 0]_i_memop = i_memop;
    reg [`MEMOP_LEN-1 : 0]_o_memop;
        regTemplate #(
        .WIDTH(`MEMOP_LEN)
        .RESET_VAL(`MEMOP_LEN'b0)  // 重置值为 0
        ) ex_mem_memop(
        .clk(clk),
        .rst(rst),
        .din(_i_memop),
        .dout(_o_memop)
        .wen(1)    // wen = 1, 使能写入
        );
    assign o_memop = _o_memop;

endmodule