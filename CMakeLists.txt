cmake_minimum_required(VERSION 3.15)
project(genshin_starts)

set(CMAKE_CXX_STANDARD 20)
if(MSVC)
add_compile_options(/utf-8)
endif()

add_subdirectory(source)