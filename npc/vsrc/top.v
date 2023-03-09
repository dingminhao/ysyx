module top(
  input clk,
  input rst,
  output reg [15:0] ledr
);
  reg [31:0] count;
  always @(posedge clk) begin
    if (rst) begin ledr <= 1; count <= 0; end
    else begin
      if (count == 0) ledr <= {ledr[14:0], ledr[15]};
      count <= (count >= 5000000 ? 32'b0 : count + 1);
    end
  end
endmodule
