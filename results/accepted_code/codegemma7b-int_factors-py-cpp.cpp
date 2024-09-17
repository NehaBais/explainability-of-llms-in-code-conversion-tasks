#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
  std::vector<int> factors1, factors2;
  for (int x = 1; x * x <= n; x++) {
    if (n % x == 0) {
      factors1.push_back(x);
      factors2.push_back(n / x);
    }
  }
  if (n % factors1.back() == 0) {
    factors1.push_back(n / factors1.back());
  }
  factors1.insert(factors1.end(), factors2.rbegin(), factors2.rend());
  return factors1;
}

int main() {
  int i[] = {45, 53, 64};
  for (int x : i) {
    std::cout << x << ": factors: ";
    for (int factor : factor(x)) {
      std::cout << factor << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}