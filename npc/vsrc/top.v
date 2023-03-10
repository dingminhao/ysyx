module top (input clk,input rst, input [10:0]sw, output [4:0]ledr);
	always@(clk or rst or sw)
		begin
			case(sw[10:8])
			3'b000: begin ledr[3:0] = sw[3:0] + sw[7:4]; ledr[4] = sw[3]&sw[7]&~ledr[3] | ~sw[3]&~sw[7]&ledr[3]; end
			3'b001: begin ledr[3:0] = sw[3:0] - sw[7:4]; ledr[4] = 0; end
			3'b010: begin ledr[3:0] = ~sw[3:0]; ledr[4] = 0; end 
			3'b011: begin ledr[3:0] = sw[3:0] & sw[7:4]; ledr[4] = 0; end
			3'b100: begin ledr[3:0] = sw[3:0] | sw[7:4]; ledr[4] = 0; end
			3'b101: begin ledr[3:0] = sw[3:0] ^ sw[7:4]; ledr[4] = 0; end
			3'b110: begin if(sw[3:0] == sw[7:4]) ledr[4:0] = 5'b11111; else ledr[4:0] = 5'b00000; end
			3'b111: begin if(sw[3:0] > sw[7:4]) ledr[4:0] = 5'b11111; else ledr[4:0] = 5'b00000; end
			default: ledr[4:0] = 5'b11111;
			endcase	
		end
endmodule

