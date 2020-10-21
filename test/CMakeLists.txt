find_package(GTest REQUIRED)
add_executable(unittest testcase.cpp)
target_link_libraries(unittest
	PRIVATE
		GTest::GTest
		GTest::Main
		libs
		pthread
		util
)
add_test(
	NAME mytest
	COMMAND $<TARGET_FILE:unittest>
)

set_property(
	TEST mytest
	PROPERTY LABELS mytest
)
