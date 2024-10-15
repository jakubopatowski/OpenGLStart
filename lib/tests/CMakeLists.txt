if(ENABLE_UNIT_TEST)
    set(TEST_MAIN "unit_tests")
    set(TEST_SOURCES math_test.cpp)
    set(TEST_INCLUDES ./ ../)

    add_executable(${TEST_MAIN} ${TEST_SOURCES})
    target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
    target_link_libraries(${TEST_MAIN} PUBLIC library Catch2::Catch2WithMain libglew_static glfw nlohmann_json::nlohmann_json)
endif()