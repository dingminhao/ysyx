`include "./../sysconfig.v"
module writeback (
    /* 通用寄存器组 */
    input  [`XLEN-1:0] exc_data_in,   //执行阶段的数据
    input  [`XLEN-1:0] mem_data_in,   //访存阶段的数据
    input              isloadEnable,  //是否是访存阶段的数据
    output [`XLEN-1:0] wb_data
);

  assign wb_data = (isloadEnable) ? mem_data_in : exc_data_in;

  // //TODO:csr 寄存器写回还需考虑  
  // assign wb_csr_data = csr_data_in;
endmodule
