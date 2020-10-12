#include "riscv-emu.hpp"

int main(int argc, char **argv){
	// check arguments
	if(argc < 2){
		std::cerr << "Not enough arguments." << std::endl;
		exit(1);
	}

	Simulator sim;
	std::vector<String> args(argv, argv+argc);

	readfile(sim,args[1]);
	return 0;
}
