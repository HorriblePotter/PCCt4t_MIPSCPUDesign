`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:21:28 12/26/2023 
// Design Name: 
// Module Name:    mux_RegDst 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ¼Ä´æÆ÷Ð´µØÖ·Ñ¡ÔñÆ÷
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux_RegDst(
	rd, rt, RegDst, 
	rw
    );
	input [4:0]rd, rt;
	input RegDst;
	output reg [4:0]rw;
	always@(*)begin
		if(RegDst) rw = rt;
		else rw = rd;
	end
endmodule
