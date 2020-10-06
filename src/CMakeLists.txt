add_library(greetings
	SHARED
		readfile.cpp
)

target_include_directories(greetings
	PUBLIC ${PROJECT_SOURCE_DIR}/include
)
