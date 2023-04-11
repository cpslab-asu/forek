cmake_minimum_required(VERSION 3.20)

project(stpl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(stpl_exp exp.cpp)
set_target_properties(stpl_exp PROPERTIES OUTPUT_NAME "exp")
target_link_libraries(stpl_exp PRIVATE forek::forek)
