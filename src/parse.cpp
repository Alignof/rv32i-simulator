#include "riscv-emu.hpp"

enum OperandKind str_to_op(std::string asem_str){
	if(asem_str == "lui")		return OP_LUI;
	if(asem_str == "auipc")	 	return OP_AUIPC;
	if(asem_str == "jal")	 	return OP_JAL;
	if(asem_str == "jalr")	 	return OP_JALR;
	if(asem_str == "beq")	 	return OP_BEQ;
	if(asem_str == "bne")	 	return OP_BNE;
	if(asem_str == "blt")	 	return OP_BLT;
	if(asem_str == "bge")	 	return OP_BGE;
	if(asem_str == "bltu")	 	return OP_BLTU;
	if(asem_str == "bgeu")	 	return OP_BGEU;
	if(asem_str == "lb")	 	return OP_LB;
	if(asem_str == "lh")	 	return OP_LH;
	if(asem_str == "lw")	 	return OP_LW;
	if(asem_str == "lbu")	 	return OP_LBU;
	if(asem_str == "lhu")	 	return OP_LHU;
	if(asem_str == "sb")	 	return OP_SB;
	if(asem_str == "sh")	 	return OP_SH;
	if(asem_str == "sw")	 	return OP_SW;
	if(asem_str == "addi")	 	return OP_ADDI;
	if(asem_str == "slti")	 	return OP_SLTI;
	if(asem_str == "sltiu")	 	return OP_SLTIU;
	if(asem_str == "xori")	 	return OP_XORI;
	if(asem_str == "ori")	 	return OP_ORI;
	if(asem_str == "andi")	 	return OP_ANDI;
	if(asem_str == "slli")	 	return OP_SLLI;
	if(asem_str == "srli")	 	return OP_SRLI;
	if(asem_str == "add")	 	return OP_ADD;
	if(asem_str == "sub")	 	return OP_SUB;
	if(asem_str == "sll")	 	return OP_SLL;
	if(asem_str == "slt")	 	return OP_SLT;
	if(asem_str == "sltu")	 	return OP_SLTU;
	if(asem_str == "xor")	 	return OP_XOR;
	if(asem_str == "srl")	 	return OP_SRL;
	if(asem_str == "sra")	 	return OP_SRA;
	if(asem_str == "or")	 	return OP_OR;
	if(asem_str == "and")	 	return OP_AND;
	if(asem_str == "fence")	 	return OP_FENCE;
	if(asem_str == "call")	 	return OP_ECALL;
	if(asem_str == "ebreak") 	return OP_EBREAK;
	if(asem_str == "csrrw")		return OP_CSRRW;
	if(asem_str == "csrrs")		return OP_CSRRS;
	if(asem_str == "csrrc")		return OP_CSRRC;
	if(asem_str == "csrrwi")	return OP_CSRRWI;
	if(asem_str == "csrrsi")	return OP_CSRRSI;
	if(asem_str == "csrrci")	return OP_CSRRCI;
	if(asem_str == "lwu")		return OP_LWU;
	if(asem_str == "ld")		return OP_LD;
	if(asem_str == "sd")		return OP_SD;
	if(asem_str == "srai")		return OP_SRAI;
	if(asem_str == "addiw")		return OP_ADDIW;
	if(asem_str == "slliw")		return OP_SLLIW;
	if(asem_str == "srliw")		return OP_SRLIW;
	if(asem_str == "sraiw")		return OP_SRAIW;
	if(asem_str == "addw")		return OP_ADDW;
	if(asem_str == "subw")		return OP_SUBW;
	if(asem_str == "sllw")		return OP_SLLW;
	if(asem_str == "srlw")		return OP_SRLW;
	if(asem_str == "sraw")		return OP_SRAW;
	//if(asem_str == "ecall") 	return OP_ECALL;

	std::cerr << "operand not found:" << asem_str << std::endl;
	//exit(1);
}


