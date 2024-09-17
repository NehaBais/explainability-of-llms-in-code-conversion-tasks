 The equivalent C++ code would be as follows:

```cpp
#include <iostream>
#include <vector>

std::vector<int> factor(int n) {
    std::vector<int> factors1, factors2;
    for (int x = 1; x <= sqrt(n); ++x) {
        if (n % x == 0) {
            factors1.push_back(x);
            factors2.push_back(n / x);
        }
    }
    int x = ceil(sqrt(n));
    if (x * x == n) {
        factors1.push_back(x);
    }
    std::reverse(factors2.begin(), factors2.end());
    factors1.insert(factors1.end(), factors2.begin(), factors2.end());
    return factors1;
}

int main() {
    for (auto i : {45, 53, 64}) {
        auto factors = factor(i);
        std::cout << i << ": factors: ";
        for (auto f : factors) {
            std::cout << f << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
```
Note that, in C++, the equivalent of Python's `isqrt` function is `sqrt`, but it doesn't behave exactly like Python's `isqrt`. In particular, we use `ceil(sqrt(n))` to emulate Python's behavior where if the integer part of n ** 0.5 is odd, you stop at that integer and not the next one. Also, the equivalent for Python's list comprehension in C++ is a loop, so I had to manually append the factors to `factors1` using `.push_back()`. The reverse function `.reverse()` of C++ STL was used for reversing vector `factors2`, and then it was inserted at the end of `factors1` using `.insert()`.
