set(targets
	cmake_test.pc
	)

foreach(file ${targets})
  configure_file(${file}.in ${PROJECT_BINARY_DIR}/lib/pkgconfig/${file} @ONLY)
  install(FILES ${PROJECT_BINARY_DIR}/lib/pkgconfig/${file} DESTINATION lib/pkgconfig)
endforeach()
