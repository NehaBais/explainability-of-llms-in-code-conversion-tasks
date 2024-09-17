Answer: 
```c++
#include <set>
using namespace std;

set<long long> factors(long long n) {
    set<long long> factors;
    factors.insert(n);
    factors.insert(1);
    for (long long test = n - 1; test >= sqrt(n); test--) {
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    return factors;
}
```
