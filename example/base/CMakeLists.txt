option(BUILD_BASE_EXAMPLES "Building samples of base" OFF)
if(NOT BUILD_BASE_EXAMPLES)
  return()
endif()

build_all_examples(CMakeTestBase)
