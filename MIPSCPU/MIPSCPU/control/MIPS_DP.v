`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:49 12/26/2023 
// Design Name: 
// Module Name:    MIPS_DP 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
// ÕûºÏ
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MIPS_DP(
	clk, rst, RegDst, RegWr, ExtOp, nPC_sel, ALUctr, MemtoReg, MemWr, ALUSrc, j_sel, jValue, 
	instructionOP
   );
	
	input clk, rst;
	input [1:0]ExtOp, ALUctr, nPC_sel;
	input ALUSrc, MemWr, MemtoReg, RegDst, RegWr, j_sel;
	input [25:0]jValue;
	
	wire [31:0]instruction;
	wire [31:0]busA, busB, busW, mux_ALUSrc_out, imm32, Alu_out, Addr, Data_in, Data_out;
	wire [31:0]zero;
	wire [4:0]rw;
	
	output[31:0]instructionOP;
	assign instructionOP[31:0] = instruction[31:0];
	
	IFU IFU(
		.nPC_sel(nPC_sel), 
		.zero(zero), 
		.clk(clk), 
		.rst(rst), 
		.instruction(instruction), 
		.j_sel(j_sel), 
		.jValue(jValue)
	);
	
	extender EXTENDER(
		.imm16(instruction[15:0]), 
		.ExtOp(ExtOp), 
		.imm32(imm32)
	);
	
	ALU ALU(
		.busA(busA), 
		.busB(mux_ALUSrc_out), 
		.ALUctr(ALUctr), 
		.zero(zero), 
		.Alu_out(Alu_out), 
		.Addr(Addr)
	);
	
	mux_RegDst MUX_REGDST(
		.rt(instruction[20:16]), 
		.rd(instruction[15:11]), 
		.RegDst(RegDst), 
		.rw(rw)
	);
	
	mux MUX_ALUSRC(
		.a0(busB), 
		.a1(imm32), 
		.op(ALUSrc), 
		.out(mux_ALUSrc_out)
	);
	
	mux MUX_MemtoReg(
		.a0(Alu_out), 
		.a1(Data_out), 
		.op(MemtoReg), 
		.out(busW)
	);
	
	GPR GPR(
		.RegWr(RegWr), 
		.ra(instruction[25:21]), 
		.rb(instruction[20:16]), 
		.rw(rw), 
		.busW(busW), 
		.clk(clk), 
		.rst(rst), 
		.busA(busA), 
		.busB(busB), 
		.Data_in(Data_in)
	);

	DM DM(
		.Data_in(Data_in), 
		.MemWr(MemWr), 
		.Addr(Addr), 
		.clk(clk), 
		.rst(rst), 
		.Data_out(Data_out)
	);

endmodule
