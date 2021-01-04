#include "riscv-emu.hpp"

struct Assembly parse_inst(std::vector<std::string> asem_vec){
/*
	enum OperandKind  op;
	enum RegisterKind dist;
	enum RegisterKind src1;
	enum RegisterKind src2;
*/
	struct Assembly parsed_asem;
	parsed_asem.op = str_to_op(asem_vec[0]);

	for(auto &str: asem_vec){
		std::cout << str << std::endl;
	}

	return parsed_asem;
}

struct Direc parse_direc(std::vector<std::string> asem_vec){
	struct Direc parsed_direc;

	std::cout << "directive: " << asem_vec[0] << std::endl;
	return parsed_direc;
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

	return asem_str;
}

void parse_asem(Simulator &sim, const std::string &line){
	std::vector<std::string> asem_str;
	

	asem_str = parse_line(line);

	// label
	if(asem_str[0].back() == ':'){
		std::cout << asem_str[0] << std::endl;
		sim.inst.add_label(asem_str[0]);
	// directive
	}else if(asem_str[0][0] == '.'){
		struct Direc direc = parse_direc(asem_str);
		//sim.inst.add_direc(parsed);
	// instruction
	}else{
		struct Assembly insts = parse_inst(asem_str);
		//sim.inst.add_inst(parsed);
	}
}

void readfile(Simulator &sim, const std::string &filepath){
	std::ifstream ifs(filepath);
	std::string line;

	// get line
	while(getline(ifs, line)){
		parse_asem(sim, line);
	}
}
