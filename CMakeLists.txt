cmake_minimum_required(VERSION 3.15)
project(myLibrary)

add_library(myLibrary STATIC github-publish-tutorial/mylibrary.cpp github-publish-tutorial/mylibrary.h)
target_include_directories(myLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/github-publish-tutorial)
