
`include "../sysconfig.v"

module fetch (
    input wire [`XLEN-1:0] inst_addr, // 指令位置
    output wire [`INST_LEN-1:0] inst_data  // 指令数据
);

  wire [`XLEN-1:0] _mem_data; //存储数据
  import "DPI-C" function void pmem_read(
    input  longint raddr,
    output longint rdata
  );

  import "DPI-C" function void get_pc( //得到此时的PC值
    input  longint pc,
  );
/*  仿真使用,传递当前 pc 给仿真环境,根据pc 取指令 */
  always @(*) begin
    pmem_read(inst_addr, _mem_data);
    get_pc(inst_addr);
  end

  assign inst_data = _mem_data[31:0];

endmodule
