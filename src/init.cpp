#include "riscv-emu.hpp"

struct Assembly parse_str(std::vector<std::string> asem_str){
/*
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
*/
	struct Assembly parsed;
	return parsed;
}

std::vector<std::string> parse_line(const std::string &line){
	std::vector<std::string> asem_str;
	std::string item;
		
	// parse Assembly
	for(char ch: line){
		if(ch == ' ' || ch == '\t' || ch == ','){
			if(!item.empty()){
				asem_str.push_back(item);
				item.clear();
			}
			continue;
		}

		item.push_back(ch);
	}
	if(!item.empty()){
		asem_str.push_back(item);
	}

/*
	// display
	std::cout << "line:" <<  line << std::endl;
	std::cout << "parsed:";
	for(std::string str: asem_str){
		std::cout << str << " ";
	}
	std::cout << std::endl;
*/

	return asem_str;
}

void parse_asem(Simulator &sim, const std::string &line){
	std::vector<std::string> asem_str;
	struct Assembly parsed;

	asem_str = parse_line(line);
	//parsed   = parse_str(asem_str);
	//sim.inst.add_inst(parsed);

	return;
}

void readfile(Simulator &sim, const std::string &filepath){
	std::ifstream ifs(filepath);
	std::string line;

	// get line
	while(getline(ifs, line)){
		parse_asem(sim, line);
	}

	return;
}
