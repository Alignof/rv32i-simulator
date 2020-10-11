#include <iostream>
#include <string>
#include <vector>

#ifndef __DEFINED__
#define __DEFINED__
void readfile();
int my_len(std::string given);
#endif 

class Register{
	private:
		std::vector<uint32_t> regs;
		uint32_t pc;
	public:
		const uint8_t reg_num = 32;
		void reset(){
			regs  = std::vector<uint32_t>(reg_num, 0x0);
			pc    = 0;
		}
};

class Simulator{
	private:
		Register reg;
	public:
		void init(){
			reg.reset();
		}
};
