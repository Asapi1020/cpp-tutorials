cmake_minimum_required(VERSION 3.15)
project(myLibrary)

add_library(mylibrary  STATIC github-publish-tutorial/mylibrary.cpp)
target_include_directories(mylibrary  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/github-publish-tutorial)
target_link_libraries(mylibrary INTERFACE)
