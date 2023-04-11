cmake_minimum_required(VERSION 3.20)

project(tqtl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(tqtl_exp exp.cpp)
set_target_properties(tqtl_exp PROPERTIES OUTPUT_NAME "exp")
target_link_libraries(tqtl_exp PRIVATE forek::forek)
