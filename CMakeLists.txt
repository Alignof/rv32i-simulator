cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s -DNDEBUG -march=native")

project(
	riscv-emu
	VERSION 0.0.1
	DESCRIPTION "RISC-V emulator"
	LANGUAGES CXX
)

add_subdirectory(src)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} greetings)

# tests
if(NOT without-test)
	enable_testing()
	#include(cmake/gtest.cmake)
	add_subdirectory(test)
endif()
