module top (input clk,input rst, input ps2_data, output [7:0]seg0, output [7:0]seg1);

	reg [7:0]a = 8'b00000001;
	wire [7:0] segs [15:0];
	assign segs[0] = 8'b11111101;
	assign segs[1] = 8'b01100000;
	assign segs[2] = 8'b11011010;
	assign segs[3] = 8'b11110010;
	assign segs[4] = 8'b01100110;
	assign segs[5] = 8'b10110110;
	assign segs[6] = 8'b10111110;
	assign segs[7] = 8'b11100000;
	assign segs[8] = 8'b11111110;
	assign segs[9] = 8'b11110110;
	assign segs[10] = 8'b11101110;
	assign segs[11] = 8'b00111110;
	assign segs[12] = 8'b10011100;
	assign segs[13] = 8'b01111010;
	assign segs[14] = 8'b10011110;
	assign segs[15] = 8'b10001110;

	always@(posedge ps2_data)
		 begin a[6:0] = a[7:1]; a[7] = a[0] ^~ a[3] ^~ a[2] ^~ a[4]; end	
	assign seg0[7:0] =~segs[a[3:0]]; 
	assign seg1[7:0] =~segs[a[7:4]];
endmodule

