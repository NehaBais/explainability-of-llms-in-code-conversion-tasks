Below is the equivalent C++ code for the Python code you provided. In C++, we use the `std::vector` class to implement a list data structure. Here, we are using `isqrt` function from `<cmath>` library in C++ to find square root of a number because finding square root in each iteration of the loop is computationally expensive and unnecessary for small numbers (i.e., less than 10^6). We are also using `std::reverse` function which reverses the order of elements of a vector container.
```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to print factors
void factor(int n) {
    vector<int> factors1, factors2;
    for (int x = 1; x * x <= n; ++x) {
        if (n % x == 0) {
            factors1.push_back(x);
            factors2.push_back(n / x);
        }
    }
    int x = isqrt(n) + 1;
    if (x * x == n) factors1.push_back(x);

    // Reverse the order of elements in factors2
    reverse(factors2.begin(), factors2.end());
    
    // Print factors
    for (int i : factors1) {
        cout << i << " ";
    }
    cout << "\n";
}

// Main function
int main() {
    vector<int> numbers{45, 53, 64};

    // Display the factors of given numbers
    for (const int& num : numbers) {
        factor(num);
    }

    return 0;
}
```
