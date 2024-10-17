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

  //Daily Coding Problem: Problem #2 [Hard]
  /**
   * @brief Given an array of integers, return a new array such that each
   * element at index i of the new array is the product of all the numbers in
   * the original array except the one at i.
   *
   * For example, if our input was [1, 2, 3, 4, 5], the expected output would be
   * [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output
   * would be [2, 3, 6].
   *
   * Follow-up: what if you can't use division?
   */
  std::vector<int> problem002(const std::vector<int>& array) const;
};

} // namespace Matematyka