module ysyx_22051145_alu(
    input [63:0] pc,
    input [63:0] op1,
    input [63:0] op2,
    input wire[`DECINFO_WIDTH-1:0] dec_info_bus,

    output reg [63:0] result
    );

    always @(*)
    case(dec_info_bus[2:0])
    `DECINFO_GRP_ALU:
        if(dec_info_bus[`DECINFO_ALU_LUI]) begin result = op2; end              // R(rd) = imm
        else if(dec_info_bus[`DECINFO_ALU_AUIPC]) begin result = pc + op2; end  // R(rd) = s->pc + imm
        else if(dec_info_bus[`DECINFO_ALU_ADD]) begin result = op1 + op2;  end  // R(rd) = src1 + src2
        else if(dec_info_bus[`DECINFO_ALU_SUB]) begin result = op1 - op2;  end  // R(rd) = src1 - src2)
        else if(dec_info_bus[`DECINFO_ALU_SLL]) begin result = op1 << op2;  end  // R(rd) = U64(src1) << BITS(src2, 4, 0)
        else if(dec_info_bus[`DECINFO_ALU_SLT]) begin result = (op1 > op2 ? 1 : 0); end  // R(rd) = (S64(src1) < S64(src2)) ? 1 : 0
        else begin result = 0; end

    `DECINFO_GRP_MULDIV: begin end

    
    default: begin result = 0; end
    endcase


endmodule