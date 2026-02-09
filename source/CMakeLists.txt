# Source Layer: Business Logic Library
# Automatically includes all .cpp files from subdirectories

file(GLOB_RECURSE BASES "${CMAKE_CURRENT_SOURCE_DIR}/Bases/*.cpp")

if(BASES)
  add_library(bases STATIC ${BASES})

  list(LENGTH BASES SOURCE_COUNT)
  message(STATUS "Library 'bases' created with ${SOURCE_COUNT} source file(s)")
else()
  message(STATUS "No source files found for library 'bases'")
endif()
