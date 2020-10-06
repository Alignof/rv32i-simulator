cmake_minimum_required(VERSION 3.1)
project(
	riscv-emu
	VERSION 0.0.1
	DESCRIPTION "RISC-V emulator"
	LANGUAGES CXX
)

add_subdirectory(src)
add_subdirectory(test)

