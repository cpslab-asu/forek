# NAME: ANTLRv4 C++ Runtime
# VERSION: 4.11.1
#
# Add the ANTLRv4 C++ runtime dependency to the build recipe.
#
# Note: Because ANTLR supports multiple targets, we must "assume" the project
# structure remains unchanged and the hosted runtime of the C++ target is located
# under the `/antlr4/runtime/Cpp` directory.
add_subdirectory(antlr4/runtime/Cpp)
