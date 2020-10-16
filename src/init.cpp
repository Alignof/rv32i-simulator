#include "riscv-emu.hpp"

void parse_asm(Simulator &sim, std::string line){
	/*
	 * op dist,src1,src2
	 * opecode
	 * dist
	 * src1
	 * src2
	 */
		
	std::cout << line << std::endl;

	return;
}

void readfile(Simulator &sim, std::string filepath){
	std::ifstream ifs(filepath);
	std::string line;

	while(getline(ifs, line)){
		parse_asm(sim, line);
	}

	return;
}

int my_len(std::string given){
	return given.length();
}
