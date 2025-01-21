 To convert the given Java code for computing the factors of a positive integer into C++, we need to follow these steps:

1. Include necessary headers.
2. Define the function `factors` that takes a long integer as input and returns a set of long integers.
3. Use a loop to find all factors by iterating from `n - 1` down to `Math.sqrt(n)`.
4. Add factors to the set in ascending order.
5. Return the set of factors.

Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <set>
#include <cmath>

std::set<long long> factors(long long n) {
    std::set<long long> factors;
    factors.insert(n);
    factors.insert(1LL);
    
    for (long long test = n - 1; test >= std::sqrt(n); --test) {
        if (n % test == 0) {
            factors.insert(test);
            factors.insert(n / test);
        }
    }
    
    return factors;
}

int main() {
    long long number = 28; // Example input
    std::set<long long> result = factors(number);
    
    for (auto it = result.begin(); it != result.end(); ++it) {
        std::cout << *it << " ";
    }
    
    return 0;
}
```

### Explanation:
1. **Include necessary headers**: We include `<iostream>` for input/output operations, `<set>` for using the `std::set` container, and `<cmath>` for mathematical functions like `std::sqrt`.
2. **Define the function `factors`**: The function takes a long integer `n` as input and returns a set of long integers (`std::set<long long>`).
3. **Initialize the set with `n` and `1LL`**.
4. **Loop through possible factors**: We loop from `n - 1` down to `std::sqrt(n)`. If `test` is a factor of `n`, we add both `test` and `n / test` to the set.
5. **Return the set**: The function returns the set containing all the factors.
6. **Main function for testing**: We provide an example input (`number = 28`) and print the factors using a loop that iterates through the set.

This C++ code should behave similarly to the provided Java code, computing the factors of a positive integer and returning them in ascending order.
