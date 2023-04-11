cmake_minimum_required(VERSION 3.20)

project(mtl_experiments
  LANGUAGES CXX
)

# Example 1
add_executable(mtl_exp01 exp01.cpp)
set_target_properties(mtl_exp01 PROPERTIES OUTPUT_NAME "exp01")
target_link_libraries(mtl_exp01 PRIVATE forek::forek)
