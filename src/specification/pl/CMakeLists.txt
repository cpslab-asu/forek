target_sources(forek PRIVATE
  builder.cpp
  pl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
