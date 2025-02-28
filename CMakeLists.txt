cmake_minimum_required(VERSION 3.15)
project(myLibrary)

add_library(myLibrary conan-publish-tutorial/myLibrary.cpp)
target_include_directories(myLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/conan-publish-tutorial)
