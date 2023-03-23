`include "defines.v"

module ysyx_22051145_exestage(
    input wire rst,
    input wire [7:0]inst_type,
    input [`REG_BUS]op1,
    input [`REG_BUS]op2,

    output reg [`REG_BUS]rd_data
);

always @(*) begin
    if(rst == 1'b1) rd_data = `ZERO_WORD;
    else begin
        case (inst_type)
            `INST_ADD : rd_data = op1 + op2; 
            default: rd_data = 0;
        endcase
    end
end
    
endmodule