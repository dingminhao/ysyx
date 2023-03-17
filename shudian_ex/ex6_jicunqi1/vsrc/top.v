module top (input clk,input rst, input ps2_data, input [2:0]sw, output [7:0]ledr);

	always@(posedge ps2_data)
		case(sw[2:0])
				3'b000 : begin ledr[7:0] <= 8'b00000000; end
				3'b001 : begin ledr[7:0] <= {1'b1,ledr[6:0]}; end
				3'b010 : begin ledr[7:0] <= {1'b0, ledr[7:1]}; end
				3'b011 : begin ledr[7:0] <= {ledr[6:0], 1'b0}; end
				3'b100 : begin ledr[7:0] <= {ledr[7], ledr[7:1]}; end
				3'b101 : begin ledr[7:0] <= {ledr[6:0],ledr[0]}; end
				3'b110 : begin ledr[7:0] <= {ledr[0], ledr[7:1]};  end
				3'b111 : begin ledr[7:0] <= {ledr[6:0], ledr[7]};  end 
			default: ledr[7:0] <= 8'b00000000; endcase 
endmodule

