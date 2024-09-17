To convert the JavaScript code to C++, we need to create a function in C++ that takes an integer as input and returns an array containing all the factors of that number. Here's the equivalent C++ code:
```
#include <vector>
#include <cmath>
#include <iostream>

std::vector<int> factors(int num) {
    std::vector<int> n_factors;
    int i;

    for (i = 1; i <= sqrt(num); i++)
        if (num % i == 0) {
            n_factors.push_back(i);
            if (num / i != i)
                n_factors.push_back(num / i);
        }
    std::sort(n_factors.begin(), n_factors.end());   // numeric sort
    return n_factors;
}

int main() {
    std::vector<int> result = factors(45);   // Call the factors function and store the result in a vector

    for (auto it : result)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}
```
Note that you need to add an appropriate header file (`factors.h`) with the `factors` function declaration and any necessary includes in your C++ project. The example above demonstrates how to use the `factors` function within a C++ program.
