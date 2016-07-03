
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:00:31 05/20/2016 
// Design Name: 
// Module Name:    mem_wb 
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
module mem_wb(
	input clk,
	input RegWriteM,
	input MemtoRegM,
	input [31:0] ReadDataM,
	input [31:0] ALUOutM,
	input [4:0] WriteRegM,
	output reg RegWriteW,
	output reg MemtoRegW,
	output reg [31:0] ReadDataW,
	output reg [31:0] ALUOutW,
	output reg [4:0] WriteRegW
    );

reg RegWrite;
reg MemtoReg;
reg [31:0] ReadData;
reg [31:0] ALUOut;
reg [4:0] WriteReg;

always@(posedge clk)
begin
	RegWriteW <= RegWrite;
	MemtoRegW <= MemtoReg;
	ReadDataW <= ReadData;
	ALUOutW <= ALUOut;
	WriteRegW <= WriteReg;
	
	RegWrite <= RegWriteM;
	MemtoReg <= MemtoRegM;
	ReadData <= ReadDataM;
	ALUOut <= ALUOutM;
	WriteReg <= WriteRegM;

//	RegWriteW <= RegWriteM;
//	MemtoRegW <= MemtoRegM;
//	ReadDataW <= ReadDataM;
//	ALUOutW <= ALUOutM;
//	WriteRegW <= WriteRegM;
end

endmodule
