target_sources(pyforel PRIVATE
  binary.cpp
  operation.cpp
  unary.cpp
)

add_subdirectory(pl)
add_subdirectory(ltl)
