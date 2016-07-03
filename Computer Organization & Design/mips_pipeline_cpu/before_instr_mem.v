`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:14 05/21/2016 
// Design Name: 
// Module Name:    before_instr_mem 
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
module before_instr_mem(
	input clk,
	input rst_n,
	input PCSrcD,
	input StallF,
	input [31:0] PC,
	output reg [31:0] PCF
    );

reg [31:0] pc;

always@(posedge clk or negedge rst_n)
begin
	if(!rst_n)
		begin
			PCF <= 0;
			pc <= 0;
		end
	else if(StallF)
		begin
			PCF <= pc;
		end
	else if(PCSrcD)
		begin
			PCF <= PC;
			pc <= PC;
		end
	else
		begin
			PCF <= pc;
			pc <= PC;
		end
end

endmodule
