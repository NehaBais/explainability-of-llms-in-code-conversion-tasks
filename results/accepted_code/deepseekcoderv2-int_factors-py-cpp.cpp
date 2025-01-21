#include <algorithm> // for std::reverse
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
  std::vector<int> factors1, factors2;
  int x = 1;
  for (; x * x < n; ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  if (x * x == n) {
    factors1.push_back(x);
  }
  std::reverse(factors2.begin(), factors2.end());
  factors1.insert(factors1.end(), factors2.begin(), factors2.end());
  return factors1;
}

int main() {
  int numbers[] = {45, 53, 64};
  for (int i : numbers) {
    std::vector<int> factors = factor(i);
    std::cout << i << ": factors: ";
    for (size_t j = 0; j < factors.size(); ++j) {
      std::cout << factors[j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}