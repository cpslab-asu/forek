target_sources(forek PRIVATE
  builder.cpp
  stpl.cpp
)

add_subdirectory(gen)
add_subdirectory(error)
