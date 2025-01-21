 To convert the given JavaScript function to C++, we need to follow these steps:

1. Define a function named `factors` that takes an integer parameter.
2. Use a loop to find all factors of the input number.
3. Store the factors in a vector (C++ equivalent of an array).
4. Sort the vector of factors.
5. Return the sorted vector.

Here's the C++ code to achieve this:

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

std::vector<int> factors(int num) {
    std::vector<int> n_factors;
    
    for (int i = 1; i <= static_cast<int>(sqrt(num)); ++i) {
        if (num % i == 0) {
            n_factors.push_back(i);
            if (num / i != i) {
                n_factors.push_back(num / i);
            }
        }
    }
    
    std::sort(n_factors.begin(), n_factors.end()); // numeric sort
    return n_factors;
}

int main() {
    auto result = factors(45);  // [1,3,5,9,15,45] 
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    result = factors(53);  // [1,53] 
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    result = factors(64);  // [1,2,4,8,16,32,64]
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Explanation:
- **Include necessary headers**: We include `<iostream>` for input/output operations, `<vector>` to use the vector container, and `<algorithm>` to use the `std::sort` function.
- **Function definition**: The `factors` function takes an integer `num` as a parameter and returns a vector of integers (`std::vector<int>`).
- **Loop through possible factors**: We loop from 1 to the square root of `num`. If `i` is a factor, we add it to the vector. Additionally, if `num / i` is not equal to `i`, we also add it to the vector.
- **Sort the vector**: After collecting all factors, we sort them using `std::sort`.
- **Main function**: In the `main` function, we call the `factors` function with different numbers and print the results.

This C++ code should produce the same output as the provided JavaScript code for computing the factors of a positive integer.
