cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(bs-tree-demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(contrib)

# add executables
add_executable(main main.cpp)
target_link_libraries(main PRIVATE BSTree::BSTree)