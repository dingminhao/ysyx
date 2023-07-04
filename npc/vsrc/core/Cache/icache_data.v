`include "sysconfig.v"


module icache_data #(
    IDX_LEN = 5,  // 组号 长度
    BLK_LEN = 4,  // 块内地址 长度
    TAG_NUM = 32  // tag 个数
) (
    input clk, // 时钟
    input rst, // 复位
    input [IDX_LEN-1:0] icache_index_i,  // index
    input [BLK_LEN-1:0] icache_blk_addr_i, // 块内地址
    input [128-1:0] icache_line_wdata_i, // 块写入数据
    input  [128-1:0] icache_wmask, // 写入掩码
    input icache_wen_i, // 写使能
    output [128-1:0]    icache_line_rdata_o // 块读出数据
);
// 为什么这里需要利用128位的数据来进行读写呢？
// 因为这里的icache_line_rdata_o是一个128位的数据，而icache_line_wdata_i也是一个128位的数据
  S011HD1P_X32Y2D128_BW u_S011HD1P_X32Y2D128_BW (
      .Q   (icache_line_rdata_o), // 读出数据
      .CLK (clk), // 时钟
      .CEN (1'b0), // 低电平有效
      .WEN (~icache_wen_i), // 低电平有效
      .BWEN(~icache_wmask), // 低电平有效
      .A   ({1'b0,icache_index_i}), // 地址
      .D   (icache_line_wdata_i) // 写入数据
  );


endmodule
