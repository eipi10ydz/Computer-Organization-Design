`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:03:27 04/24/2016 
// Design Name: 
// Module Name:    cu 
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
module cu(
	input [5:0] instr,
	output reg Branch,
	output reg j_en,
	output reg bgtz_en,
	output reg RegDst,
	output reg ALUSrc,
	output reg [2:0] ALUControl,
	output reg MemtoReg,
	output reg RegWrite,
	output reg MemWrite
);


parameter ADD = 6'b000000;
parameter ADDI = 6'b001000;
parameter SW = 6'b101011;
parameter LW = 6'b100011;
parameter BGTZ = 6'b000111;
parameter J = 6'b000010;
parameter LUI = 6'b001111;
parameter ORI = 6'b001101;

always@(*)
	case(instr)
		ADD:
			begin
				RegDst <= 1;
				ALUSrc <= 0;
				ALUControl <= 1; 
				Branch <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				RegWrite <= 1;
				j_en <= 0;
				bgtz_en <= 0;
			end
		ADDI:
			begin
				RegDst <= 0;
				ALUSrc <= 1;
				ALUControl <= 1;
				Branch <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				RegWrite <= 1;
				j_en <= 0;
				bgtz_en <= 0;
			end
		SW:
			begin
				RegDst <= 1;
				ALUSrc <= 1;
				ALUControl <= 1;
				Branch <= 0;
				RegWrite <= 0;
				MemtoReg <= 0;
				MemWrite <= 1;
				j_en <= 0;
				bgtz_en <= 0;
			end
		LW:
			begin
				RegDst <= 0;
				ALUSrc <= 1;
				ALUControl <= 1;
				Branch <= 0;
				MemWrite <= 0;
				MemtoReg <= 1;
				RegWrite <= 1;		
				j_en <= 0;
				bgtz_en <= 0;
			end
		BGTZ:
			begin
				RegDst <= 1;
				ALUSrc <= 0;
				ALUControl <= 1;
				Branch <= 1;
				RegWrite <= 0;	
				MemWrite <= 0;
				MemtoReg <= 0;
				bgtz_en <= 1;
				j_en <= 0;
			end
		J:
			begin
				RegDst <= 1;
				ALUSrc <= 0;
				ALUControl <= 7;
				Branch <= 1;
				RegWrite <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				j_en <= 1;
				bgtz_en <= 0;
			end
		LUI:
			begin
				RegDst <= 0;
				ALUSrc <= 1;
				ALUControl <= 0;
				Branch <= 0;  
				RegWrite <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				RegWrite <= 1;
				j_en <= 0;
				bgtz_en <= 0;
			end
		ORI:
			begin
				RegDst <= 1;
				ALUSrc <= 1;
				ALUControl <= 4;
				Branch <= 0;
				MemWrite <= 0;
				MemtoReg <= 0;
				RegWrite <= 1;
				j_en <= 0;
				bgtz_en <= 0;
			end
	endcase


endmodule
