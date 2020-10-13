#include "riscv-emu.hpp"

int main(int argc, char **argv){
	// default file path
	std::string filepath = "../tmp/test.s";

	if(argc > 1){
		filepath = argv[1];
	}

	readfile(sim,filepath);
	return 0;
}
