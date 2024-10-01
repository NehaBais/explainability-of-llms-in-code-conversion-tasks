```cpp
#include <iostream>
#include <string>
#include <algorithm>  // for std::transform

void compare_strings(const std::string &a, const std::string &b) {
    // Case sensitive comparisons:
    
    // Exact equality
    if(a == b) std::cout << "Strings are equal\n";
    
    // Inequality
    if(a != b) std::cout << "Strings are not equal\n";
    
    // Lexical ordering
    if(a > b) std::cout << "First string is lexically after the second\n";
    if(a < b) std::cout << "First string is lexically before the second\n";

    // Case insensitive comparisons:
    std::string a_lower = a;
    std::transform(a_lower.begin(), a_lower.end(), a_lower.begin(), ::tolower);
    
    std::string b_lower = b;
    std::transform(b_lower.begin(), b_lower.end(), b_lower.begin(), ::tolower);

    if(a_lower == b_lower) std::cout << "Both strings are equal when ignoring case\n";
}

int main() {
    compare_strings("abc", "Bac");

    return 0;
}
```
Please note that the C++ standard library doesn't provide a direct way to convert a string to uppercase or lowercase. We need to use the `std::transform` function with `::tolower` (for lower case) and `::toupper` (for upper case) functions from the `algorithm` header file.
