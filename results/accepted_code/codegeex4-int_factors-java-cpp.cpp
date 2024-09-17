#include <cmath>
#include <set>

std::set<long long> factors(long long n) {
  std::set<long long> factors;
  factors.insert(n);
  factors.insert(1LL);

  for (long long test = n - 1; test >= std::sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }

  return factors;
}