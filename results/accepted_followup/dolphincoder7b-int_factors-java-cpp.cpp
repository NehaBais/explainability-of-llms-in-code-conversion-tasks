#include <cmath>
#include <set>

std::set<long long> factors(long long n) {
  std::set<long long> factors = {n, 1}; // Initialize with the elements
  for (long long test = static_cast<long long>(sqrt(n)); test >= 2; --test)
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  return factors;
}