
The error is caused by the fact that C++ does not support initialization of non-aggregate types with initializer lists, such as `std::set`. Instead, we need to use the `insert` method to add elements to the set.

The corrected code should look like this:
```cpp
#include <iostream>
#include <set>

using namespace std;

set<long> factors(long n) {
  set<long> factors = {};
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
