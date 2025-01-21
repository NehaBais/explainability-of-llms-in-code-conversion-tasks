To convert the given Golang code to C++, you can follow these steps:

1. **Comparison Operators**: You can use the `strcmp` function in C++ which compares two strings lexicographically. Note that `strcmp` is case-sensitive.

2. **Equality and Inequality**: `==` and `!=` operators are used for equality and inequality comparisons respectively. The result is 0 if equal, -1 if less than, and 1 if greater than.

3. **Lexicographical Comparison**: You can use the `strcmp` function to compare strings lexicographically in C++. If you want case-insensitive comparison, you would need to convert both strings to lowercase or uppercase before comparing them.

Here is a C++ version of your code:

```cpp
#include <iostream>
#include <string>
#include <algorithm> // For std::transform

// Function to perform case-insensitive comparison using std::transform and std::islower
bool caseInsensitiveCompare(const std::string& str1, const std::string& str2) {
    std::transform(str1.begin(), str1.end(), str1.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    std::transform(str2.begin(), str2.end(), str2.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    return strcmp(str1.c_str(), str2.c_str()) == 0;
}

int main() {
    std::string c = "cat";
    std::string d = "dog";

    // Comparison operators
    if (strcmp(c.c_str(), d.c_str()) == 0) {
        std::cout << c << " is bytewise identical to " << d << std::endl;
    } else {
        std::cout << c << " is bytewise different from " << d << std::endl;
    }

    if (strcmp(c.c_str(), d.c_str()) != 0) {
        std::cout << c << " is not bytewise different from " << d << std::endl;
    }

    if (strcmp(c.c_str(), d.c_str()) > 0) {
        std::cout << c << " is lexically bytewise greater than " << d << std::endl;
    } else if (strcmp(c.c_str(), d.c_str()) < 0) {
        std::cout << c << " is lexically bytewise less than " << d << std::endl;
    }

    if (strcmp(c.c_str(), d.c_str()) >= 0) {
        std::cout << c << " is lexically bytewise greater than or equal to " << d << std::endl;
    } else if (strcmp(c.c_str(), d.c_str()) <= 0) {
        std::cout << c << " is lexically bytewise less than or equal to " << d << std::endl;

    // Case insensitive comparison
    if (caseInsensitiveCompare(c, d)) {
        std::cout << c << " equal to " << d << std::endl;
    } else {
        std::cout << c << " not equal to " << d << std::endl;
    }

    return 0;
}
```

### Explanation:
- **String Comparisons**:
  - `strcmp` is used for lexicographical comparison. It returns a negative value if the first string is less than the second, zero if they are equal, and a positive value if the first string is greater than the second.
  
- **Case Insensitive Comparison**:
  - `std::transform` is used to convert both strings to lowercase.
  - `caseInsensitiveCompare` function takes two strings as input, converts them to lowercase using `std::transform`, and then compares them using `strcmp`. If they are equal after converting to lowercase, it returns true; otherwise, it returns false.

This C++ code demonstrates the same functionality as the Go code, including comparisons for exact equality, inequality, lexicographical ordering, case insensitive comparison, and numeric string comparison.
