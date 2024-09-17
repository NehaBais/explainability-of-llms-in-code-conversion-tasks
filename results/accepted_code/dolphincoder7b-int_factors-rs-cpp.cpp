#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors;

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      factors.push_back(num / i);
    }
  }

  // sort the factors in ascending order
  std::sort(factors.begin(), factors.end());

  return factors;
}

int main() {
  assert(factor(100) == std::vector<int>{1, 2, 4, 5, 10, 10, 20, 25, 50, 100});
  assert(factor(101) == std::vector<int>{1, 101});

  return 0;
}