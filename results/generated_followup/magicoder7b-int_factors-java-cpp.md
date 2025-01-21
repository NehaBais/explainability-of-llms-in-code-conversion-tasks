 The error `Undefined symbols for architecture arm64` indicates that your C++ program is not properly linked or compiled. It's trying to reference `_main`, but it can't find this function in your source file, which leads to a linker error because it doesn't have anything to link against the `_main` symbol.

To fix this, you need to make sure that your C++ program is properly linked with the library/libraries that contain the functions being called, such as `sqrt()` and `set::insert()`. The `set` class is also part of the `<set>` standard library in C++, which must be included at the top of your file.

Here's your corrected code:

```cpp
#include <cmath>    // For sqrt()
#include <set>      // For set::insert()
using namespace std;

set<long long> factors(long long n) {
  set<long long> factors;
  factors.insert(n);
  factors.insert(1LL);
  
  for (long long test = n - 1; test >= sqrt(n); test--)
    if (n % test == 0) {
      factors.insert(test);
      factors.insert(n / test);
    }

  return factors;
}
```

You can now compile this code with a C++ compiler to generate an executable.
