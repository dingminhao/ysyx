module top (input clk,input rst, input br, input [2:0]sw, output [7:0]ledr);
	always@(posedge br)
		case(sw[2:0])
				3'b000 : begin ledr[7:0] <= 8'b10000000;  end
				3'b001 : begin ledr[7:0] <= {ledr[0], ledr[7:1]};  end
				3'b010 : begin ledr[7:0] <= {ledr[1:0], ledr[7:2]}; end
				3'b011 : begin ledr[7:0] <= {ledr[2:0], ledr[7:3]}; end
				3'b100 : begin ledr[7:0] <= {ledr[3:0], ledr[7:4]}; end
				3'b101 : begin ledr[7:0] <= {ledr[4:0], ledr[7:5]}; end
				3'b110 : begin ledr[7:0] <= {ledr[5:0], ledr[7:6]}; end
				3'b111 : begin ledr[7:0] <= {ledr[6:0], ledr[7]}; end 
			default: ledr[7:0] <= 8'b00000000; endcase 
endmodule

