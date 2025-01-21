#include <initializer_list>
#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
  std::vector<int> factors1, factors2;
  for (int x = 1; x <= sqrt(n); ++x) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  int x = ceil(sqrt(n));
  if (x * x == n) {
    factors1.push_back(x);
  }
  std::reverse(factors2.begin(), factors2.end());
  factors1.insert(factors1.end(), factors2.begin(), factors2.end());
  return factors1;
}

int main() {
  for (auto i : std::initializer_list<int>({45, 53, 64})) {
    auto factors = factor(i);
    std::cout << i << ": factors: ";
    for (auto f : factors) {
      std::cout << f << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}