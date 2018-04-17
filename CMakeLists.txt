cmake_minimum_required(VERSION 3.1)
set(PROJECT_NAME cmake_test)
project(${PROJECT_NAME})

# バージョン名
set(TEST_MAJOR_VERSION 0)
set(TEST_MINOR_VERSION 1)
set(TEST_PATCH_VERSION 0)
set(TEST_VERSION ${TEST_MAJOR_VERSION}.${TEST_MINOR_VERSION})
set(TEST_FULL_VERSION ${TEST_MAJOR_VERSION}.${TEST_MINOR_VERSION}.${TEST_PATCH_VERSION})

# c++コンパイラの設定
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ビルドタイプデフォルトはReleaseに
if (NOT CMAKE_BUILD_TYPE)
	set(
    CMAKE_BUILD_TYPE Release CACHE STRING
    "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
    FORCE)
endif()
# ヘッダをインストールするディレクトリ名
set(INSTALL_HEADER_DIR "include/${PROJECT_NAME}")

# function
# target "header.h header2.h ..."
function(setting_library target)
	# 個々のライブラリ(.so)にバージョン名を付ける
  set_target_properties(${target} PROPERTIES VERSION ${TEST_VERSION})

	# ターゲットをどこにインストールするか指定
	# RUNTIMEは実行ファイル，LIBRARYは.soファイルが対応している
	# configurationsはどのビルドタイプの場合かを指定，この場合すべて
  install(TARGETS ${target}
    LIBRARY DESTINATION lib CONFIGURATIONS Release Debug RelWithDebInfo MinSizeRel)

	# ヘッダのインストール指定
  set(headers ${ARGV1})
  if(headers)
    file(RELATIVE_PATH rel_src_dir ${PROJECT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})
		# rel_src_dirはこの場合src/*/になる
    install(FILES ${headers} DESTINATION ${INSTALL_HEADER_DIR}/${rel_src_dir})
  endif()

endfunction()


add_subdirectory(src)
add_subdirectory(include)
