#pragma once

#include <vector>

namespace Matematyka {

class Funkcje {
public:
  unsigned int factorial(unsigned int number);

  // Daily Coding Problem: Problem #1 [Easy]
  /**
   * @brief Given a list of numbers and a number k, return whether any two
   * numbers from the list add up to k.
   * For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7
   * is 17.
   * Bonus: Can you do this in one pass?
   *
   * @param numbers
   * @param sum
   * @return true
   * @return false
   */
  bool checkSum(const std::vector<int> &numbers, int sum) const;
  
};

} // namespace Matematyka