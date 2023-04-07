cmake_minimum_required(VERSION 3.20)

project(mtl
  LANGUAGES CXX
)

# Example 1
add_executable(mtl_ex01 ex01.cpp)
set_target_properties(mtl_ex01 PROPERTIES OUTPUT_NAME "ex01")
target_link_libraries(mtl_ex01 PRIVATE forek::forek)
