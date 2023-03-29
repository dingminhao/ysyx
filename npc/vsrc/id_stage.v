`include "defines.v"
module ysyx_22051145_idstage (
    input wire [31:0]inst,

    output wire [5:0]mode;

    output wire access_rd,
    output wire [4:0]rd_waddr_o,
    output wire [4:0]rs1_raddr_o,
    output wire [4:0]rs2_raddr_o,

    output wire[`REG_BUS] dec_imm_o,
);
    //将所有的域解出来
    wire[6:0] opcode = inst[6:0];
    wire[2:0] funct3 = inst[14:12];
    wire[6:0] funct7 = inst[31:25];
    wire[4:0] rd = inst[11:7];
    wire[4:0] rs1 = inst[19:15];
    wire[4:0] rs2 = inst[24:20];
    wire[11:0] type_i_imm_11_0 = inst[31:20];
    wire[6:0] type_s_imm_11_5 = inst[31:25];
    wire[4:0] type_s_imm_4_0 = inst[11:7];
    wire[6:0] type_b_imm_12_10_5 = inst[31:25];
    wire[4:0] type_b_imm_4_1_11 = inst[11:7];
    wire[19:0] type_u_imm_31_12 = inst[31:12];
    wire[19:0] type_j_imm_31_12 = inst[31:12];

    // 指令opcode域的取值
    wire opcode_0110111 = (opcode == 7'b0110111);
    wire opcode_0010111 = (opcode == 7'b0010111);
    wire opcode_1101111 = (opcode == 7'b1101111);
    wire opcode_1100111 = (opcode == 7'b1100111);
    wire opcode_1100011 = (opcode == 7'b1100011);
    wire opcode_0000011 = (opcode == 7'b0000011);
    wire opcode_0100011 = (opcode == 7'b0100011);
    wire opcode_0010011 = (opcode == 7'b0010011);
    wire opcode_0110011 = (opcode == 7'b0110011);
    wire opcode_0001111 = (opcode == 7'b0001111);
    wire opcode_1110011 = (opcode == 7'b1110011);

    // 指令funct3域的取值
    wire funct3_000 = (funct3 == 3'b000);
    wire funct3_001 = (funct3 == 3'b001);
    wire funct3_010 = (funct3 == 3'b010);
    wire funct3_011 = (funct3 == 3'b011);
    wire funct3_100 = (funct3 == 3'b100);
    wire funct3_101 = (funct3 == 3'b101);
    wire funct3_110 = (funct3 == 3'b110);
    wire funct3_111 = (funct3 == 3'b111);

    // 指令funct7域的取值
    wire funct7_0000000 = (funct7 == 7'b0000000);
    wire funct7_0100000 = (funct7 == 7'b0100000);
    wire funct7_0000001 = (funct7 == 7'b0000001);

    wire inst_lui = opcode_0110111;
    wire inst_auipc = opcode_0010111;
    wire inst_jal = opcode_1101111;
    wire inst_jalr = opcode_1100111 & funct3_000;
    wire inst_beq = opcode_1100011 & funct3_000;
    wire inst_bne = opcode_1100011 & funct3_001;
    wire inst_blt = opcode_1100011 & funct3_100;
    wire inst_bge = opcode_1100011 & funct3_101;
    wire inst_bltu = opcode_1100011 & funct3_110;
    wire inst_bgeu = opcode_1100011 & funct3_111;
    wire inst_lb = opcode_0000011 & funct3_000;
    wire inst_lh = opcode_0000011 & funct3_001;
    wire inst_lw = opcode_0000011 & funct3_010;
    wire inst_lbu = opcode_0000011 & funct3_100;
    wire inst_lhu = opcode_0000011 & funct3_101;
    wire inst_sb = opcode_0100011 & funct3_000;
    wire inst_sh = opcode_0100011 & funct3_001;
    wire inst_sw = opcode_0100011 & funct3_010;
    wire inst_addi = opcode_0010011 & funct3_000;
    wire inst_slti = opcode_0010011 & funct3_010;
    wire inst_sltiu = opcode_0010011 & funct3_011;
    wire inst_xori = opcode_0010011 & funct3_100;
    wire inst_ori = opcode_0010011 & funct3_110;
    wire inst_andi = opcode_0010011 & funct3_111;
    wire inst_slli = opcode_0010011 & funct3_001 & funct7_0000000;
    wire inst_srli = opcode_0010011 & funct3_101 & funct7_0000000;
    wire inst_srai = opcode_0010011 & funct3_101 & funct7_0100000;
    wire inst_add = opcode_0110011 & funct3_000 & funct7_0000000;
    wire inst_sub = opcode_0110011 & funct3_000 & funct7_0100000;
    wire inst_sll = opcode_0110011 & funct3_001 & funct7_0000000;
    wire inst_slt = opcode_0110011 & funct3_010 & funct7_0000000;
    wire inst_sltu = opcode_0110011 & funct3_011 & funct7_0000000;
    wire inst_xor = opcode_0110011 & funct3_100 & funct7_0000000;
    wire inst_srl = opcode_0110011 & funct3_101 & funct7_0000000;
    wire inst_sra = opcode_0110011 & funct3_101 & funct7_0100000;
    wire inst_or = opcode_0110011 & funct3_110 & funct7_0000000;
    wire inst_and = opcode_0110011 & funct3_111 & funct7_0000000;
    wire inst_fence = opcode_0001111 & funct3_000;
    wire inst_ecall = (inst_i == `INST_ECALL);
    wire inst_ebreak = (inst_i == `INST_EBREAK);
    wire inst_fence_i = opcode_0001111 & funct3_001;
    wire inst_csrrw = opcode_1110011 & funct3_001;
    wire inst_csrrs = opcode_1110011 & funct3_010;
    wire inst_csrrc = opcode_1110011 & funct3_011;
    wire inst_csrrwi = opcode_1110011 & funct3_101;
    wire inst_csrrsi = opcode_1110011 & funct3_110;
    wire inst_csrrci = opcode_1110011 & funct3_111;
    wire inst_mul = opcode_0110011 & funct3_000 & funct7_0000001;
    wire inst_mulh = opcode_0110011 & funct3_001 & funct7_0000001;
    wire inst_mulhsu = opcode_0110011 & funct3_010 & funct7_0000001;
    wire inst_mulhu = opcode_0110011 & funct3_011 & funct7_0000001;
    wire inst_div = opcode_0110011 & funct3_100 & funct7_0000001;
    wire inst_divu = opcode_0110011 & funct3_101 & funct7_0000001;
    wire inst_rem = opcode_0110011 & funct3_110 & funct7_0000001;
    wire inst_remu = opcode_0110011 & funct3_111 & funct7_0000001;
    wire inst_nop = (inst_i == `INST_NOP);
    wire inst_mret = (inst_i == `INST_MRET);


    



//选择的是什么立即数
    // 指令中的立即数
    wire[63:0] inst_u_type_imm = {{32{inst_i[31]}}, inst_i[31:12], 12'b0};
    wire[63:0] inst_j_type_imm = {{44{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
    wire[63:0] inst_b_type_imm = {{52{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
    wire[63:0] inst_s_type_imm = {{52{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
    wire[63:0] inst_i_type_imm = {{52{inst_i[31]}}, inst_i[31:20]};
    wire[63:0] inst_csr_type_imm = {59'h0, inst_i[19:15]};
    wire[63:0] inst_shift_type_imm = {59'h0, inst_i[24:20]};
    
    wire inst_sel_u_imm = inst_lui | inst_auipc;
    wire inst_sel_j_imm = inst_jal;
    wire inst_sel_b_imm = inst_type_branch;
    wire inst_sel_s_imm = inst_type_store;
    wire inst_sel_i_imm = inst_addi | inst_slti | inst_sltiu | inst_xori | inst_ori | inst_andi | inst_type_load | inst_jalr;
    wire inst_sel_csr_imm = inst_csrrwi | inst_csrrsi | inst_csrrci;
    wire inst_sel_shift_imm = inst_slli | inst_srli | inst_srai;

    assign dec_imm_o = ({64{inst_sel_u_imm}} & inst_u_type_imm) |
                       ({64{inst_sel_j_imm}} & inst_j_type_imm) |
                       ({64{inst_sel_b_imm}} & inst_b_type_imm) |
                       ({64{inst_sel_s_imm}} & inst_s_type_imm) |
                       ({64{inst_sel_i_imm}} & inst_i_type_imm) |
                       ({64{inst_sel_csr_imm}} & inst_csr_type_imm) |
                       ({64{inst_sel_shift_imm}} & inst_shift_type_imm);

// rs1的地址
    wire access_rs1 = (~inst_lui) &
                      (~inst_auipc) &
                      (~inst_jal) &
                      (~inst_ecall) &
                      (~inst_ebreak) &
                      (~inst_csrrwi) &
                      (~inst_csrrsi) &
                      (~inst_csrrci) &
                      (~inst_nop) &
                      (~inst_fence) &
                      (~inst_fence_i) &
                      (~inst_mret);
    assign rs1_raddr_o = access_rs1?rs1: 5'b0;
// rs2的地址输出
    wire access_rs2 = opcode_0110011 | inst_type_store | inst_type_branch;
    assign rs2_raddr_o = access_rs2? rs2: 5'h0;
// rd的地址输出
    access_rd = inst_lui | inst_auipc | inst_jal | inst_jalr | inst_type_load | opcode_0010011 | opcode_0110011 | op_csr;
    assign rd_waddr_o = access_rd? rd: 5'h0;

    

endmodule