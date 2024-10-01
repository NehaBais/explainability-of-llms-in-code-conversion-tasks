```cpp
#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string c = "cat";
    std::string d = "dog";

    // Comparing two strings for exact equality
    if(c == d){
        std::cout << c << " is byte-wise identical to " << d << std::endl;
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if(c != d) {
        std::cout << c << " is byte-wise different from " << d << std::endl;
    }
    
    // Comparing two strings to see if one is lexically ordered before than the other
    if(c < d){
        std::cout << c << " is lexicographically before than " << d << std::endl;
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    if(d > c){
        std::cout << d << " is lexicographically after than " << c << std::endl;
    }
    
    // Case insensitive comparison
    if(std::equal(c.begin(),c.end(),d.begin(),[](unsigned char a, unsigned char b){return tolower(a) == tolower(b);})) {
        std::cout << c << " is equal to " << d << " (case insensitive)" << std::endl;
    } else {
        std::cout << c << " is not equal to " << d << " (case insensitive)" << std::endl;
    }
    
    // Numeric strings comparison
    std::string num1 = "12345";
    std::string num2 = "1234";
    
    if(num1 > num2){
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    
    return 0;
}
```
In this C++ code, the built-in string comparison operators are used to compare strings lexicographically. The `std::equal` function with a lambda function as a binary predicate is used for case-insensitive comparison of strings. For numeric string comparisons, we can directly use these same operators because C++ converts strings to numbers when comparing them.
