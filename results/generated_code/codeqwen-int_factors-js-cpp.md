Here is the equivalent C++ code for the given JavaScript function.

This code will compute the factors of a positive integer and store them in a vector in ascending order:

```cpp
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> factors(int num) {
    std::vector<int> n_factors;
    for (int i = 1; i <= std::floor(std::sqrt(num)); i += 1)
        if (num % i == 0)
            n_factors.push_back(i);
            if (num / i != i && num % (num / i) == 0)
                n_factors.push_back(num / i);

    std::sort(n_factors.begin(), n_factors.end());  // numeric sort
    return n_factors;
}

int main() {
    auto f = factors(45);  // [1,3,5,9,15,45] 
    for (auto i : f) {
        std::cout << i << " ";
    }
    return 0;
}
```

This C++ function does exactly the same as your JavaScript one: it finds all factors of a given number by iterating from 1 to the square root of the number, and for each integer `i`, checks if `num` is divisible by `i`. If yes, it adds `i` to the list of factors. Also, if `num / i` is not equal to `i` (which means that `i` is not a prime number), then it also adds `num / i` to the list of factors. Finally, the list of factors is sorted in ascending order using the sort function from C++'s standard library.
