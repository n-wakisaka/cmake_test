# 公開するヘッダ
file(GLOB public_headers "cmake_test2/*")
foreach(file ${public_headers})
  if(NOT IS_DIRECTORY ${file})
		# PREFIXのINSTALL_HEADER_DIRにヘッダをインストール
    install(FILES ${file} DESTINATION ${INSTALL_HEADER_DIR})
  endif()
endforeach()
