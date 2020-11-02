
// riscv-spec-20191213-1.pdf page=130
typedef enum OperandKind{
	OP_LUI,
	OP_AUIPC,
	OP_JAL,
	OP_JALR,
	OP_BEQ,
	OP_BNE,
	OP_BLT,
	OP_BGE,
	OP_BLTU,
	OP_BGEU,
	OP_LB,
	OP_LH,
	OP_LW,
	OP_LBU,
	OP_LHU,
	OP_SB,
	OP_SH,
	OP_SW,
	OP_ADDI,
	OP_SLTI,
	OP_SLTIU,
	OP_XORI,
	OP_ORI,
	OP_ANDI,
	OP_SLLI,
	OP_SRLI,
	OP_ADD,
	OP_SUB,
	OP_SLL,
	OP_SLT,
	OP_SLTU,
	OP_XOR,
	OP_SRL,
	OP_SRA,
	OP_OR,
	OP_AND,
	OP_FENCE,
	OP_ECALL,
	OP_EBREAK,
	OP_CSRRW,
	OP_CSRRS,
	OP_CSRRC,
	OP_CSRRWI,
	OP_CSRRSI,
	OP_CSRRCI,
	OP_LWU,
	OP_LD,
	OP_SD,
	OP_SRAI,
	OP_ADDIW,
	OP_SLLIW,
	OP_SRLIW,
	OP_SRAIW,
	OP_ADDW,
	OP_SUBW,
	OP_SLLW,
	OP_SRLW,
	OP_SRAW,
};


// https://github.com/riscv/riscv-asm-manual/blob/master/riscv-asm.md
typedef enum RegisterKind{
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

// https://github.com/riscv/riscv-asm-manual/blob/master/riscv-asm.md
typedef enum DirecKind{
	DIR_ALIGN,	// .align
	DIR_FILE,       // .file
	DIR_GLOBL,      // .globl
	DIR_LOCAL,      // .local
	DIR_COMM,       // .comm
	DIR_COMMON,     // .common
	DIR_IDENT,      // .ident
	DIR_SECTION,    // .section
	DIR_SIZE,       // .size
	DIR_TEXT,       // .text
	DIR_DATA,       // .data
	DIR_RODATA,     // .rodata
	DIR_BSS,        // .bss
	DIR_STRING,     // .string
	DIR_ASCIZ,      // .asciz
	DIR_EQU,        // .equ
	DIR_MACRO,      // .macro
	DIR_ENDM,       // .endm
	DIR_TYPE,       // .type
	DIR_OPTION,     // .option
	DIR_BYTE,       // .byte
	DIR_2BYTE,      // .2byte
	DIR_HALF,       // .half
	DIR_SHORT,      // .short
	DIR_4BYTE,      // .4byte
	DIR_WORD,       // .word
	DIR_LONG,       // .long
	DIR_8BYTE,      // .8byte
	DIR_DWORD,      // .dword
	DIR_QUAD,       // .quad
	DIR_DTPRELWORD, // .dtprelword 
	DIR_DTPRELDWORD,// .dtpreldword 
	DIR_SLEB128,    // .sleb128 
	DIR_ULEB128,    // .uleb128 
	DIR_P2ALIGN,    // .p2align 
	DIR_BALIGN,     // .balign
	DIR_ZERO,       // .zero
};

struct Direc{
	enum DirecKind    dir;
};

struct Assembly{
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
};

