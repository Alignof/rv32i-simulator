#include "riscv-emu.hpp"
#include "gtest/gtest.h"

namespace{
	TEST(my_lenTest, length){
		EXPECT_EQ(0, my_len(""));
		EXPECT_EQ(1, my_len("1"));
		EXPECT_EQ(5, my_len("hello"));
	}
}
