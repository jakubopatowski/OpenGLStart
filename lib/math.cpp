#include "math.hpp"

unsigned int Matematyka::Funkcje::factorial(unsigned int number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}
