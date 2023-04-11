cmake_minimum_required(VERSION 3.20)

project(stl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(stl_exp01 exp01.cpp)
set_target_properties(stl_exp01 PROPERTIES OUTPUT_NAME "exp01")
target_link_libraries(stl_exp01 PRIVATE forek::forek)
