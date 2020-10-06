#include "riscv-emu.hpp"

void readfile(){
	std::string input;

	std::cin >> input;
	std::cout << input << std::endl;

	return;
}

int my_len(std::string given){
	return given.length();
}
