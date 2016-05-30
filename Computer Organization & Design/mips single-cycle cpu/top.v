`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:53:10 04/23/2016 
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
wire clk_mem;
wire [17:0] offset;

assign clk_mem = ~clk;
assign PCSrc = Branch & Zero;
assign r3_addr = RegDst ? ir[15:11] : ir[20:16];
assign r3_din = MemtoReg ? Memout : alu_out;
assign alu_b = ALUSrc ? ir[15:0] : r2_dout;
assign offset = ir[15:0] << 1;

reg_file u_r(clk, rst_n, ir[25:21], ir[20:16], r3_addr, r3_din, RegWrite, r1_dout, r2_dout);
//reg_file u_r(clk, rst_n, r1_addr, r2_addr, r3_addr, r3_din, r3_wr, r1_dout, r2_dout);

//data_mem u_dm(clk_mem, MemWrite, alu_out[5:0], alu_b, clk, 0, alu_out[5:0], Memout);
//data_mem u_dm(clka, wea, addra, dina, clkb, rstb, addrb, doutb);
mem_data u_dm(alu_out[5:0], r2_dout, clk_mem, MemWrite, Memout);
//mem_data u_dm(a, d, clk, we, spo);

//instr_mem u_im(clk, 0, 1, pc[5:0], ir);
//instr_mem u_im(clka, rsta, ena, addra, ir);
mem_instr u_im(pc[5:0], ir);
//mem_instr u_im(a, spo); 

alu u_alu(r1_dout, alu_b, ALUControl, Zero, alu_out);
//alu u_alu(alu_a, alu_b, alu_op, zero, alu_out);

pc u_pc(clk, rst_n, j_en, bgtz_en, PCSrc, offset, pc);
//pc u_pc(clk, rst_n, j_en, bgtz_en, PCSrc, offset, pc);

cu u_cu(ir[31:26], Branch, j_en, bgtz_en, RegDst, ALUSrc, ALUControl, MemtoReg, RegWrite, MemWrite);
//cu u_cu(instr, Branch, j_en, bgtz_en, RegDst, ALUSrc, ALUControl, MemtoReg, RegWrite, MemWrite);

endmodule
