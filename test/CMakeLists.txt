find_package(GTest REQUIRED)
add_executable(unittest testcase.cpp)
target_link_libraries(unittest
	PRIVATE
		GTest::GTest
		GTest::Main
		greetings
		pthread
		util
)
add_test(
	NAME mytest
	COMMAND $<TARGET_FILE:unittest>
)

# run with: ctest -L lib
set_property(
	TEST mytest
	PROPERTY LABELS mytest
)
