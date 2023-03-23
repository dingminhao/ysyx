`include "defines.v"
module ysyx_22051145_ifu (
    input rst,
    input clk,
    output wire [63:0]in_addr
);

reg [63:0] pc;
always @(posedge clk) begin //上升沿触发
   if(rst == 1'b1) begin pc <= 64'h80000000; end
   else begin pc <= pc + 4; end  
end

assign in_addr = pc;
    
endmodule