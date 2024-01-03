`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:24:50 12/26/2023 
// Design Name: 
// Module Name:    mux 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// 源数据选择器
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux(
	a0, a1, op, 
	out
    );
	input op;
	input [31:0]a0, a1;
	output reg [31:0]out;
	
	always@(*)begin
		if(op) out = a1;
		else out = a0;
	end
endmodule
