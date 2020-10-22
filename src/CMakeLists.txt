add_library(libs
	SHARED
		init.cpp
		parse.cpp
)

target_include_directories(libs
	PUBLIC ${PROJECT_SOURCE_DIR}/include
)
