cmake_minimum_required(VERSION 3.20)

project(pyforel
  VERSION 0.0.1
  DESCRIPTION "A toolkit for authoring and parsing Temporal Logic formulae."
  HOMEPAGE_URL "https://github.com/andersonjwan/pyforel"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # C++20 features are used in this project

# Disable vender-specific plugins by default.
#
# This is disabled to protect unwarrented linking of other extensions but can be
# overridden on a per-target basis.
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(pyforel)
add_library(pyforel::pyforel ALIAS pyforel)

target_include_directories(pyforel
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
)

# Add the source directory of this project.
add_subdirectory(src)
