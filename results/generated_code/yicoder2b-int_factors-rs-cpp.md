Sure, here is how you can convert this code from Rust to C++:

```cpp
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> factor(int num) {
    std::vector<int> factors; // creates a new vector for the factors of the number

    for (int i = 1; i <= std::floor(std::sqrt(num as float)) + 1; ++i) {
        if (num % i == 0) {
            factors.push_back(i); // pushes smallest factor to factors
            factors.push_back(num / i); // pushes largest factor to factors
        }
    }
    return factors;
}

int main() {
    std::vector<int> result = factor(100); // compute the factors of 100 and save in 'result' variable.
    for (int i : result) {
        std::cout << i << " "; // print each factor followed by a space
    }
    return 0;
}
```
This C++ code does essentially the same thing as your Rust code: it computes all factors of a given number and prints them out. The main difference is that in C++, there's no need to explicitly sort the vector using `factors.sort()` because sorting isn't necessary when printing the elements of the vector directly.
