Here is a C++ version of the JavaScript code:

```c++
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> factors(int num) {
    std::vector<int> n_factors;
    
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            n_factors.push_back(i);
            if (num / i != i)
                n_factors.push_back(num / i);
        }
    }

    std::sort(n_factors.begin(), n_factors.end()); // numeric sort

    return n_factors;
}

int main() {
    std::vector<int> result = factors(45);
    for (int val : result) {
        std::cout << val << " ";
    }  // Outputs: 1 3 5 9 15 45

    result = factors(53);
    std::cout << "\n";
    for (int val : result) {
        std::cout << val << " ";
    }  // Outputs: 1 53 

    result = factors(64);
    std::cout << "\n";
    for (int val : result) {
        std::cout << val << " ";
    }  // Outputs: 1 2 4 8 16 32 64

    return 0;
}
```

This C++ code performs the same task as the JavaScript code - computing the factors of a positive integer. It also sorts these factors in ascending order using the `std::sort` function from the `<algorithm>` library and outputs them in main function.
