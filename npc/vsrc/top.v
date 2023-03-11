module top (input clk,input rst, input br, input [1:0]sw, output [4:0]ledr);
	parameter S0 = 4'b0000;
	parameter S1 = 4'b0001;
	parameter S2 = 4'b0010;
	parameter S3 = 4'b0011;
	parameter S4 = 4'b0100;
	parameter S5 = 4'b0101;
	parameter S6 = 4'b0110;
	parameter S7 = 4'b0111;
	parameter S8 = 4'b1000;

	reg[3:0]  st_next;
	reg[3:0]  st_cur;
	reg in;

	// in_input
	alway@(posedge butc or  posedge butr)
		if(butc) in = 1'b1;
		 

	// state transfer
	always@(posedge clk or negedge rst) begin
		if(!rst) begin
			st_cur <= 4'b0000;
		end
		else begin
			st_cur <= st_next;
		end
	end

	// state switch
	always @() begin
		case(st_cur)
			A:
				case(in)
					1'b1 : st_next = S5;
					0'b1 : st_next = S1;
					default : st_next = IDLE;
				endcase
			B:
				case(in)
					1'b1 : st_next = S5;
					0'b1 : st_next = S2;
					default : st_next = IDLE;
				endcase
			C:
				case(in)
					1'b1 : st_next = S5;
					0'b1 : st_next = S3;
					default : st_next = IDLE;
				endcase
		   D:	
				case(in)
					1'b1 : st_next = S5;
					0'b1 : st_next = S4;
					default : st_next = IDLE;
				endcase
			E:
				case(in)
					1'b1 : st_next = S5;
					0'b1 : st_next = S4;
					default : st_next = IDLE;
				endcase
			F:
				case(in)
					1'b1 : st_next = S6;
					0'b1 : st_next = S1;
					default : st_next = IDLE;
				endcase
			G:
				case(in)
					1'b1 : st_next = S7;
					0'b1 : st_next = S1;
					default : st_next = IDLE;
				endcase
			H:
				case(in)
					1'b1 : st_next = S8;
					0'b1 : st_next = S1;
					default : st_next = IDLE;
				endcase
			I:
				case(in)
					1'b1 : st_next = S8;
					0'b1 : st_next = S1;
					default : st_next = IDLE;
				endcase
		endcase
	
	always @(posedge clk)
	begin
		if(!rst) begin
			out <= 1'b0;
		end
		else begin
		case(st_next)
		  S8 : out <= 1'b1;
		  S4 : out <= 1'b1;
		  defalut : out <= 1'b0;
	   endcase
endmodule


