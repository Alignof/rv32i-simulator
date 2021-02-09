#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>

#include "Assembly.hpp"


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


class Instructions{
	private:
		std::vector<Direc>    direc;
		std::vector<Assembly> asems;
		std::map<std::string, uint32_t> labels;
	public:
		void add_inst(){
			;
		}
		void add_label(std::string name){
			name.pop_back(); // remove ':'
			labels.emplace(name, asems.size());
		}
};

class Simulator{
	private:
	public:
		Register     reg;
		Instructions inst;

		void init(){
			reg.reset();
		}
};



#ifndef __DEFINED__
#define __DEFINED__

enum OperandKind	 str_to_op(std::string asem_str);
struct Assembly		 parse_inst(std::vector<std::string> asem_vec);
struct Direc		 parse_direc(std::vector<std::string> asem_vec);
std::vector<std::string> parse_line(const std::string &line);
void			 parse_asem(Simulator &sim, const std::string &line);
void 			 readfile(Simulator &sim, const std::string &filepath);

#endif 

