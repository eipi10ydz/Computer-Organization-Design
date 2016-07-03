`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:06:13 05/07/2016 
// Design Name: 
// Module Name:    sign_extend 
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
module sign_extend(
	input [31:0] instr,
	input [31:0] rd_1D,
	input [31:0] PCPlus4D,
	input [15:0] imm,
	output reg [31:0] offset
);

parameter BGTZ = 6'b000111;
parameter J = 6'b000010;
parameter BEQ = 6'b000100;
parameter BNE = 6'b000101;
parameter BLEZ = 6'b000110;
parameter BLTZ = 6'b000001;

parameter JR = 6'b001000; //´Ë´¦Îªfunct

always@(*)
begin
	case(instr[31:26])
		BGTZ:
			offset <= {{14{imm[15]}} , imm, 2'b00} + PCPlus4D;
		BLEZ:
			offset <= {{14{imm[15]}} , imm, 2'b00} + PCPlus4D;
		BLTZ: //BGEZ
			offset <= {{14{imm[15]}} , imm, 2'b00} + PCPlus4D;
		J:
			offset <= ({{14{imm[15]}} , imm, 2'b00} | {PCPlus4D[31:28], 28'b0});
		BEQ:
			offset <= {{14{imm[15]}} , imm, 2'b00} + PCPlus4D;
		BNE:
			offset <= {{14{imm[15]}} , imm, 2'b00} + PCPlus4D;
		6'b0:
			case(instr[5:0])
				JR:
					offset <= rd_1D;
			endcase
		default:
			offset <= {{16{imm[15]}} , imm};
	endcase
end

endmodule
