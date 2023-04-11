cmake_minimum_required(VERSION 3.20)

project(ltl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(ltl_exp01 exp01.cpp)
set_target_properties(ltl_exp01 PROPERTIES OUTPUT_NAME "exp01")
target_link_libraries(ltl_exp01 PRIVATE forek::forek)
