`include "sysconfig.v"
module writeback (

    input                 clk,
    input                 rst,
    /* from MEM/WB */
    input [    `XLEN_BUS] pc_wb_i,
    input [`INST_LEN-1:0] inst_data_wb_i
);


  wire _commit_valid = (pc_wb_i != `XLEN'b0) && (inst_data_wb_i != `INST_NOP);

  import "DPI-C" function void inst_commit(
    input longint pc,
    input int inst,
    input bit commit_valid
  );

  always @(posedge clk) begin
    // 延时一个周期，让寄存器写入有效
    inst_commit(pc_wb_i, inst_data_wb_i, _commit_valid);
  end
endmodule
