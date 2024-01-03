`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:08 12/26/2023 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ‘ÀÀ„∆˜
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
	busA, busB, ALUctr, 
	zero, Alu_out, Addr
    );
	input [31:0]busA, busB;
	input [1:0]ALUctr;
	
	output [31:0]zero, Addr;
	output reg[31:0]Alu_out;
	
	parameter ADD = 2'b00;
	parameter SUB = 2'b01;
	parameter OR = 2'b10;
	
	always@(*)begin
		case(ALUctr)
			ADD:begin
				Alu_out = busA + busB;
			end
			SUB:begin
				Alu_out = busA - busB;
			end
			OR:begin
				Alu_out = busA | busB;
			end
		endcase
	end
	
	assign zero = Alu_out;
	assign Addr = Alu_out;
endmodule