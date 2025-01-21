#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors;

  // Check if the number is 1, which has no factors other than itself.
  if (num == 1) {
    factors.push_back(1);
    return factors;
  }

  // Loop from 2 to the square root of the number
  for (int i = 2; i <= std::sqrt(num); ++i) {
    // Check if 'i' is a factor of 'num'
    if (num % i == 0) {
      factors.push_back(i); // Push the smallest factor
      if (i != num / i) {
        factors.push_back(
            num / i); // If 'i' and 'num/i' are not equal, push the largest one
      }
    }
  }

  return factors;
}

int main() {
  std::vector<int> result = factor(100);
  for (int factor : result) {
    std::cout << factor << " ";
  }
  std::cout << std::endl;

  result = factor(101);
  for (int factor : result) {
    std::cout << factor << " ";
  }
  std::cout << std::endl;

  return 0;
}