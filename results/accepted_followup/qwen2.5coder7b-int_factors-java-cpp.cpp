#include <cmath>
#include <iostream>
#include <set>

std::set<long> factors(long n) {
  std::set<long> factors_set;
  factors_set.insert(n);
  factors_set.insert(1L);
  for (long test = n - 1; test >= std::sqrt(n); test--)
    if (n % test == 0) {
      factors_set.insert(test);
      factors_set.insert(n / test);
    }
  return factors_set;
}

int main() {
  long num;
  std::cout << "Enter a number: ";
  std::cin >> num;
  auto result = factors(num);
  for (auto &factor : result) {
    std::cout << factor << " ";
  }
  return 0;
}