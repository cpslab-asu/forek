cmake_minimum_required(VERSION 3.20)

project(ltl
  LANGUAGES CXX
)

# Example 1
add_executable(ltl_ex01 ex01.cpp)
set_target_properties(ltl_ex01 PROPERTIES OUTPUT_NAME "ex01")
target_link_libraries(ltl_ex01 PRIVATE pyforel::pyforel)
