#include "riscv-emu.hpp"

void parse_asm(Simulator &sim, std::string line){
	/*
	 * op dist,src1,src2
	 * opecode
	 * dist
	 * src1
	 * src2
	 */

	return;
}

void readfile(Simulator &sim, std::string filepath){
	std::ifstream ifs(filepath);
	std::string line;

	while(getline(ifs, line)){
		std::cout << line << std::endl;
		parse_asm(sim, line);
	}

	return;
}

int my_len(std::string given){
	return given.length();
}
