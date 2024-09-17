```c
#include <set>
#include <cmath>

std::set<long> factors(long n) {
  std::set<long> factors;
  factors.insert(n);
  factors.insert(1);
  for (long test = n - 1; test >= sqrt(n); test--) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }
  return factors;
}
```
