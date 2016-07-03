`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:14:57 05/20/2016 
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
	input rst_n,
	input [3:0] cnt,
	input [31:0] InstrD,
	output [31:0] irD,
	output reg RegWriteD,
	output reg MemtoRegD,
	output reg MemWriteD,
//	output reg [2:0] ALUControlD,
	output reg ALUSrcD,
	output reg RegDstD,
	output reg BranchD
    );

parameter ADDI = 6'b001000;
parameter SW = 6'b101011;
parameter LW = 6'b100011;
parameter BGTZ = 6'b000111;
parameter BLEZ = 6'b000110;
parameter BGEZ = 6'b000001;
parameter J = 6'b000010;
parameter ANDI = 6'b001100;
parameter BNE = 6'b000101;
parameter LUI = 6'b001111;
parameter ORI = 6'b001101;
parameter SLTI = 6'b001010;
parameter SLTIU = 6'b001011;
parameter BEQ = 6'b000100;
parameter XORI = 6'b001110;
parameter SUB = 6'b100010; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SUBU = 6'b100011; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter AND = 6'b100100; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter OR = 6'b100101; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter XOR = 6'b100110; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter NOR = 6'b100111; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter ADD = 6'b100000; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter ADDU = 6'b100001; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SLL = 6'b000000; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SRL = 6'b000010; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SLLV = 6'b000100; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SRLV = 6'b000110; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SRA = 6'b000011; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SRAV = 6'b000111;//注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SLTU = 6'b101011; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter SLT = 6'b101010; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter NOP = 6'b000000; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav
parameter JR = 6'b001000; //注意是后面的操作码区分add, sub, addu, subu, and, or, xor, nor, jr, nop, slt, sltu, sll, srl, sllv, srlv, sra, srav

assign irD = InstrD;

always@(*)
begin
	if(!rst_n)
		begin
			RegWriteD <= 0;
			MemtoRegD <= 0;
			MemWriteD <= 0;
			ALUSrcD <= 0;
			RegDstD <= 0;
			BranchD <= 0;
		end
	else if(cnt >= 2)
		begin
			case(InstrD[31:26])
				BEQ:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 0;
						RegDstD <= 0;
						BranchD <= 1;
					end
				ADDI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				ANDI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				XORI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				SLTI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				LUI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				ORI:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 0;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				SW:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 1;
						ALUSrcD <= 1;
						RegDstD <= 1; //不影响...
						BranchD <= 0;
					end
				LW:
					begin
						RegWriteD <= 1;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 0;
					end
				BGTZ:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 1;
					end
				J:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 1;
					end
				BNE:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 1;
					end
				BLEZ:
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 1;
					end
				BGEZ: //BLTZ
					begin
						RegWriteD <= 0;
						MemtoRegD <= 1;
						MemWriteD <= 0;
						ALUSrcD <= 1;
						RegDstD <= 0;
						BranchD <= 1;
					end
				6'b0:
					begin
						case(InstrD[5:0])
							SUB:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SUBU:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							ADD:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							AND:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							OR:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							XOR:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							NOR:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							ADDU:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SLL:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SRL:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SLLV:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SRLV:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SRA:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SRAV:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SLTU:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							SLT:
								begin
									RegWriteD <= 1;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 0;
								end
							//NOP相当于SLL $0, $0, 0
							JR:
								begin
									RegWriteD <= 0;
									MemtoRegD <= 0;
									MemWriteD <= 0;
									ALUSrcD <= 0;
									RegDstD <= 1;
									BranchD <= 1;
								end
						endcase
					end
			endcase
		end
end
endmodule
