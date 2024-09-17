#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int>
      factors; // creates a new vector for the factors of the number

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);       // pushes smallest factor to factors
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  std::sort(factors.begin(), factors.end()); // sorts the factors into numerical
                                             // order for viewing purposes
  return factors;                            // returns the factors
}

int main() {
  assert(factor(100) ==
         std::vector<int>(
             {1, 2, 4, 5, 10, 10, 20, 25, 50,
              100})); // asserts that two expressions are equal to each other
  assert(factor(101) == std::vector<int>({1, 101}));
  return 0;
}