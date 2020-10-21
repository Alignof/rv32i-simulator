// riscv-spec-20191213-1.pdf page=130
enum OperandKind{
	LUI,
	AUIPC,
	JAL,
	JALR,
	BEQ,
	BNE,
	BLT,
	BGE,
	BLTU,
	BGEU,
	LB,
	LH,
	LW,
	LBU,
	LHU,
	SB,
	SH,
	SW,
	ADDI,
	SLTI,
	SLTIU,
	XORI,
	ORI,
	ANDI,
	SLLI,
	SRLI,
	ADD,
	SUB,
	SLL,
	SLT,
	SLTU,
	XOR,
	SRL,
	SRA,
	OR,
	AND,
	FENCE,
	ECALL,
	EBREAK,
};


enum RegisterKind{
	ABI_zero,       // hardwired to 0, ignores writes       
	ABI_ra,         // return address for jumps             
	ABI_sp,         // stack pointer                        
	ABI_gp,         // global pointer                       
	ABI_tp,         // thread pointer                       
	ABI_t0,         // temporary register 0                 
	ABI_t1,         // temporary register 1                 
	ABI_t2,         // temporary register 2                 
	ABI_s0, 	// saved register 0 _or_ frame pointer  
	ABI_fp, 	// saved register 0 _or_ frame pointer  
	ABI_s1,         // saved register 1                     
	ABI_a0,         // return value _or_ function argument 0
	ABI_a1,         // return value _or_ function argument 1
	ABI_a2,         // function argument 2                  
	ABI_a3,         // function argument 3                  
	ABI_a4,         // function argument 4                  
	ABI_a5,         // function argument 5                  
	ABI_a6,         // function argument 6                  
	ABI_a7,         // function argument 7                  
	ABI_s2,         // saved register 2                     
	ABI_s3,         // saved register 3                     
	ABI_s4,         // saved register 4                     
	ABI_s5,         // saved register 5                     
	ABI_s6,         // saved register 6                     
	ABI_s7,         // saved register 7                     
	ABI_s8,         // saved register 8                     
	ABI_s9,         // saved register 9                     
	ABI_s10,        // saved register 10                    
	ABI_s11,        // saved register 11                    
	ABI_t3,         // temporary register 3                 
	ABI_t4,         // temporary register 4                 
	ABI_t5,         // temporary register 5                 
	ABI_t6,         // temporary register 6                 
	ABI_pc,         // program counter                      
};

struct Assembly{
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
};

