cmake_minimum_required(VERSION 3.20)
project(pyforel VERSION 0.0.1)

option(ANTLR_GENERATE "Generate ANTLR targets from grammar files." OFF)

# Add project external dependendies managed by Git submodules and use their
# provided CMake scripts to build.
add_subdirectory(external)

# Add the extra project tooling and build relevant items.
add_subdirectory(extras)

# Add the source directory of this project.
add_subdirectory(src)
