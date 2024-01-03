`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:12 12/24/2023 
// Design Name: 
// Module Name:    IFU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ¿ØÖÆÆ÷
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IFU(
  nPC_sel, zero, clk, rst, instruction, j_sel, jValue
  );
  input [1:0]nPC_sel;
  input clk, rst, j_sel;
  input [31:0]zero;
  input [25:0]jValue;
  output [31:0]instruction;
  
  reg [31:0]pc;
  reg [7:0]im[0:1023];
  reg [31:0]pcnew;
  wire [31:0]temp, t0, t1;
  wire [15:0]imm16;
  reg [31:0]extout;
  
  assign imm16 = instruction[15:0];
  assign instruction = {im[pc[9:0]], im[pc[9:0]+1], im[pc[9:0]+2], im[pc[9:0]+3]};
  assign temp = {{16{imm16[15]}}, imm16};
  
  //jump address
  always@(*)begin
    if(nPC_sel==2'b11)begin
	   extout = {pc[31:28], jValue[25:0], 2'b0};
	 end
	 else begin
		extout = temp[31:0] << 2;
	 end
  end
  
  assign t0 = pc+4;
  assign t1 = t0+extout;
  
  //pcnew control
  always@(negedge clk)
  begin
	 if(rst)begin
		pcnew=32'h0000_0000;
	 end
    else if(nPC_sel==2'b00)begin
	   pcnew = t0;
	 end
	 else if(nPC_sel==2'b10)begin
      if(zero==0)begin
	     pcnew = t1;
	   end 
		else begin
        pcnew = t0;
		end
	 end
	 else if(nPC_sel==2'b11)begin
		pcnew = extout;
	 end
  end
  
  always@(posedge clk) pc = pcnew;

endmodule
