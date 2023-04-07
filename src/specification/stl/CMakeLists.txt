target_sources(forek PRIVATE
  builder.cpp
  ltl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
