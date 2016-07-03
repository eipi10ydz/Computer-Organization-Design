`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:05:55 05/07/2016 
// Design Name: 
// Module Name:    alu 
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
module alu(
	input [31:0] alu_a,
   input [31:0] alu_b,
	input [31:0] ir,
	output reg over_flow,
   output reg [31:0] alu_out
);

//操作码均为6'b000000，下面都是func
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

//下面都是操作码
parameter ADDI = 6'b001000;
parameter ANDI = 6'b001100;
parameter XORI = 6'b001110;
parameter SLTI = 6'b001010;
parameter LUI = 6'b001111;
parameter ORI = 6'b001101;
parameter SW = 6'b101011;
parameter LW = 6'b100011;

wire [4:0] shamt;
assign shamt = ir[10:6];

always@(*)
	case(ir[31:26])
		6'b0:
			case(ir[5:0])
				SUB:
					begin
						alu_out <= alu_a + (~alu_b) + 1;
						if(!alu_a[31] && alu_b[31] && alu_out[31])
							over_flow <= 1;
						else if(alu_a[31] && !alu_b[31] && !alu_out[31])
							over_flow <= 1;
						else
							over_flow <= 0;
					end
				SUBU:
					begin
						alu_out <= alu_a + (~alu_b) + 1;
						over_flow <= 0;
					end
				AND:
					begin
						alu_out <= alu_a & alu_b;
						over_flow <= 0;
					end
				OR:
					begin
						alu_out <= alu_a | alu_b;
						over_flow <= 0;
					end
				XOR:
					begin
						alu_out <= alu_a ^ alu_b;
						over_flow <= 0;
					end
				NOR:
					begin
						alu_out <= ~(alu_a | alu_b);
						over_flow <= 0;
					end
				ADD:
					begin
						alu_out <= alu_a + alu_b;
						if(!alu_a[31] && !alu_b[31] && alu_out[31])
							over_flow <= 1;
						else if(alu_a[31] && alu_b[31] && !alu_out[31])
							over_flow <= 1;
						else
							over_flow <= 0;
					end
				ADDU:
					begin
						alu_out <= alu_a + alu_b;
						over_flow <= 0;
					end
				SLL:
					begin
						alu_out <= alu_b << shamt;
						over_flow <= 0;
					end
				SRL:
					begin
						alu_out <= alu_b >> shamt;
						over_flow <= 0;
					end
				SLLV:
					begin
						alu_out <= alu_b << alu_a;
						over_flow <= 0;
					end
				SRLV:
					begin
						alu_out <= alu_b >> alu_a;
						over_flow <= 0;
					end
				SRA:
					begin
						if(alu_b[31])
							begin
								alu_out <= 32'hFFFFFFFF;
								if(shamt < 32)
									begin
										alu_out = alu_out << (32 - shamt);
										alu_out = alu_out + alu_b >> shamt;
									end
							end
						else
							begin
								alu_out <= alu_b >> shamt;
							end
						over_flow <= 0;
					end
				SRAV:
					begin
						if(alu_b[31])
							begin
								alu_out <= 32'hFFFFFFFF;
								if(alu_a < 32)
									begin
										alu_out = alu_out << (32 - alu_a);
										alu_out = alu_out + alu_b >> alu_a;
									end
							end
						else
							begin
								alu_out <= alu_b >> alu_a;
							end
						over_flow <= 0;	
					end
				SLTU:
					begin
						if(alu_a < alu_b)
							alu_out = 1;
						else
							alu_out = 0;
						over_flow = 0;
					end
				SLT:
					begin
						if(alu_a[31] && !alu_b[31])
							alu_out = 1;
						else if(!alu_a[31] && alu_b[31])
							alu_out = 0;
						else
							begin
								alu_out = alu_a + (~alu_b) + 1;
								if(alu_out[31])
									alu_out = 1;
								else
									alu_out = 0;
							end
						over_flow <= 0;	
					end
				//NOP不需要处理，因为等价于sll $0, $0, 0
				//JR放到前面处理，因为是跳转
			endcase
		ADDI:
			begin
				alu_out <= alu_a + alu_b;
				if(!alu_a[31] && !alu_b[31] && alu_out[31])
					over_flow <= 1;
				else if(alu_a[31] && alu_b[31] && !alu_out[31])
					over_flow <= 1;
				else
					over_flow <= 0;
			end
		ANDI:
			begin
				alu_out = alu_a & alu_b;
				over_flow = 0;
			end
		XORI:
			begin
				alu_out = alu_a ^ alu_b;
				over_flow = 0;
			end
		SLTI:
			begin
				if(alu_a[31] && !alu_b[31])
					alu_out = 1;
				else if(!alu_a[31] && alu_b[31])
					alu_out = 0;
				else
					begin
						alu_out = alu_a + (~alu_b) + 1;
						if(alu_out[31])
							alu_out = 1;
						else
							alu_out = 0;
					end
				over_flow = 0;
			end
		LUI:
			begin
				alu_out = alu_b << 16;
				over_flow = 0;
			end
		ORI:
			begin
				alu_out = alu_a | alu_b;
				over_flow = 0;
			end
		LW:
			begin
				alu_out <= alu_a + alu_b;
				over_flow <= 0;
			end
		SW:
			begin
				alu_out <= alu_a + alu_b;
				over_flow <= 0;
			end	
	endcase
endmodule
