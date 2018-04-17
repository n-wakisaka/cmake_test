# 公開するヘッダ
file(GLOB public_headers "${PROJECT_NAME}/*")
foreach(file ${public_headers})
  if(NOT IS_DIRECTORY ${file})
		# PREFIXのINSTALL_HEADER_DIRにヘッダをインストール
    install(FILES ${file} DESTINATION ${INSTALL_HEADER_DIR})
  endif()
endforeach()
