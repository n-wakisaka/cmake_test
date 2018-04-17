# ソース一覧
set(sources
	Base.cpp
	)

# ヘッダ一覧
set(headers
	Base.h
	)

# ターゲット名
set(target CMakeTestBase)

# ターゲットを共有ライブラリとしてコンパイル
# 自動的に -fPIC オプション付きでコンパイルされる
add_library(${target} SHARED ${sources} ${headers})

# 出力先を指定
set_target_properties(${target} PROPERTIES
	LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)


# 共有ライブラリの一般設定
# ライブラリのバージョン名指定，ヘッダのインストール指定など
setting_library(${target} "${headers}")
