`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:58 12/26/2023 
// Design Name: 
// Module Name:    extender 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ·ûºÅÀ©Õ¹Æ÷
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module extender(
	imm16, ExtOp, 
	imm32
    );
	input [15:0]imm16;
	input [1:0]ExtOp;
	output reg[31:0]imm32;
	
	parameter ZERO = 2'b00;
	parameter SIGN = 2'b01;
	parameter LUI = 2'b10;
	
	always@(*)begin
		case(ExtOp)
			ZERO:imm32 = {16'b0, imm16};
			SIGN:imm32 = {{16{imm16[15]}}, imm16};
			LUI: imm32 = {imm16, 16'b0};
		endcase
	end
endmodule