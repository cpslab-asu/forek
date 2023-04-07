cmake_minimum_required(VERSION 3.20)

project(pl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(pl_exp01 exp01.cpp)
set_target_properties(pl_exp01 PROPERTIES OUTPUT_NAME "exp01")
target_link_libraries(pl_exp01 PRIVATE forek::forek)
