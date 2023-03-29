module ysyx_22051145_alu(
    input en,
    input [63:0] pc,
    input [63:0] op1,
    input [63:0] op2,
    input [3:0] mode,

    output [63:0] result,
    );

    always @(*)
    if(en)
    begin
        case(mode)
        4'b0 : begin result = op2 end   //立即数被放置在op2   LUI
        4'b1 : begin result = pc + op2;  end  //AUIPC = pc + imm
        4'b2 : begin result = op1 + op2  end  //add R(rd) = src1 + src2
        4'b3 : begin result = op1 - op2  end  //sub R(rd) = src1 - src2
        4'b4 : begin result = op1 << op2 end  //sll 默认无符号 U64(src1) << BITS(src2, 4, 0)
        4'b5 : begin result = op1 < op2  end  //slt (S64(src1) < S64(src2)) ? 1 : 0) ?符号拓展？
        4'b6 : begin result = op2 < op2  end  //sltu (U64(src1) < U64(src2)) ? 1 : 0);
        4'b7 : begin result = op1 ^ op2  end  //src1 ^ src2
        4'b8 : begin result = 0          end  //srl u'rs1 >> (rs2 & 0b11111) ?符号拓展？
        4'b9 : begin result = 0          end  //sra s'rs1 >> (rs2 & 0b11111) ?符号拓展？
        4'b10 : begin result = op1 | op2 end  //or rd = rs1 | rs2
        4'b11 : begin result = op1 & op2 end  //and rd = rs1 & rs2
        default: begin result = 0        end
        endcase
    end
endmodule