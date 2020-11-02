#include "riscv-emu.hpp"

struct Assembly parse_inst(std::vector<std::string> asem_vec){
/*
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
*/
	struct Assembly parsed;
	parsed.op = str_to_op(asem_vec[0]);

	for(auto &str: asem_vec){
		std::cout << str << std::endl;
	}

	return parsed;
}

struct Label parse_label(std::vector<std::string> asem_vec){
	struct Assembly parsed;

	std::cout << "label:" << asem_vec[0] << std::endl;
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

	// add parsed assembly to vector
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
	

	asem_str = parse_line(line);

	// label
	if(asem_str[0][0] == '.'){
		struct Label labels = parse_label(asem_str);
		//sim.inst.add_inst(parsed);
	// instruction
	}else{
		struct Assembly insts = parse_inst(asem_str);
		//sim.inst.add_inst(parsed);
	}


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
