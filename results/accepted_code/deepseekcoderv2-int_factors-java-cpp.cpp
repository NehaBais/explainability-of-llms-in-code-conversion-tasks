#include <cmath>
#include <iostream>
#include <set>

std::set<long long> factors(long long n) {
  std::set<long long> factors;
  factors.insert(n);
  factors.insert(1LL);

  for (long long test = n - 1; test >= std::sqrt(n); --test) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }

  return factors;
}

int main() {
  long long number = 28; // Example input
  std::set<long long> result = factors(number);

  for (auto it = result.begin(); it != result.end(); ++it) {
    std::cout << *it << " ";
  }

  return 0;
}