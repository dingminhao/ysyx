`include "defines.v"
module ysyx_22051145_ifu (
    input rst,
    input clk,
    input jump_flag,
    input [`REG_BUS]jump_addr,
    output  [`REG_BUS]in_addr
);

reg [63:0] pc;
reg [63:0] next_pc;
always @(posedge clk) begin //上升沿触发
    if(rst) pc <= 64'h80000000;
    else pc <= next_pc;  
end

always @(*)
    if(rst == 1) begin next_pc = 64'h80000004; end
    else if(jump_flag == 1'b1) begin next_pc = jump_addr; end
    else begin next_pc = pc + 4; end
assign in_addr = pc;

endmodule