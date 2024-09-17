Here is your Java code converted to C++:

```cpp
#include <iostream>
#include <set>
#include <cmath>

std::set<long> factors(long n) {
    std::set<long> factors;

    factors.insert(n);
    factors.insert(1L);

    for (long test = n - 1; test >= sqrt(n); test--) {
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```

This C++ code essentially does the same thing as your Java code: it computes and returns a set of the factors of a positive integer.
