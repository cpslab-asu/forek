target_sources(forek PRIVATE
  builder.cpp
  stl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
