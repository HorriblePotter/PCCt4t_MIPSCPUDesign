`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:11 12/25/2023 
// Design Name: 
// Module Name:    GPR 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ¼Ä´æÆ÷¶Ñ
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module GPR(
	RegWr, ra, rb, rw, busW, clk, rst, 
	busA, busB, Data_in
   );
	input clk, rst, RegWr;
	input [31:0]busW;
	input [4:0]ra, rb, rw;
	output [31:0]busA, busB, Data_in;
	
	reg [31:0]regi[0:31];
	
	//initializing
	integer i;
		
	assign busA = regi[ra];
	assign busB = regi[rb];
	assign Data_in = busB;
	
	//register writing
	always@(posedge clk or posedge rst or negedge clk)begin
		if(rst)begin
			for(i=0; i<32; i=i+1)
				regi[i] <= 0;
		end
		else if(RegWr)begin
			regi[rw] <= busW;
			regi[0] <= 0;
		end
	end
endmodule
