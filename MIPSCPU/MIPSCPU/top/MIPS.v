`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:11 12/26/2023 
// Design Name: 
// Module Name:    MIPS 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: MIPS�ܹ�CPU
// ָ�: 8��
//
// ����	��ʶ	����			����
//  R		ADDU  ������� 		000000_rs_rt_rd_00000_100001
//  R		SUBU  �������		000000_rs_rt_rd_00000_100011
//  I		ORI   ���������rt	001101_rs_rt_imm
//  I		LW    ȡ��			100011_rs_rt_off
//  I		SW		����			101011_rs_rt_off
//	 I		BEQ	������ת		000100_rs_rt_off
//	 I		LUI	��������		001111_000000_rt_imm
//	 J		J		��������ת		000010_addr
//
// Dependencies: 
// 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MIPS(
	clk, rst
	);
	
	input clk, rst;
	wire [1:0]ExtOp, ALUctr, nPC_sel;
	wire ALUSrc, MemWr, MemtoReg, RegDst, RegWr, j_sel;
	wire [31:0]instruction;
	wire [25:0]jValue;
	
	ctrl CU(
		.instruction(instruction), 
		
		.RegDst(RegDst), 
		.RegWr(RegWr), 
		.ExtOp(ExtOp), 
		.nPC_sel(nPC_sel), 
		.ALUctr(ALUctr), 
		.MemtoReg(MemtoReg), 
		.MemWr(MemWr), 
		.ALUSrc(ALUSrc), 
		.j_sel(j_sel), 
		.jValue(jValue)
	);
	
	MIPS_DP MIPS_DP(
		.clk(clk), 
		.rst(rst), 
		
		.RegDst(RegDst), 
		.RegWr(RegWr), 
		.ExtOp(ExtOp), 
		.nPC_sel(nPC_sel), 
		.ALUctr(ALUctr), 
		.MemtoReg(MemtoReg), 
		.MemWr(MemWr), 
		.ALUSrc(ALUSrc), 
		.j_sel(j_sel), 
		.jValue(jValue), 
		
		.instructionOP(instruction)
   );


endmodule
