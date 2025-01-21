The error message indicates that we cannot initialize a `std::set` variable with an initializer list, which is true for C++17. To fix this issue, we can use the constructor of the `std::set` class to create a set containing the given elements. The corrected code should look like this:

```cpp
#include  <cmath>
#include  <set>

std::set<long long> factors(long long n) {
  std::set<long long> factors = {n, 1}; // Initialize with the elements
  for (long long test = static_cast<long long>(sqrt(n)); test >= 2; --test)
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
     }
  return factors;
}
```

In this solution, we used the constructor to create a set with two elements, n and 1. This initializes `factors` with the specified values and allows us to perform operations on it using the `std::set<long long>` interface. The rest of the code is unchanged from the original implementation.
