#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
  std::vector<int> factors1;
  int x = 1;
  while (x * x < n) {
    if (n % x == 0) {
      factors1.push_back(x);
      if (n / x != x)
        factors1.push_back(n / x);
    }
    ++x;
  }
  if (x * x == n) {
    factors1.push_back(x);
  }

  for (int i = factors1.size() - 1; i >= 0; --i) {
    factors1.push_back(factors1[i]);
  }

  return factors1;
}

int main() {
  int values[] = {45, 53, 64};
  for (int value : values) {
    std::vector<int> results = factor(value);
    std::cout << value << ": factors: ";
    for (int result : results)
      std::cout << result << " ";
    std::cout << std::endl;
  }

  return 0;
}