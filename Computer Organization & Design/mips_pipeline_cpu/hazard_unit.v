`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:37 05/20/2016 
// Design Name: 
// Module Name:    hazard_unit 
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
module hazard_unit(
	input rst_n,
	input [3:0] cnt,
	input RegWriteE,
	input RegWriteM,
	input RegWriteW,
	input MemtoRegE,
	input MemtoRegM,
	input BranchD,
	input [4:0] WriteRegE,
	input [4:0] WriteRegM,
	input [4:0] WriteRegW,
	input [4:0] RsD,
	input [4:0] RtD,
	input [4:0] RsE,
	input [4:0] RtE,
/*	output StallF,
	output StallD,
	output FlushE,
	output ForwardAD,
	output ForwardBD,
	output [1:0] ForwardAE,
	output [1:0] ForwardBE
*/ output reg StallF,
	output reg StallD,
	output reg FlushE,
	output reg ForwardAD,
	output reg ForwardBD,
	output reg [1:0] ForwardAE,
	output reg [1:0] ForwardBE
    );
	 
reg lwStall, branchStall;

/*
wire lwStall, branchStall;

assign lwStall = ((RsD == RtE) || (RtD == RtE)) && MemtoRegE;
assign branchStall = (BranchD && RegWriteE && ((WriteRegE == RsD) || (WriteRegE == RtD))) || (BranchD && MemtoRegM && ((WriteRegM == RsD) || (WriteRegM == RtD)));
assign FlushE = lwStall || branchStall;
assign StallD = FlushE;
assign StallF = StallD;

assign ForwardAD = (RsD != 0) && (WriteRegM == RsD) && RegWriteM;
assign ForwardBD = (RtD != 0) && (WriteRegM == RtD) && RegWriteM;
assign ForwardAE = ((RsE != 0) && (WriteRegM == RsE) && RegWriteM) ? 2'b10 : (((RsE != 0) && (WriteRegW == RsE) && RegWriteW) ? 2'b01 : 2'b00);
assign ForwardBE = ((RtE != 0) && (WriteRegM == RtE) && RegWriteM) ? 2'b10 : (((RtE != 0) && (WriteRegW == RtE) && RegWriteW) ? 2'b01 : 2'b00);
*/

always@(*)
begin
	if(!rst_n)
		begin
			StallF = 0;
			StallD = 0;
			FlushE = 0;
			ForwardAD = 0;
			ForwardBD = 0;
			ForwardAE = 0;
			ForwardBE = 0;
		end
	else if(cnt == 7)
		begin
			StallF = 0;
			StallD = 1;
			FlushE = 1;
			ForwardAD = 0;
			ForwardBD = 0;
			ForwardAE = 0;
			ForwardBE = 0;
		end
	else if(cnt == 8)
		begin
			StallF = 0;
			StallD = 0;
			FlushE = 1;
			ForwardAD = 0;
			ForwardBD = 0;
			ForwardAE = 0;
			ForwardBE = 0;
		end 
	else if(cnt == 6)
		begin
			lwStall = ((RsD == RtE) || (RtD == RtE)) && MemtoRegE;
			branchStall = (BranchD && RegWriteE && ((WriteRegE == RsD) || (WriteRegE == RtD))) || (BranchD && MemtoRegM && ((WriteRegM == RsD) || (WriteRegM == RtD)));
			FlushE = lwStall || branchStall;
			FlushE = lwStall;
			StallD = FlushE;
			StallF = StallD;
			ForwardAD = (RsD != 0) && (WriteRegM == RsD) && RegWriteM;
			ForwardBD = (RtD != 0) && (WriteRegM == RtD) && RegWriteM;
			ForwardAE = ((RsE != 0) && (WriteRegM == RsE) && RegWriteM) ? 2'b10 : (((RsE != 0) && (WriteRegW == RsE) && RegWriteW) ? 2'b01 : 2'b00);
			ForwardBE = ((RtE != 0) && (WriteRegM == RtE) && RegWriteM) ? 2'b10 : (((RtE != 0) && (WriteRegW == RtE) && RegWriteW) ? 2'b01 : 2'b00);
		/*	if((((RsD == RtE) || (RtD == RtE)) && MemtoRegE) || ((RsD == WriteRegM || RsD == WriteRegM) || (RtD == WriteRegM || RtD == WriteRegM)) && RegWriteM || ((RsD == WriteRegW || RsD == WriteRegW) || (RtD == WriteRegW || RtD == WriteRegW)) && RegWriteW)
				begin
					FlushE <= 1;
					StallD <= 1;
					StallF <= 1;
				end
			else
				begin
					FlushE <= 0;
					StallD <= 0;
					StallF <= 0;
				end */
		end
end

endmodule
