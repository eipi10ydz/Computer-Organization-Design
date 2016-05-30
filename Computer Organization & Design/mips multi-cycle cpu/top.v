`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:58:00 05/06/2016 
// Design Name: 
// Module Name:    top 
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
module top(
	input clk,
	input rst_n
    );

wire IorD;
wire Branch;
wire j_en;
wire bgtz_en;
wire RegDst;
wire ALUSrc;
wire [2:0] ALUControl;
wire MemtoReg;
wire RegWrite;
wire MemWrite;
wire [31:0] pc;
wire [31:0] pc_word;
wire [31:0] ir;
wire [4:0] r3_addr;
wire [31:0] r3_din;
wire [31:0] Memout;
wire [31:0] alu_out;
wire [31:0] r1_dout;
wire [31:0] r2_dout;
wire [31:0] alu_b;
wire PCSrc;
wire Zero;
wire clk_reg;
wire [17:0] offset;
wire [5:0] addrb;
wire [2:0] state;

parameter S0 = 0;

assign clk_reg = ~clk;
assign PCSrc = Branch & Zero;
assign r3_addr = RegDst ? ir[15:11] : ir[20:16];
assign r3_din = MemtoReg ? Memout : alu_out;
assign alu_b = ALUSrc ? ir[15:0] : r2_dout;
assign addrb = IorD ? alu_out[5:0] : pc_word[5:0];
assign pc_word = pc >> 2;
assign ir = (state == S0) ? Memout : ir;

sign_extend u_se(ir[31:26], ir[15:0], offset);
//sign_extend u_se(instr, imm, offset);

reg_file u_r(clk_reg, rst_n, ir[25:21], ir[20:16], r3_addr, r3_din, RegWrite, r1_dout, r2_dout);
//reg_file u_r(clk, rst_n, r1_addr, r2_addr, r3_addr, r3_din, r3_wr, r1_dout, r2_dout);

alu u_alu(r1_dout, alu_b, ALUControl, Zero, alu_out);
//alu u_alu(alu_a, alu_b, alu_op, zero, alu_out);

memory u_m(clk, MemWrite, alu_out[5:0], r2_dout, clk, addrb, Memout);
//memory u_m(clka, wea, addra, dina, clkb, addrb, doutb);

pc u_pc(clk, rst_n, j_en, bgtz_en, PCSrc, offset, pc);
//pc u_pc(clk, rst_n, j_en, bgtz_en, PCSrc, offset, pc);

cu u_cu(clk, rst_n, ir[31:26], state, IorD, Branch, j_en, bgtz_en, RegDst, ALUSrc, ALUControl, MemtoReg, RegWrite, MemWrite);
//cu u_cu(clk, instr, IorD, Branch, j_en, bgtz_en, RegDst, ALUSrc, ALUControl, MemtoReg, RegWrite, MemWrite);

endmodule
