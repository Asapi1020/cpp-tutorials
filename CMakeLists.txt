cmake_minimum_required(VERSION 3.15.0)
cmake_policy(SET CMP0091 NEW)
project(conan-tutorial VERSION 0.1.0 LANGUAGES C CXX)

# Conan のツールチェインを利用
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

# C++ 標準を設定
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# fmt を検索
find_package(fmt CONFIG REQUIRED)

# 実行ファイルを作成
add_executable(conan-tutorial conan-tutorial/main.cpp)

# fmt をリンク
target_include_directories(conan-tutorial PRIVATE ${fmt_INCLUDE_DIRS})
target_link_libraries(conan-tutorial PRIVATE fmt::fmt)
