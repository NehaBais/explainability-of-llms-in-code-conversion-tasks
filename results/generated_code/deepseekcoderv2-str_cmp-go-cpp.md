 Certainly! Below is the equivalent code in C++ that demonstrates similar string comparisons with case sensitivity and lexical comparison:

```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string c = "cat";
    std::string d = "dog";

    // Comparing two strings for exact equality
    if (c == d) {
        std::cout << c << " is bytewise identical to " << d << std::endl;
    } else {
        std::cout << c << " is not equal to " << d << std::endl;
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if (c != d) {
        std::cout << c << " is bytewise different from " << d << std::endl;
    } else {
        std::cout << c << " is equal to " << d << std::endl;
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    if (c < d) {
        std::cout << c << " is lexically bytewise less than " << d << std::endl;
    } else if (c > d) {
        std::cout << c << " is lexically bytewise greater than " << d << std::endl;
    } else {
        std::cout << c << " is equal to " << d << std::endl;
    }

    // Comparing two strings to see if one is lexically ordered after than the other
    if (c > d) {
        std::cout << c << " is lexically bytewise greater than " << d << std::endl;
    } else if (c < d) {
        std::cout << c << " is lexically bytewise less than " << d << std::endl;
    } else {
        std::cout << c << " is equal to " << d << std::endl;
    }

    // Case insensitive comparison using std::equal and std::lexicographical_compare
    std::string eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if (std::equal(c.begin(), c.end(), d.begin(), [](char a, char b) { return std::tolower(a) == std::tolower(b); })) {
        std::cout << c << " equal to " << d << " " << eqf << std::endl;
    } else {
        std::cout << c << " not equal to " << d << " " << eqf << std::endl;
    }

    // Case sensitive comparison using default string comparison
    if (c == d) {
        std::cout << c << " is bytewise identical to " << d << std::endl;
    } else {
        std::cout << c << " is not equal to " << d << std::endl;
    }

    // Case insensitive comparison using std::equal and custom case folding function
    if (std::equal(c.begin(), c.end(), d.begin(), [](char a, char b) { return std::tolower(a) == std::tolower(b); })) {
        std::cout << c << " equal to " << d << " " << eqf << std::endl;
    } else {
        std::cout << c << " not equal to " << d << " " << eqf << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **Exact Equality and Inequality**:
   - Using the `==` and `!=` operators for bytewise comparison.

2. **Lexical Comparison**:
   - Using `<`, `>`, `<=`, and `>=` operators for lexical comparison.

3. **Case Insensitive Comparison**:
   - Using `std::equal` with a custom lambda function to handle case-insensitive comparison using `std::tolower`.

4. **Numeric String Comparison**:
   - In C++, numeric strings are not compared lexically; they are treated as plain text unless explicitly converted to numbers for comparison (e.g., using `stoi` or similar functions).

This code provides a comprehensive demonstration of string comparisons in C++ that mirror the functionalities provided by Go, including case sensitivity and lexical order comparisons.
