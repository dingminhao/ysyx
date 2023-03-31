`include "defines.v"

module ysyx_22051145_regfile(
    input wire clk,
    input wire rst,

    input wire [63:0]w_data,
    input wire [4:0]waddr,

    input wire [4:0]raddr1,
    input wire [4:0]raddr2,

    input wire en_w,

    output wire [63:0]rdata_1,
    output wire [63:0]rdata_2
);

reg [63:0] gpr[0 : 31];
integer i;

always @(negedge clk)
    begin
        if(rst == 1'b1) begin 
            for(i = 0; i < 32; i++)
            begin gpr[i] <= `ZERO_WORD;  end
        end else begin
            if(en_w == 1'b1)
            gpr[waddr] <= w_data;
        end
    end

    assign rdata_1 = gpr[raddr1];
    assign rdata_2 = gpr[raddr2];

endmodule