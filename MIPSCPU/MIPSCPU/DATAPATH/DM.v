`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:18 12/26/2023 
// Design Name: 
// Module Name:    DM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// Êý¾Ý´æ´¢Æ÷
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DM(
	Data_in, MemWr, Addr, clk, rst, 
	Data_out
   );
	 
	input [31:0]Data_in, Addr;
	input clk, rst, MemWr;
	output reg [31:0]Data_out;
	
	reg [7:0]DataMem[1023:0];
	wire [9:0]pointer;
	assign pointer = Addr[9:0];
	
	//initializing
	integer i;
	
	//memory writing
	always@(negedge clk or posedge rst)begin
		if(rst)begin
			for(i=0; i < 1024; i=i+1)
				DataMem[i] <= 0;
		end
		else if(MemWr==1)begin
			DataMem[pointer] <= Data_in[31:24];
			DataMem[pointer+1] <= Data_in[23:16];
			DataMem[pointer+2] <= Data_in[15:8];
			DataMem[pointer+3] <= Data_in[7:0];
		end
		else if(MemWr==0)begin
			Data_out <= {DataMem[pointer], DataMem[pointer+1], DataMem[pointer+2], DataMem[pointer+3]};
		end
	end
endmodule
