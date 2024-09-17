#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors;

  for (int i = 1; i <= sqrt(num); i++) {
    if (num % i == 0) {
      factors.push_back(i);
      factors.push_back(num / i);
    }
  }

  std::sort(factors.begin(), factors.end());
  return factors;
}

int main() {
  std::vector<int> expected1 = {1, 2, 4, 5, 10, 10, 20, 25, 50, 100};
  std::vector<int> expected2 = {1, 101};

  std::vector<int> result1 = factor(100);
  std::vector<int> result2 = factor(101);

  if (result1 == expected1 && result2 == expected2) {
    std::cout << "Test passed!" << std::endl;
  } else {
    std::cout << "Test failed!" << std::endl;
  }

  return 0;
}