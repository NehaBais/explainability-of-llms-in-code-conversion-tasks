 To convert the given Python code to C++, we need to handle input, computation of factors, and output formatting. Here's how you can do it in C++:

```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> // for std::reverse

std::vector<int> factor(int n) {
    std::vector<int> factors1, factors2;
    int x = 1;
    for (; x * x < n; ++x) {
        if (n % x == 0) {
            factors1.push_back(x);
            factors2.push_back(n / x);
        }
    }
    if (x * x == n) {
        factors1.push_back(x);
    }
    std::reverse(factors2.begin(), factors2.end());
    factors1.insert(factors1.end(), factors2.begin(), factors2.end());
    return factors1;
}

int main() {
    int numbers[] = {45, 53, 64};
    for (int i : numbers) {
        std::vector<int> factors = factor(i);
        std::cout << i << ": factors: ";
        for (size_t j = 0; j < factors.size(); ++j) {
            std::cout << factors[j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
```

### Explanation:
1. **Include necessary headers**: We include `<iostream>` for input/output operations, `<vector>` for using the vector container, `<cmath>` for mathematical functions like `sqrt` and `isqrt`, and `<algorithm>` for reversing the order of factors.
2. **Function to compute factors**: The `factor` function takes an integer `n` as input and returns a vector of its factors. It iterates from 1 up to the square root of `n`, collecting pairs of factors when found. If `x * x == n`, it adds `x` to the list of factors because this indicates that `n` is a perfect square.
3. **Reversing and combining factors**: The factors are collected in reverse order, so we use `std::reverse` to correct this before appending them to `factors1`.
4. **Main function**: It iterates over the given numbers, computes their factors using the `factor` function, and prints them out.

This C++ code should produce similar output to the provided Python code when run.
