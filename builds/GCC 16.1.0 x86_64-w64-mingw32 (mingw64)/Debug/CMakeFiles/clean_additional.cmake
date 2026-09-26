# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\qtflashcardapp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qtflashcardapp_autogen.dir\\ParseCache.txt"
  "qtflashcardapp_autogen"
  )
endif()
