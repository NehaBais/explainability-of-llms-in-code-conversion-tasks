Error: Incorrect usage of assert statement in C++

Fix: Use `assert` from `<cassert>` header, and put `assert(expr)` inside a function.

Rewritten Code:

```cpp
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

std::vector<int> factor(int num) {
  std::vector<int>
      factors; // creates a new vector for the factors of the number

  for (int i = 1; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      factors.push_back(i);    
      factors.push_back(num / i); // pushes largest factor to factors
    }
  }
  std::sort(factors.begin(), factors.end()); // sorts the factors into numerical
                                             // order for viewing purposes
  return factors;                            // returns the factors
}

void check_factors() {
    assert(factor(100) ==
         std::vector<int>({1, 2, 4, 5, 10, 20, 25, 50})); // asserts that two expressions are equal to each other
    assert(factor(101) == std::vector<int>({1, 101}));
}

int main() {
  check_factors(); // call the function with assertions
  return 0;
}
```
