 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
#include <cassert>   // For assert

std::vector<int> factor(int num) {
    std::vector<int> factors;

    for (int i = 1; i <= static_cast<int>(std::sqrt(num)); ++i) {
        if (num % i == 0) {
            factors.push_back(i); // pushes smallest factor to factors
            if (i != num / i) { // Avoid adding the same factor twice for perfect squares
                factors.push_back(num / i); // pushes largest factor to factors
            }
        }
    }
    std::sort(factors.begin(), factors.end()); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
}

int main() {
    assert(factor(100) == std::vector<int>{1, 2, 4, 5, 10, 20, 25, 50, 100}); // asserts that two expressions are equal to each other
    assert(factor(101) == std::vector<int>{1, 101});

    return 0;
}
```

This C++ code defines a function `factor` that computes the factors of a given positive integer. It uses a loop to find all divisors up to the square root of the number and ensures not to duplicate the factor when the number is a perfect square. The main function tests this with two examples, using assertions to check if the results match expected values.
