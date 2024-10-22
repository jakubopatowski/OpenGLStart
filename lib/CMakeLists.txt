add_library(library STATIC hello.cpp math.cpp)

target_include_directories( library 
  PUBLIC 
    "." 
    "${CMAKE_BINARY_DIR}/configure_files/include")

target_link_libraries( library 
  PUBLIC
    nlohmann_json::nlohmann_json
    libglew_static
    glfw)

if(ENABLE_UNIT_TEST)
  add_subdirectory(tests)
endif()

if(${ENABLE_WARNINGS})
  target_set_warnings(library ${ENABLE_WARNINGS} ${ENABLE_WARNINGS_AS_ERRORS})
endif()

if(${ENABLE_LTO})
    target_enable_lto(library)
endif()