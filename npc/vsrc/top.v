module top (input clk,input rst, input [8:0]sw, output [3:0]ledr, output [7:0]seg0);
	always@(clk or rst or sw[8:0])
	if(sw[8])  begin
			if(sw[7]) begin ledr[2:0] = 3'b111; seg0[7:0] = 8'b000000010;  end
			else if(sw[6]) begin ledr[2:0] = 3'b110;  seg0[7:0] = 8'b10011111; end	 
			else if(sw[5]) begin ledr[2:0] = 3'b101;  seg0[7:0] = 8'b00100101; end	 
			else if(sw[4]) begin ledr[2:0] = 3'b100;  seg0[7:0] = 8'b00001101; end	 
			else if(sw[3]) begin ledr[2:0] = 3'b011;  seg0[7:0] = 8'b10011001; end	 
			else if(sw[2]) begin ledr[2:0] = 3'b010;  seg0[7:0] = 8'b01001001; end	 
			else if(sw[1]) begin ledr[2:0] = 3'b001;  seg0[7:0] = 8'b01000001; end	 
			else if(sw[0]) begin ledr[2:0] = 3'b000;  seg0[7:0] = 8'b00011111; end
			else begin ledr[3] = 0; 	seg0[7:0] = 8'b11111111; end end
	else 
		begin ledr[2:0] = 3'b111; seg0[7:0] = 8'b000000010;  end
endmodule

