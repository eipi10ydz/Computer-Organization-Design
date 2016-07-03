`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:13 05/22/2016 
// Design Name: 
// Module Name:    inter 
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
module inter(
	input clk,
	input interrupt_en,
	input over_flow,
	input iret
    );

always@(posedge clk)
begin
	if(interrupt_en)
		;
end

endmodule
