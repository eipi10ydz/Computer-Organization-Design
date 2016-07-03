`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:29:29 05/19/2016 
// Design Name: 
// Module Name:    ex_mem 
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
module ex_mem(
	input clk,
	input RegWriteE,
	input MemtoRegE,
	input MemWriteE,
	input [31:0] ALUOutE,
	input [31:0] WriteDataE,
	input [4:0] WriteRegE,
	output reg RegWriteM,
	output reg MemtoRegM,
	output reg MemWriteM,
	output reg [31:0] ALUOutM,
	output reg [31:0] WriteDataM,
	output reg [4:0] WriteRegM
    );

reg RegWrite;
reg MemtoReg;
reg MemWrite;
reg [31:0] ALUOut;
reg [31:0] WriteData;
reg [4:0] WriteReg;

always@(posedge clk)
begin
	RegWriteM <= RegWrite;
	MemtoRegM <= MemtoReg;
	MemWriteM <= MemWrite;
	ALUOutM <= ALUOut;
	WriteDataM <= WriteData;
	WriteRegM <= WriteReg;
	
	RegWrite <= RegWriteE;
	MemtoReg <= MemtoRegE;
	MemWrite <= MemWriteE;
	ALUOut <= ALUOutE;
	WriteData <= WriteDataE;
	WriteReg <= WriteRegE;

//	RegWriteM <= RegWriteE;
//	MemtoRegM <= MemtoRegE;
//	MemWriteM <= MemWriteE;
//	ALUOutM <= ALUOutE;
//	WriteDataM <= WriteDataE;
//	WriteRegM <= WriteRegE;

end

endmodule
