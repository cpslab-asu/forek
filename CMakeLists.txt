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

# Check for link time optimization support.
#
# This is a compiler-specific feature. Therefore, it must first be checked before
# enabling it. It allows optimization of code after linking.
# include(CheckIPOSupported)
# check_ipo_supported(RESULT ipo_supported)
# if(ipo_supported)
#   set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
# endif()

option(ANTLR_GENERATE "Generate ANTLR targets from grammar files." OFF)

# Add project external dependendies managed by Git submodules and use their
# provided CMake scripts to build.
add_subdirectory(external)

# Add the extra project tooling and build relevant items.
add_subdirectory(extras)

# Add the source directory of this project.
add_subdirectory(src)
