`include "sysconfig.v"
module mem_wb(
    input                         clk,
    input                         rst,

    input     [`XlEN - 1 : 0]     i_inst_addr,
    output    [`XLEN - 1 : 0]     o_inst_addr,

    input [`CSR_REG_ADDRWIDTH-1:0] i_csr_addr,
    output [`CSR_REG_ADDRWIDTH-1:0] o_csr_addr,

    input     [`INST_LEN - 1 : 0] i_inst_data,
    output    [`INST_LEN - 1 : 0] o_inst_data,

    input    [`XLEN - 1 : 0]     i_exc_data,
    output   [`XLEN - 1 : 0]     o_exc_data,

    input    [`XLEN - 1 : 0]     i_mem_data,
    output   [`XLEN - 1 : 0]     o_mem_data,

    input i_isloadEnable,
    output o_isloadEnable,

    input [`REG_ADDRWIDTH-1:0]i_rd_idx,
    output [`REG_ADDRWIDTH-1:0]o_rd_idx

    input  [`XLEN_BUS] i_csr_mstatus_writedata;
    output [`XLEN_BUS] o_csr_mstatus_writedata;

    input  [`XLEN_BUS] i_csr_mepc_writedata;
    output [`XLEN_BUS] o_csr_mepc_writedata;
    
    input  [`XLEN_BUS] i_csr_mcause_writedata;
    output [`XLEN_BUS] o_csr_mcause_writedata;

    input  [`XLEN_BUS] i_csr_mtval_writedata;
    output [`XLEN_BUS] o_csr_mtval_writedata;

    input  [`XLEN_BUS] i_csr_mtvec_writedata;
    output [`XLEN_BUS] o_csr_mtvec_writedata;

    input  i_csr_mstatus_write_valid;
    output o_csr_mstatus_write_valid;

    input  i_csr_mepc_write_valid;
    output o_csr_mepc_write_valid;

    input  i_csr_mcause_write_valid;
    output o_csr_mcause_write_valid;

    input  i_csr_mtval_write_valid;
    output o_csr_mtval_write_valid;

    input  i_csr_mtvec_write_valid;
    output o_csr_mtvec_write_valid;

    input  [`XLEN-1:0] i_clint_pc;
    output [`XLEN-1:0] o_clint_pc;

    input  i_clint_pc_valid;
    output o_clint_pc_valid;
);
    wire [`XLEN_BUS] _i_csr_mstatus_writedata = i_csr_mstatus_writedata;
    reg  [`XLEN_BUS] _o_csr_mstatus_writedata;

    regTemplate #(
        .WIDTH(`XLEN_BUS),
        .RESET_VAL(`XLEN_BUS'b0)  // 重置值为 0
    ) mem_wb_csr_mstatus_writedata (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mstatus_writedata),
        .dout(_o_csr_mstatus_writedata),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mstatus_writedata = _o_csr_mstatus_writedata;

    wire [`XLEN_BUS] _i_csr_mepc_writedata = i_csr_mepc_writedata;
    reg  [`XLEN_BUS] _o_csr_mepc_writedata;

    regTemplate #(
        .WIDTH(`XLEN_BUS),
        .RESET_VAL(`XLEN_BUS'b0)  // 重置值为 0
    ) mem_wb_csr_mepc_writedata (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mepc_writedata),
        .dout(_o_csr_mepc_writedata),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mepc_writedata = _o_csr_mepc_writedata;


    wire [`XLEN_BUS] _i_csr_mcause_writedata = i_csr_mcause_writedata;
    reg  [`XLEN_BUS] _o_csr_mcause_writedata;

    regTemplate #(
        .WIDTH(`XLEN_BUS),
        .RESET_VAL(`XLEN_BUS'b0)  // 重置值为 0
    ) mem_wb_csr_mcause_writedata (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mcause_writedata),
        .dout(_o_csr_mcause_writedata),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mcause_writedata = _o_csr_mcause_writedata;


    wire [`XLEN_BUS] _i_csr_mtval_writedata = i_csr_mtval_writedata;
    reg  [`XLEN_BUS] _o_csr_mtval_writedata;

    regTemplate #(
        .WIDTH(`XLEN_BUS),
        .RESET_VAL(`XLEN_BUS'b0)  // 重置值为 0
    ) mem_wb_csr_mtval_writedata (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mtval_writedata),
        .dout(_o_csr_mtval_writedata),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mtval_writedata = _o_csr_mtval_writedata;


    wire [`XLEN_BUS] _i_csr_mtvec_writedata = i_csr_mtvec_writedata;
    reg  [`XLEN_BUS] _o_csr_mtvec_writedata;

    regTemplate #(
        .WIDTH(`XLEN_BUS),
        .RESET_VAL(`XLEN_BUS'b0)  // 重置值为 0
    ) mem_wb_csr_mtvec_writedata (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mtvec_writedata),
        .dout(_o_csr_mtvec_writedata),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mtvec_writedata = _o_csr_mtvec_writedata;

    wire [`XLEN-1:0] _i_clint_pc = i_clint_pc;
    reg  [`XLEN-1:0] _o_clint_pc;

    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) mem_wb_clint_pc (
        .clk(clk),
        .rst(rst),
        .din(_i_clint_pc),
        .dout(_o_clint_pc),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_clint_pc = _o_clint_pc;

    wire _i_csr_mstatus_write_valid = i_csr_mstatus_write_valid;
    reg  _o_csr_mstatus_write_valid;

    regTemplate #(
        .WIDTH(1),
        .RESET_VAL(1'b0)  // 重置值为 0
    ) mem_wb_csr_mstatus_write_valid (
        .clk(clk),
        .rst(rst),
        .din(_i_csr_mstatus_write_valid),
        .dout(_o_csr_mstatus_write_valid),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_csr_mstatus_write_valid = _o_csr_mstatus_write_valid;






    wire [`XLEN - 1 : 0] _i_inst_addr = i_inst_addr;
    reg  [`XLEN - 1 : 0] _o_inst_addr;

    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) mem_wb_inst_addr (
        .clk(clk),
        .rst(rst),
        .din(_i_inst_addr),
        .dout(_o_inst_addr),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_inst_addr = _o_inst_addr;

    wire [`INST_LEN - 1 : 0] _i_inst_data = i_inst_data;
    reg  [`INST_LEN - 1 : 0] _o_inst_data;

    regTemplate #(
        .WIDTH(`INST_LEN),
        .RESET_VAL(`INST_NOP)  // 重置值为 0
    ) mem_wb_inst_data (
        .clk(clk),
        .rst(rst),
        .din(_i_inst_data),
        .dout(_o_inst_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    
    assign o_inst_data = _o_inst_data;

    wire [`XLEN - 1 : 0] _i_exc_data = i_exc_data;
    reg  [`XLEN - 1 : 0] _o_exc_data;

    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) mem_wb_exc_data (
        .clk(clk),
        .rst(rst),
        .din(_i_exc_data),
        .dout(_o_exc_data),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_exc_data = _o_exc_data;

    wire [`XLEN - 1 : 0] _i_mem_data = i_mem_data;
    reg  [`XLEN - 1 : 0] _o_mem_data;

    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) mem_wb_mem_data (
        .clk(clk),
        .rst(rst),
        .din(_i_mem_data),
        .dout(_o_mem_data),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_mem_data = _o_mem_data;

    wire _i_isloadEnable = i_isloadEnable;
    reg  _o_isloadEnable;

    regTemplate #(
        .WIDTH(1),
        .RESET_VAL(1'b0)  // 重置值为 0
    ) mem_wb_isloadEnable (
        .clk(clk),
        .rst(rst),
        .din(_i_isloadEnable),
        .dout(_o_isloadEnable),
        .wen(1)    // wen = 1, 使能写入 
    );

    assign o_isloadEnable = _o_isloadEnable;

endmodule