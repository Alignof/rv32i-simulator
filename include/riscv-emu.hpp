#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

class Register{
	private:
		std::vector<uint32_t> regs;
		uint32_t pc;
	public:
		const uint8_t XLEN = 32;
		void reset(){
			regs = std::vector<uint32_t>(XLEN, 0x0);
			pc   = 0;
		}
};


struct Assembly{
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
}

class Instructions{
	private:
		std::vector<Assembly> asems;
		std::map<std::string, uint32_t> labels;
	public:
		void add_inst(){
		}
};

class Simulator{
	private:
		Register     reg;
		Instructions inst;
	public:
		void init(){
			reg.reset();
		}
		void add_inst(){
			inst.add_inst();
		}
};



#ifndef __DEFINED__
#define __DEFINED__

void parse_asm(Simulator &sim, std::string line);
void readfile(Simulator &sim, std::string filepath);
int my_len(std::string given);

#endif 

