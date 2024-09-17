#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int> factors;

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      factors.push_back(num / i);
    }
  }

  std::sort(factors.begin(), factors.end()); // sorts the factors into numerical
                                             // order for viewing purposes

  return factors;
}

int main() {

  auto res = factor(100);
  for (auto i : res)
    std::cout << i << " ";

  res = factor(101);
  for (auto i : res)
    std::cout << i << " ";

  return 0;
}