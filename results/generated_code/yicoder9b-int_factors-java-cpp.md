Here is the equivalent C++ code for your Java function:

```cpp
#include <set>
#include <cmath>
using namespace std;

set<long long> factors(long long n) {
    set<long long> factors = {n, 1};
    for (long long test = n - 1; test >= sqrt(n); --test) {
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```
This C++ function uses a `set` to hold the factor values, which are sorted in ascending order by default when using `long long` type for elements. It performs identically to your original Java code in terms of logic and output.
