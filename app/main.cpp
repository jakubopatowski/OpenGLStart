#include "hello.hpp"
#include "nlohmann/detail/abi_macros.hpp"
#include <iostream>
#include <nlohmann/json.hpp>

int main(int argc, const char** argv) {
    hello();
    std::cout << "JSON lib version: " << NLOHMANN_JSON_VERSION_MAJOR << '.'
              << NLOHMANN_JSON_VERSION_MINOR << '.' << NLOHMANN_JSON_VERSION_PATCH << '\n';

    initOpenGl();
    return 0;
}
