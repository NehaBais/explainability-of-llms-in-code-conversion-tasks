The error occurs because `set` is not an aggregate type - it can't be initialized with an initializer list like this. An initializer list works for arrays, structs/classes that have aggregate initialization allowed (which is the case for all built-in types and some user defined types). 

The fix is to initialize `set` using a pair of brackets instead:

```cpp
#include <cmath>
#include <set>
using namespace std;

set<long long> factors(long long n) {
  set<long long> factors;
  factors.insert(n);
  factors.insert(1);
  for (long long test = n - 1; test >= sqrt(n); --test) {
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }
  }
  return factors;
}
```
