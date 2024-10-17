#include "math.hpp"
#include <algorithm>

unsigned int Matematyka::Funkcje::factorial(unsigned int number) {
  return number <= 1 ? 1 : factorial(number - 1) * number;
}

bool Matematyka::Funkcje::checkSum(const std::vector<int> &numbers,
                                   int sum) const {
  auto sorted_numbers = numbers;
  std::sort(sorted_numbers.begin(), sorted_numbers.end());
  for (auto number_it = sorted_numbers.cbegin();
       number_it != sorted_numbers.cend(); ++number_it) {
    auto look_for = sum - *number_it;
    if (look_for <= 0) {
      return false;
    }
    for (auto second_number_it = number_it + 1;
         second_number_it != sorted_numbers.cend() &&
         *second_number_it <= look_for;
         ++second_number_it) {
      if (*second_number_it == look_for) {
        return true;
      }
    }
  }
  
  return false;
}

std::vector<int> Matematyka::Funkcje::problem002(const std::vector<int>& /*array*/) const {
  std::vector<int> result;
  return result;
}
