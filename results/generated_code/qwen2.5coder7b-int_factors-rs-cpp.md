Here is how you can convert this Rust code to C++.

```c++
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<int> factor(int num) {
    std::vector<int> factors; 

    for(int i = 1; i <= sqrt(num); ++i) { 
        if(num % i == 0) {
            factors.push_back(i);
            if (num / i != i)
                factors.push_back(num/i);
        }
    }

    sort(factors.begin(), factors.end()); 

    return factors;
}

int main() {
    std::vector<int> result1 = factor(100); 
    for(int i: result1) 
        std::cout << i << " "; 
    std::cout << std::endl;

    std::vector<int> result2 = factor(101);
    for(int i: result2)
        std::cout << i << " ";
    return 0;
}
```
This C++ code should give you the same output as your Rust code. The `factor()` function is similar to the `factor()` function in Rust, computing and returning a vector of factors of an input number. The `main()` function calls `factor()` with two test numbers (100 and 101) and prints out the resulting vectors.

Note that C++ does not support macros like `assert_eq!` as Rust. So if you want to check for the equality of two expressions, you can use the standard library `assert()` function instead, or manually compare the vectors using loops and conditionals.
