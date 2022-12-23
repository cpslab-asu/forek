# NAME: ANTLRv4 C++ Runtime
# VERSION: 4.11.1
#
# Add the ANTLRv4 C++ runtime dependency to the build recipe.
#
# Note: Because ANTLR supports multiple targets, we must "assume" the project
# structure remains unchanged and the hosted runtime of the C++ target is located
# under the `/antlr4/runtime/Cpp` directory.

# This is set `ON` to generate ANTLR package files.
#
# This will enable the following packages: (1) `antlr4-generate` and
# (2) `antlr4-runtime`, accordingly.
#
set(ANTLR4_INSTALL ON)

# The generated packages must be searchable by CMake; therefore, the path to the
# results are added to the `CMAKE_PREFIX_PATH` and cached internally.
list(APPEND CMAKE_PREFIX_PATH
  ${CMAKE_BINARY_DIR}/external/antlr4/runtime/Cpp
)

list(APPEND CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/antlr4/runtime/Cpp/cmake
)

set(
  CMAKE_PREFIX_PATH
  ${CMAKE_PREFIX_PATH}
  CACHE
  INTERNAL
  "ANTLR package installation path."
)

set(
  CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  CACHE
  INTERNAL
  "ANTLR module installation path."
)

add_subdirectory(antlr4/runtime/Cpp)
