cmake_minimum_required(VERSION 3.20)

project(pl
  LANGUAGES CXX
)

# Example 1
add_executable(pl_ex01 ex01.cpp)
set_target_properties(pl_ex01 PROPERTIES OUTPUT_NAME "ex01")
target_link_libraries(pl_ex01 PRIVATE forek::forek)
