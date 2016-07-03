`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:52:18 05/19/2016 
// Design Name: 
// Module Name:    id_ex 
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
module id_ex(
	input clk,
	input RegWriteD,
	input MemtoRegD,
	input MemWriteD,
//	input [2:0] ALUControlD,
	input ALUSrcD,
	input RegDstD,
	input [31:0] rd_1D,	//选择旁路还是r1_dout
	input [31:0] rd_2D,	//选择旁路还是r2_dout
	input [4:0] RsD,
	input [4:0] RtD,
	input [4:0] RdD,
	input [31:0] SignImmD,
	input [31:0] irD,
	input FlushE,	//CLR
	output reg RegWriteE,
	output reg MemtoRegE,
	output reg MemWriteE,
//	output reg [2:0] ALUControlE,
	output reg ALUSrcE,
	output reg RegDstE,
	output reg [31:0] rd_1E,
	output reg [31:0] rd_2E,
	output reg [4:0] RsE,
	output reg [4:0] RtE,
	output reg [4:0] RdE,
	output reg [31:0] SignImmE,
	output reg [31:0] irE
    );

reg RegWrite;
reg MemtoReg;
reg MemWrite;
reg [2:0] ALUControl;
reg ALUSrc;
reg RegDst;
reg [31:0] rd_1;
reg [31:0] rd_2;
reg [4:0] Rs;
reg [4:0] Rt;
reg [4:0] Rd;
reg [31:0] SignImm;
reg [31:0] ir;

always@(posedge clk)
begin
	if(FlushE)
		begin

			RegWrite <= 0;
			MemtoReg <= 0;
			MemWrite <= 0;
//			ALUControl <= 3'b0;
			ALUSrc <= 0;
			RegDst <= 0;
			rd_1 <= 32'b0;
			rd_2 <= 32'b0;
			Rs <= 5'b0;
			Rt <= 5'b0;
			Rd <= 5'b0;
			SignImm <= 32'b0;
			ir <= 0;

			RegWriteE <= 0;
			MemtoRegE <= 0;
			MemWriteE <= 0;
//			ALUControl <= 3'b0;
			ALUSrcE <= 0;
			RegDstE <= 0;
			rd_1E <= 32'b0;
			rd_2E <= 32'b0;
			RsE <= 5'b0;
			RtE <= 5'b0;
			RdE <= 5'b0;
			SignImmE <= 16'b0;
			irE <= 0;
		end
	else
		begin
//			RegWriteE <= RegWrite;
//			MemtoRegE <= MemtoReg;
//			MemWriteE <= MemWrite;
////			ALUControlE <= ALUControl;
//			ALUSrcE <= ALUSrc;
//			RegDstE <= RegDst;
//			rd_1E <= rd_1;
//			rd_2E <= rd_2;			
//			RsE <= Rs;
//			RtE <= Rt;
//			RdE <= Rd;
//			SignImmE <= SignImm;
//			irE <= ir;
//						
//			RegWrite <= RegWriteD;
//			MemtoReg <= MemtoRegD;
//			MemWrite <= MemWriteD;
////			ALUControl <= ALUControlD;
//			ALUSrc <= ALUSrcD;
//			RegDst <= RegDstD;
//			rd_1 <= rd_1D;
//			rd_2 <= rd_2D;
//			Rs <= RsD;
//			Rt <= RtD;
//			Rd <= RdD;
//			SignImm <= SignImmD;
//			ir <= irD;
//			
			RegWriteE <= RegWriteD;
			MemtoRegE <= MemtoRegD;
			MemWriteE <= MemWriteD;
//			ALUControlE <= ALUControl;
			ALUSrcE <= ALUSrcD;
			RegDstE <= RegDstD;
			rd_1E <= rd_1D;
			rd_2E <= rd_2D;
			RsE <= RsD;
			RtE <= RtD;
			RdE <= RdD;
			SignImmE <= SignImmD;
			irE <= irD;
		end
end

endmodule
