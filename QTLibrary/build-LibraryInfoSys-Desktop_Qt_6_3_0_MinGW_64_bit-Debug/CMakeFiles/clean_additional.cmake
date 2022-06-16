# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LibraryInfoSys_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LibraryInfoSys_autogen.dir\\ParseCache.txt"
  "LibraryInfoSys_autogen"
  )
endif()
