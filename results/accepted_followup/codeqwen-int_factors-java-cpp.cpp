#include <math.h>
#include <set>

std::set<long long int> factors(long long int n) {
  std::set<long long int> factors;
  factors.insert(n);
  factors.insert(1);
  for (long long int test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }
  return factors;
}

int main() { return 0; }