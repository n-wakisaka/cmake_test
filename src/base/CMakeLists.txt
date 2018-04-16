set(sources
	Base.cpp
	)

set(headers
	Base.h
	)

set(target cmake_test2_base)

# 自動的に -fPIC オプション付きでコンパイルされる
add_library(${target} SHARED ${sources} ${headers})
set_target_properties(${target} PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
