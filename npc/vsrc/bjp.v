module ysyx_22051145_bjp(
    input [63:0] pc,
    input wire[`DECINFO_WIDTH-1:0] dec_info_bus,
    input [63:0] rs1,
    input [63:0] dec_imm,
    output reg [63:0] rd,
    output jump_flag,
    output [63:0] jump_addr
    );

    wire jal_or_jalr;
    wire jal;
    wire jalr;
    wire [63:0]op1;
    wire [63:0]op2;

    assign jal_or_jalr = dec_info_bus[`DECINFO_BJP_JUMP];
    assign jalr = dec_info_bus[`DECINFO_BJP_OP1RS1];
    assign jal  = jal_or_jalr & (~jalr);

    assign op1 = ({64{jal}} & pc) | ({64{jalr}} & rs1);
    assign op2 = dec_imm;

    assign jump_flag = jal_or_jalr;

    assign jump_addr = op1 + op2;

    assign rd = ({64{jal_or_jalr}} & (pc+4));


endmodule