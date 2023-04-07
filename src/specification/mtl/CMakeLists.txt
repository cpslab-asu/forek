target_sources(forek PRIVATE
  builder.cpp
  mtl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
