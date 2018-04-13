
cmake_minimum_required(VERSION 3.1)
project(cmake_test2)

set(TEST_MAJOR_VERSION 0)
set(TEST_MINOR_VERSION 1)
set(TEST_PATCH_VERSION 0)
set(TEST_VERSION ${TEST_MAJOR_VERSION}.${TEST_MINOR_VERSION})
set(TEST_FULL_VERSION ${TEST_MAJOR_VERSION}.${TEST_MINOR_VERSION}.${TEST_PATCH_VERSION})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

if(NOT CMAKE_INSTALL_PREFIX)
	message("install")
endif()

set(target cmake_test2)
set(sources
	Base.cpp
	)

set(headers
	Base.h
	)

# 自動的に -fPIC オプション付きでコンパイルされる
add_library(${target} SHARED ${sources} ${headers})
set_target_properties(${target} PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib
    ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
