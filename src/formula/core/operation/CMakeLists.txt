target_sources(forek PRIVATE
  binary.cpp
  operation.cpp
  unary.cpp
)

add_subdirectory(arithmetic)
add_subdirectory(pl)
add_subdirectory(ltl)
