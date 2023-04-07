cmake_minimum_required(VERSION 3.20)

project(tqtl
  LANGUAGES CXX
)

# Example 1
add_executable(tqtl_ex01 ex01.cpp)
set_target_properties(tqtl_ex01 PROPERTIES OUTPUT_NAME "ex01")
target_link_libraries(tqtl_ex01 PRIVATE forek::forek)
