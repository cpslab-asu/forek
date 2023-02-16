cmake_minimum_required(VERSION 3.20)

project(pl
  LANGUAGES CXX
)

add_executable(pl main.cpp)
target_link_libraries(pl PRIVATE pyforel::pyforel)
