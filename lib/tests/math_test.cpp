#define CATCH_CONFIG_MAIN

#include "math.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Factorials are computed", "[factorial]") {
  Matematyka::Funkcje funkcje;
  REQUIRE(funkcje.factorial(0) == 1);
  REQUIRE(funkcje.factorial(1) == 1);
  REQUIRE(funkcje.factorial(10) == 3628800);
}

TEST_CASE("Check sum is computed", "[checkSum]") {
  Matematyka::Funkcje funkcje;
  REQUIRE(funkcje.checkSum({10, 15, 3, 7}, 17) == true);
  REQUIRE(funkcje.checkSum({1, 2, 3, 4, 5, 6}, 100) == false);
}
