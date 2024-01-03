`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:45:41 12/27/2023
// Design Name:   MIPS
// Module Name:   C:/Xilinx/documents/MIPSCPU/test/test.v
// Project Name:  MIPSCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	reg clk;
	reg rst;

	MIPS uut (
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		clk = 0;
		rst = 1;
		#100; rst = 0;
		$readmemh("C:/Xilinx/documents/MIPSCPU/test/test_code.txt", uut.MIPS_DP.IFU.im);
	end
	
	always#30 clk = ~clk;
	
endmodule

