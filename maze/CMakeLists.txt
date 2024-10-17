add_executable(maze maze.cpp)

target_include_directories( library 
  PUBLIC 
    ".")

target_link_libraries( maze 
  PUBLIC
    libglew_static
    glfw)

if(${ENABLE_WARNINGS})
  target_set_warnings(maze ${ENABLE_WARNINGS} OFF)
endif()