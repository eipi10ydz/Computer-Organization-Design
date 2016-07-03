

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:49:05 05/17/2016 
// Design Name: 
// Module Name:    if_id 
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
module if_id(
	input clk,
	input CLR, //PCSrc
	input StallD, 
	input [31:0] PCPlus4F,
	input [31:0] instr,
	output reg [31:0] InstrD,
	output reg [31:0] PCPlus4D
);

reg [31:0] if_id [1:0];

parameter INSTR = 0;	//instruction
parameter PCP4 = 1;	//PC + 4

always@(posedge clk)
begin
	if(CLR)
		begin
			if_id[INSTR] <= 32'b0;
			if_id[PCP4] <= 32'b0;
			InstrD <= 32'b0;
			PCPlus4D <= 32'b0;
		end
	else if(StallD)
		begin
			InstrD <= if_id[INSTR];
			PCPlus4D <= if_id[PCP4];
		end
	else
		begin
			PCPlus4D <= if_id[PCP4];
			if_id[PCP4] <= PCPlus4F;
			InstrD <= if_id[INSTR];
			if_id[INSTR] <= instr;
		end
end
	
endmodule
