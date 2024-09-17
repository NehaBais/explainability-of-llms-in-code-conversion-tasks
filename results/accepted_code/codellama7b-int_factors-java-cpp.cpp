#include <iostream>
#include <set>

using namespace std;

set<long> factors(long n) {
  set<long> factors = {n, 1};
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }
  return factors;
}