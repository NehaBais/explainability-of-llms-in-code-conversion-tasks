The equivalent C++ code for the given Java function is as follows:

```cpp
#include <vector>
#include <set>
#include <cmath>

std::multiset<long long> factors(long long n) {
    std::multiset<long long> factors;
    factors.insert(n);
    factors.insert(1LL);
    for (long long test = n - 1; test >= std::sqrt(n); test--)
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    return factors;
}
```
This C++ code uses multiset for storing the result of the function because we need to consider duplicate values (when n is divisible by a prime number) and set doesn't allow duplicate elements, so if n can be divided by multiple same numbers, it will insert these numbers into the set.
