cmake_minimum_required(VERSION 3.20)

project(tptl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(tptl_exp exp.cpp)
set_target_properties(tptl_exp PROPERTIES OUTPUT_NAME "exp")
target_link_libraries(tptl_exp PRIVATE forek::forek)
