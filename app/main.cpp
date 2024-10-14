#include "hello.hpp"
#include "nlohmann/detail/abi_macros.hpp"
#include <nlohmann/json.hpp>
#include <iostream>

int main(int argc, const char **argv) {
  hello();
  std::cout << "JSON lib version: " << NLOHMANN_JSON_VERSION_MAJOR << '.'
            << NLOHMANN_JSON_VERSION_MINOR << '.' << NLOHMANN_JSON_VERSION_PATCH
            << '\n';

  initOpenGl();
  return 0;
}
