cmake_minimum_required(VERSION 3.22)

project(
  OpenGLStart
  VERSION 0.0.1
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) # additional features of a compiler
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(cmake_configure)
add_subdirectory(lib)
add_subdirectory(app)
