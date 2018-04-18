# cmake_test
CMakeのサンプル

# 構造
+ srcディレクトリに.h, .cppファイルをまとめる．
+ srcのサブディレクトリはライブラリごとに分ける．
+ includeディレクトリは，公開する用のヘッダをプロジェクト名のディレクトリ下にまとめる．
+ installするとinclude/srcが生成され，その下に全ての.hファイルがコピーされる．
+ exampleディレクトリにはサンプルコードを置く．キャッシュ変数を使ってコンパイルするかどうか変更できる．
+ miscディレクトリにはpkg-config生成用ファイルが置かれている．
+ 実際に利用するには，インストールされる ${prefix}/lib/pkgconfig ディレクトリにパスを通しておく必要がある．