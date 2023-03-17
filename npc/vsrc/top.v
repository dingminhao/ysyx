module top (input clk, input rst,input set1, input set2, output [4:0]ledr);
	parameter s0 = 4'b0000;
	parameter s1 = 4'b0001;
	parameter s2 = 4'b0010;
	parameter s3 = 4'b0011;
	parameter s4 = 4'b0100;
	parameter s5 = 4'b0101;
	parameter s6 = 4'b0110;
	parameter s7 = 4'b0111;
	parameter s8 = 4'b1000;

	reg[3:0]  st_next;
	reg[3:0]  st_cur;
	reg in;
	reg[4:0] out;
	// in_input
	always @ (posedge set1)
		in <= set2;
		

	// state transfer
	always @ (posedge set1 or negedge rst) begin
		if(!rst) begin
			st_cur <= 4'b0000;
		end
		else begin
			st_cur <= st_next;
		end
	end

	// state switch
	always@(posedge set1)
		case(st_cur)
			s0:
				case(in)
					1'b1 : st_next = s5;
					0'b1 : st_next = s1;
					default : st_next = s0;
				endcase
			s1:
				case(in)
					1'b1 : st_next = s5;
					0'b1 : st_next = s2;
					default : st_next = s1;
				endcase
			s2:
				case(in)
					1'b1 : st_next = s5;
					0'b1 : st_next = s3;
					default : st_next = s2;
				endcase
		   s3:	
				case(in)
					1'b1 : st_next = s5;
					0'b1 : st_next = s4;
					default : st_next = s3;
				endcase
			s4:
				case(in)
					1'b1 : st_next = s5;
					0'b1 : st_next = s4;
					default : st_next = s4;
				endcase
			s5:
				case(in)
					1'b1 : st_next = s6;
					0'b1 : st_next = s1;
					default : st_next = s5;
				endcase
			s6:
				case(in)
					1'b1 : st_next = s7;
					0'b1 : st_next = s1;
					default : st_next = s6;
				endcase
			s7:
				case(in)
					1'b1 : st_next = s8;
					0'b1 : st_next = s1;
					default : st_next = s7;
				endcase
			s8:
				case(in)
					1'b1 : st_next = s8;
					0'b1 : st_next = s1;
					default : st_next = s8;
				endcase
			default : st_next = st_cur;
		endcase
	
	always @ (posedge set1)
			case(st_next)
		 	 s8 : begin out[4] <= 1'b1;out[3:0] <= st_next; end
		 	 s4 : begin out[4] <= 1'b1;out[3:0] <= st_next; end
		 	 default : begin out[4] <= 1'b0;out[3:0] <= st_cur; end
	   	endcase
	assign ledr[4:0] = out[4:0];
endmodule


