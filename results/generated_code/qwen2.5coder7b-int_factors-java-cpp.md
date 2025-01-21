Here is the equivalent C++ code:

```cpp
#include <set>
#include <cmath>

std::set<long> factors(long n)
{
 std::set<long> factors_set;
 factors_set.insert(n);
 factors_set.insert(1L);
 for(long test = n - 1; test >= std::sqrt(n); test--)
  if(n % test == 0)
  {
   factors_set.insert(test);
   factors_set.insert(n / test);
  }
 return factors_set;
}
```
This C++ code works in the same way as the Java code. It computes the factors of a positive integer by adding them to a set, which automatically removes duplicates and keeps the elements sorted. The for loop starts at `n - 1` and goes down to `sqrt(n)`. If `n % test == 0`, then `test` is a factor of `n` and so is `n / test`.
