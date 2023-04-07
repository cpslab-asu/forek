target_sources(forek PRIVATE
  builder.cpp
  tptl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
