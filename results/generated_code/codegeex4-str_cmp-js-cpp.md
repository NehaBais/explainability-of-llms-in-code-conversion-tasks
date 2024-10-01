In C++, we can use the `std::string` library to carry out string comparisons. Here is how the JavaScript code could be rewritten in C++:

```c++
#include <iostream>
#include <algorithm>    // For std::tolower

int main() {
    std::string s1 = "abcd", s2 = "abcd";
    int num1 = 123, num2 = 123;
    
    std::cout << (s1 == s2) << std::endl;     // true
    std::cout << (s1 != s2) << std::endl;     // false

    std::string numStr1 = "123", numStr2 = "123";

    if(num1 == std::stoi(numStr1)) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not Equal" << std::endl;
    }
    
    if(num1 != std::stoi(numStr2)) {
        std::cout << "Not Equal" << std::endl;
    } else {
        std::cout << "Equal" << std::endl;
    }

    if(s1 < s2) {
        std::cout << "s1 is lexicographically smaller than s2" << std::endl;
    } else {
        std::cout << "s1 is not lexicographically smaller than s2" << std::endl;
    }

    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if(s1 == s2) {
        std::cout << "s1 and s2 are equal when case is ignored" << std::endl;
    } else {
        std::cout << "s1 and s2 are not equal when case is ignored" << std::endl;
    }

    return 0;
}
```

This program covers all your requirements:

- It compares two strings for equality and inequality using `==` and `!=`
- It shows how to compare numeric strings by converting them to integers first
- It demonstrates lexical comparison using `<` and `>`
- It also provides an example of case insensitive comparison by transforming both strings into lowercase before comparing.

It's worth noting that C++ uses ASCII values for its comparison, so it may not work correctly with special characters or different languages.
