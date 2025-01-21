#include <cmath>
#include <set>

std::set<long> factors(long n) {
  std::set<long> factors;
  factors.insert(n);
  factors.insert(1L);

  for (long test = n - 1; test >= std::sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }

  return factors;
}

int main() {
  // Your code here
  return 0;
}