#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factors(const int &num) {
  std::vector<int> n_factors;
  for (int i = 1; i <= num / 2; ++i) {
    if (num % i == 0) {
      n_factors.push_back(i);
    }
  }
  return n_factors;
}

int main() {
  int num;
  std::cout << "Enter a positive integer: ";
  std::cin >> num;
  const auto factors = factors(num);
  for (const auto &factor : factors) {
    std::cout << factor << " ";
  }
  return 0;
}