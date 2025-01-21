#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors;

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      if (num / i != i)
        factors.push_back(num / i);
    }
  }

  sort(factors.begin(), factors.end());

  return factors;
}

int main() {
  std::vector<int> result1 = factor(100);
  for (int i : result1)
    std::cout << i << " ";
  std::cout << std::endl;

  std::vector<int> result2 = factor(101);
  for (int i : result2)
    std::cout << i << " ";
  return 0;
}