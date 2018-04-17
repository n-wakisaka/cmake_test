file(GLOB subdirs "*")

# (library1 ...)
function(build_all_examples)
	file(GLOB sources "*.cpp")
	file(RELATIVE_PATH rel_src_dir ${PROJECT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

	foreach(source ${sources})
		get_filename_component(target ${source} NAME_WE)
		add_executable(${target} ${source})
		target_link_libraries(${target} ${ARGV})
		set_target_properties(${target} PROPERTIES
			RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/${rel_src_dir})
	endforeach()

endfunction()


foreach(subdir ${subdirs})
  if(EXISTS ${subdir}/CMakeLists.txt)
    add_subdirectory(${subdir})
  endif()
endforeach()
