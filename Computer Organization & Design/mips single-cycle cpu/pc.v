`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:06 04/24/2016 
// Design Name: 
// Module Name:    pc 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pc(
	input clk,
	input rst_n,
	input j_en,
	input bgtz_en,
	input PCSrc,
	input [16:0] offset,
	output reg [31:0] pc
);

always@(posedge clk or posedge PCSrc or negedge rst_n)
begin
	if(!rst_n)
		begin
			pc <= 0;
		end
	else if(PCSrc)
		begin
			if(j_en)
				begin
					if(!offset[16])
						pc <= pc & 17'b0 + offset + 1;
					else
						pc <= pc & 17'b0 - (~{15'h7fff, offset} + 1);
				end
			else if(bgtz_en)
				begin
					if(!offset[16])
						pc <= pc + offset;
					else
						pc <= pc - (~{15'h7fff, offset} + 1);
				end
		end
	else if(!PCSrc)
		pc <= pc + 1;
end

endmodule
