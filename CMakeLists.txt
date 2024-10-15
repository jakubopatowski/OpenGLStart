cmake_minimum_required(VERSION 3.22)

project(
    OpenGLStart
    VERSION 0.0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
include(GenerateDoxygen)
include(FetchContent)

FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY  https://github.com/nlohmann/json
    GIT_TAG         v3.11.3
    GIT_SHALLOW     TRUE)
FetchContent_MakeAvailable(nlohmann_json)

FetchContent_Declare(
    glew
    GIT_REPOSITORY  https://github.com/Perlmint/glew-cmake
    GIT_TAG         glew-cmake-2.2.0
    GIT_SHALLOW     TRUE)
FetchContent_MakeAvailable(glew)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY  https://github.com/glfw/glfw.git
    GIT_TAG         3.4
    GIT_SHALLOW     TRUE)
FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY  https://github.com/catchorg/Catch2.git
    GIT_TAG         v3.7.1
    GIT_SHALLOW     TRUE)
FetchContent_MakeAvailable(catch2)

add_subdirectory(cmake_configure)
add_subdirectory(lib)
add_subdirectory(app)
