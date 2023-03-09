module top(input clk, input rst, input [9:0] sw, output [1:0] ledr); 
 MuxKeyWithDefault #(4, 2, 2) i0 (ledr[1:0], sw[9:8], 2'b00, {
    2'b00, sw[1:0],
    2'b01, sw[3:2],
    2'b10, sw[5:4],
    2'b11, sw[7:6]
  });
endmodule
