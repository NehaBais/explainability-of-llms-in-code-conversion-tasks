#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
  std::vector<int> factors1, factors2;
  for (int x = 1; x <= static_cast<int>(sqrt(n)); ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  ++x;
  if (x * x == n) {
    factors1.push_back(x);
  }
  factors1.insert(factors1.end(), factors2.rbegin(), factors2.rend());
  return factors1;
}

int main() {
  for (const auto &i : {45, 53, 64}) {
    std::cout << i << ": factors: ";
    for (auto factor : factor(i)) {
      std::cout << factor << ' ';
    }
    std::cout << std::endl;
  }
  return <｜begin▁of▁sentence｜ > 0;
}