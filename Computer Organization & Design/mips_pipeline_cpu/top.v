`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:36 05/17/2016 
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

wire StallD;
wire StallF;
wire FlushE;
wire [31:0] instr;
wire [31:0] InstrD;
wire RegWriteD, MemtoRegD, MemWriteD, ALUSrcD, RegDstD, BranchD;
wire [31:0] rd_1D;
wire [31:0] rd_2D;
wire [31:0] rd_1E;
wire [31:0] rd_2E;
wire [4:0] RsD;
wire [4:0] RtD;
wire [4:0] RdD;
wire [4:0] RsE;
wire [4:0] RtE;
wire [4:0] RdE;
wire [31:0] SignImmD;
wire [31:0] SignImmE;
wire [31:0] irD;
wire [31:0] irE;
wire [31:0] alu_a;
wire [31:0] alu_b;
wire over_flow;
wire PCSrcD, EqualD;
wire [4:0] WriteRegW;
wire RegWriteE, MemtoRegE, MemWriteE, ALUSrcE, RegDstE;
wire [31:0] ALUOutE;
wire [31:0] ALUOutM;
wire [31:0] WriteDataE;
wire [31:0] WriteDataM;
wire [31:0] r1_dout;
wire [31:0] r2_dout;
wire [31:0] ALUOutW;
wire [4:0] WriteRegE;
wire [4:0] WriteRegM;
wire RegWriteM, MemtoRegM, MemWriteM;
wire RegWriteW, MemtoRegW;
wire [31:0] ReadDataM;
wire [31:0] ReadDataW;
wire [31:0] PC;
wire [31:0] PCF;
wire [31:0] PCPlus4F;
wire [31:0] PCPlus4D;
wire [31:0] ResultW;
wire ForwardAD, ForwardBD;
wire [1:0] ForwardAE;
wire [1:0] ForwardBE;
wire bgtz_en, bgez_en, blez_en, j_en, beq_en, bne_en, jr_en, bltz_en;

reg [3:0] cnt;

assign rd_1D = ForwardAD ? ALUOutM : r1_dout;
assign rd_2D = ForwardBD ? ALUOutM : r2_dout;
assign alu_a = (ForwardAE == 2'b00) ? rd_1E : ((ForwardAE == 2'b01) ? ResultW : ALUOutM);
assign alu_b = ALUSrcE ? SignImmE : ((ForwardBE == 2'b00) ? rd_2E : ((ForwardBE == 2'b01) ? ResultW : ALUOutM));
assign WriteRegE = RegDstE ? RdE : RtE;
assign ResultW = MemtoRegW ? ReadDataW : ALUOutW; 
assign bgtz_en = (InstrD[31:26] == 6'b000111 && InstrD[20:16] == 5'b00000) && (rd_1D > 0) && (!rd_1D[31]);
assign bgez_en = (InstrD[31:26] == 6'b000001 && InstrD[20:16] == 5'b00001) && (!rd_1D[31]);
assign blez_en = (InstrD[31:26] == 6'b000110 && InstrD[20:16] == 5'b00000) && (rd_1D[31] || rd_1D == 32'b0);
assign bltz_en = (InstrD[31:26] == 6'b000001 && InstrD[20:16] == 5'b00000) && (rd_1D[31]);
assign j_en = (InstrD[31:26] == 6'b000010);
assign EqualD = rd_1D == rd_2D;
assign beq_en = EqualD && (InstrD[31:26] == 6'b000100);
assign bne_en = (!EqualD) && (InstrD[31:26] == 6'b000101);
assign jr_en = (InstrD[31:26] == 6'b000000) && (InstrD[5:0] == 6'b001000);
assign PCSrcD = (cnt >= 3) ? (BranchD && (beq_en || bgtz_en || bgez_en || jr_en || j_en || bne_en || blez_en || bltz_en)) : 1'b0;
assign PCPlus4F = PCF + 4;
assign PC = PCSrcD ? SignImmD : PCPlus4F;
assign RsD = InstrD[25:21];
assign RtD = InstrD[20:16];
assign RdD = InstrD[15:11];
assign WriteDataE = (ForwardBE == 2'b00) ? rd_2E : ((ForwardBE == 2'b01) ? ResultW : ALUOutM);

//ex_mem(clk, RegWriteE, MemtoRegE, MemWriteE, ALUOutE, WriteDataE, WriteRegE, RegWriteM, MemtoRegM, MemWriteM, ALUOutM, WriteDataM, WriteRegM);
ex_mem u_ex_mem(clk, RegWriteE, MemtoRegE, MemWriteE, ALUOutE, WriteDataE, WriteRegE, RegWriteM, MemtoRegM, MemWriteM, ALUOutM, WriteDataM, WriteRegM);

//id_ex(clk, RegWriteD, MemtoRegD, MemWriteD, ALUSrcD, RegDstD, rd_1D, rd_2D, RsD, RtD, RdD, SignImmD, irD, FlushE, RegWriteE, MemtoRegE, MemWriteE, ALUSrcE, RegDstE, rd_1E, rd_2E, RsE, RtE, RdE, SignImmE, irE);
id_ex u_id_ex(clk, RegWriteD, MemtoRegD, MemWriteD, ALUSrcD, RegDstD, rd_1D, rd_2D, RsD, RtD, RdD, SignImmD, irD, FlushE, RegWriteE, MemtoRegE, MemWriteE, ALUSrcE, RegDstE, rd_1E, rd_2E, RsE, RtE, RdE, SignImmE, irE);

//before_instr_mem(clk, rst_n, PCSrcD, StallF, PC, PCF);
before_instr_mem u_bim(clk, rst_n, PCSrcD, StallF, PC, PCF);

//data_mem(clka, wea, addra, dina, douta);
//data_mem u_dm(clk, MemWriteM, ALUOutM[8:0], WriteDataM, ReadDataM);

//distributed
//data_mem(a, d, clk, we, spo);
data_mem u_dm(ALUOutM[8:0], WriteDataM, clk, MemWriteM, ReadDataM);

//instr_mem(a, spo);
instr_mem u_im(PCF[10:2], instr);

//if_id(clk, CLR, StallD, PCPlus4F, instr, InstrD, PCPlus4D);
if_id u_if_id(clk, PCSrcD, StallD, PCPlus4F, instr, InstrD, PCPlus4D);

//cu(rst_n, cnt, InstrD, irD, RegWriteD, MemtoRegD, MemWriteD, ALUSrcD, RegDstD, BranchD);
cu u_cu(rst_n, cnt, InstrD, irD, RegWriteD, MemtoRegD, MemWriteD, ALUSrcD, RegDstD, BranchD);

//alu(alu_a, alu_b, ir, over_flow, alu_out);
alu u_alu(alu_a, alu_b, irE, over_flow, ALUOutE);

//mem_wb(clk, RegWriteM, MemtoRegM, ReadDataM, ALUOutM, WriteRegM, RegWriteW, MemtoRegW, ReadDataW, ALUOutW, WriteRegW);
mem_wb u_mem_wb(clk, RegWriteM, MemtoRegM, ReadDataM, ALUOutM, WriteRegM, RegWriteW, MemtoRegW, ReadDataW, ALUOutW, WriteRegW);

//reg_file(clk, rst_n, r1_addr, r2_addr, r3_addr, r3_din, r3_wr, r1_dout, r2_dout);  
reg_file u_reg_file(clk, rst_n, InstrD[25:21], InstrD[20:16], WriteRegW, ResultW, RegWriteW, r1_dout, r2_dout);

//sign_extend(instr, rd_1D, PCPlus4D, imm, offset);
sign_extend u_sign_extend(InstrD, rd_1D, PCPlus4D, InstrD[15:0], SignImmD);

//hazard_unit(rst_n, pc, RegWriteE, RegWriteM, RegWriteW, MemtoRegE, MemtoRegM, BranchD, WriteRegE, WriteRegM, WriteRegW, RsD, RtD, RsE, RtE, StallF, StallD, FlushE, ForwardAD, ForwardBD, ForwardAE, ForwardBE);
hazard_unit u_hazard_unit(rst_n, cnt, RegWriteE, RegWriteM, RegWriteW, MemtoRegE, MemtoRegM, BranchD, WriteRegE, WriteRegM, WriteRegW, RsD, RtD, RsE, RtE, StallF, StallD, FlushE, ForwardAD, ForwardBD, ForwardAE, ForwardBE);

always@(posedge clk or negedge rst_n)
begin
	if(!rst_n)
		cnt <= 0;
	else if(j_en || jr_en || (PCSrcD && (bgtz_en || beq_en || bne_en || bgez_en || blez_en || bltz_en)))
		cnt <= 7;
	else if(cnt == 7)
		cnt <= 8;
	else if(cnt == 8)
		cnt <= 6;
	else if(cnt < 6)
		cnt <= cnt + 1;
	else if(cnt == 6)
		cnt <= cnt;
end

endmodule
