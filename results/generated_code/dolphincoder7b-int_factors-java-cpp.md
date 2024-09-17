```cpp
#include <set>
#include <cmath>
 
std::set<long long> factors(long long n) {
    std::set<long long> factors = { n, 1 };
    for (long long test = static_cast<long long>(sqrt(n)); test >= 2; --test)
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    return factors;
}
```
In this conversion, we first include the necessary headers and then implement the `factors` function as per the Java code. The `TreeSet` class in C++ is a sorted container that stores unique elements based on their order. We use `set` because it guarantees the uniqueness of the elements and sorts them automatically. For finding the factors, we iterate from the square root to 2 using `sqrt`, which is more efficient than checking divisors up to n. For checking if a number is factorable, we use the modulo operator `%`. We insert both the factors (test and n/test) into the set after checking whether they are valid. Note that in C++ we need to explicitly convert the result of `sqrt` from double to long long as it may not be possible to store the exact square root value in a variable of type long. Also, when comparing with 2, we use 2 instead of 2L (long literal), as the comparison is always true for 2L. Lastly, we return the set containing all factors of n.
