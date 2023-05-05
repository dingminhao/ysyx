/*
| output [127:0] Q   | 读数据                                 |
| ------------------ | -------------------------------------- |
| input CLK          | 时钟                                   |
| input CEN          | 使能信号, 低电平有效                   |
| input WEN          | 写使能信号, 低电平有效                 |
| input [127:0] BWEN | 写掩码信号, 掩码粒度为1bit, 低电平有效 |
| input [5:0] A      | 读写地址                               |
| input [127:0] D    | 写数据                                 |
*/
module S011HD1P_X32Y2D128_BW (
    Q,
    CLK,
    CEN,
    WEN,
    BWEN,
    A,
    D
);
  parameter Bits = 128; //
  parameter Word_Depth = 64;  // 数据位宽
  parameter Add_Width = 6; // 地址位宽
  parameter Wen_Width = 128; // 写掩码位宽 控制128位的数据是否写入数据

  output reg [Bits-1:0] Q; 

  input CLK;
  input CEN;
  input WEN;
  input [Wen_Width-1:0] BWEN;
  input [Add_Width-1:0] A;
  input [Bits-1:0] D;

  wire cen = ~CEN;
  wire wen = ~WEN;
  wire [Wen_Width-1:0] bwen = ~BWEN;

  reg [Bits-1:0] ram[0:Word_Depth-1]; // 64 * 128位的ram
  // 当ram使能 并且 写使能时，将写入的数据写入到ram中
  // 如果写使能无效，则
  always @(posedge CLK) begin
    if (cen && wen) begin


      ram[A] <= (D & bwen) | (ram[A] & ~bwen); // 写入
    
    
    end
    Q <= cen && !wen ? ram[A] : {4{$random}}; // 读值
  end

endmodule