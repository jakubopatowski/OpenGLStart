#define CATCH_CONFIG_MAIN

#include "math.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Factorials are computed", "[factorial]") {
  Matematyka::Funkcje funkcje;
  REQUIRE(funkcje.factorial(0) == 1);
  REQUIRE(funkcje.factorial(1) == 1);
  REQUIRE(funkcje.factorial(10) == 3628800);
}