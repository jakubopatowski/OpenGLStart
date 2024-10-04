add_library(library STATIC hello.cpp)
target_include_directories(
  library PUBLIC "." "${CMAKE_BINARY_DIR}/configure_files/include")
