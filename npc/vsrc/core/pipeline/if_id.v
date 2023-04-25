`include "sysconfig.v"
module if_id(
    input                         clk,
    input                         rst,

    /*需要传递给 ID的数据*/
    input     [`XlEN - 1 : 0]     i_inst_addr,
    output    [`XLEN - 1 : 0]     o_inst_addr,


    input     [`INST_LEN - 1 : 0] i_inst_data,
    output    [`INST_LEN - 1 : 0] o_inst_data

);
    wire [`XLEN - 1 : 0] _i_inst_addr = i_inst_addr;
    reg  [`XLEN - 1 : 0] _o_inst_addr;

    regTemplate #(
        .WIDTH(`XLEN),
        .RESET_VAL(`XLEN'b0)  // 重置值为 0
    ) if_id_inst_addr (
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
    ) if_id_inst_data (
        .clk(clk),
        .rst(rst),
        .din(_i_inst_data),
        .dout(_o_inst_data),
        .wen(1)    // wen = 1, 使能写入 
    );
    
    assign o_inst_data = _o_inst_data;

endmodule