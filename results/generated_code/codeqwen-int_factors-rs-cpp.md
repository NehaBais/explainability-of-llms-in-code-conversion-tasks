Here is a C++ version of your Rust code:

```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> factor(int num) {
    std::vector<int> factors; // creates a new vector for the factors of the number

    for (int i = 1; i <= sqrt(num); ++i) { 
        if (num % i == 0) {
            factors.push_back(i); // pushes smallest factor to factors
            factors.push_back(num/i); // pushes largest factor to factors
        }
    }
    std::sort(factors.begin(), factors.end()); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
}

int main() {
    assert(factor(100) == std::vector<int>({1, 2, 4, 5, 10, 10, 20, 25, 50, 100}));  // asserts that two expressions are equal to each other
    assert(factor(101) == std::vector<int>({1, 101}));
    return 0;
}
```

Note: Please remember that C++ does not have built-in support for the `assert` function and also it's usage is different from Rust. Also, in C++ there is no need to use `i32` as a type specifier because `int` is already an integer. But if you really want to use it you can use it.

The code will check that the vectors are equal using the `==` operator and throw an error if they're not. Make sure your C++ compiler supports assertions (`-DNDEBUG` flag) for this to work.

Note: It's also important to remember that in some versions of GCC and Clang, asserts may not work if you are compiling with optimization enabled (`-O2` or `-O3`). In such cases, you will have to disable optimizations (`-O0`) or upgrade your compiler.
