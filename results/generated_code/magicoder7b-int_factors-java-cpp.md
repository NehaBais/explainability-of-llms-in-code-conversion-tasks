 Below is the equivalent C++ code for your Java function:

```cpp
#include <set>
#include <cmath>
using namespace std;

set<long long> factors(long long n) {
    set<long long> factors;
    factors.insert(n);
    factors.insert(1LL);
    
    for(long long test = n - 1; test >= sqrt(n); test--)
        if(n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
        
    return factors;
}
```
Remember in C++, the equivalent of Java's `long` is `long long`, so I used that to maintain consistency with your original code, which was also using `long long`.
