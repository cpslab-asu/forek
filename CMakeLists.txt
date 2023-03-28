cmake_minimum_required(VERSION 3.20)

project(forek
  VERSION 0.0.1
  DESCRIPTION "A toolkit for authoring and parsing Temporal Logic formulae."
  HOMEPAGE_URL "https://github.com/andersonjwan/forek"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # C++20 features are used in this project

# Disable vender-specific plugins by default.
#
# This is disabled to protect unwarrented linking of other extensions but can be
# overridden on a per-target basis.
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(${PROJECT_NAME})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS forek)

target_include_directories(forek
  PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/external/antlr4/runtime/Cpp/runtime/src/>
)

target_link_libraries(forek antlr4_static)

# Add the source directory of this project.
add_subdirectory(src)

add_subdirectory(external)
add_subdirectory(extras EXCLUDE_FROM_ALL)

# Examples
add_subdirectory(examples EXCLUDE_FROM_ALL)
