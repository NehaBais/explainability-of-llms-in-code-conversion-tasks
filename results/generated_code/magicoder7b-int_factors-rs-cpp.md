 ```cpp
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> factor(int num) {
    std::vector<int> factors; // creates a new vector for the factors of the number

    int max = sqrt(num);
    for (int i = 1; i <= max; ++i) {
        if (num % i == 0) {
            factors.push_back(i); // pushes smallest factor to factors
            factors.push_back(num/i); // pushes largest factor to factors
        }
    }
    return factors; // returns the factors
}

int main() {
    std::vector<int> result = factor(100); 
    for (auto num : result) {
        std::cout << num << " ";
    }
    
    result = factor(101);
    for (auto num : result) {
        std::cout << num << " ";
    }

    return 0;
}
```
In C++, you don't need to explicitly sort the vector at the end, and you can directly print the elements in the vector. Also, note that we are using `sqrt()` function from `<cmath>` to calculate the square root of a number, and pushing elements to the vector using `push_back()`.
