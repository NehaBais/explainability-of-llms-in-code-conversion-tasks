 Sure, here is the equivalent code in C++ demonstrating the same comparisons:

```cpp
#include <iostream>
#include <string>
#include <algorithm> // for toLowerCase

int main() {
    std::cout << (std::string("abcd") == std::string("abcd")) << "\n"; // true
    std::cout << (std::string("abcd") == std::string("abcd")) << "\n"; // true
    std::cout << (123 == std::string("123")) << "\n"; // true
    std::cout << (123 == std::string("123")) << "\n"; // false
    std::cout << (std::string("ABCD") == std::string("abcd")) << "\n"; // false
    std::cout << (std::string("ABCD") != std::string("abcd")) << "\n"; // true
    std::cout << (123 != std::string("123")) << "\n"; // false
    std::cout << (123 != std::string("123")) << "\n"; // true
    std::cout << (std::string("abcd") < std::string("dcba")) << "\n"; // true
    std::cout << (std::string("abcd") > std::string("dcba")) << "\n"; // false
    std::string abcd = "ABCD";
    std::transform(abcd.begin(), abcd.end(), abcd.begin(), ::tolower);
    std::string abcd_lower = "abcd";
    std::transform(abcd_lower.begin(), abcd_lower.end(), abcd_lower.begin(), ::tolower);
    std::cout << (abcd_lower == abcd) << "\n"; // true (case insensitive)

    return 0;
}
```

### Explanation:
1. **Comparing two strings for exact equality**: `std::string("abcd") == std::string("abcd")` and `123 == std::string("123")` both evaluate to true.
2. **Comparing two strings for inequality**: `std::string("ABCD") != std::string("abcd")` evaluates to true because the strings are not equal.
3. **Comparing two strings to see if one is lexically ordered before than the other**: `std::string("abcd") < std::string("dcba")` evaluates to true because "abcd" comes before "dcba".
4. **Comparing two strings to see if one is lexically ordered after than the other**: `std::string("abcd") > std::string("dcba")` evaluates to false because "abcd" does not come after "dcba".
5. **Case insensitive comparison**: We convert both strings to lowercase using `std::transform` and then compare them. The last line demonstrates this with `std::string("ABCD")` and `std::string("abcd")`.
6. **Comparison of numeric strings if these are not treated lexically**: In C++, when comparing a number (e.g., `123`) to a string (`"123"`), the comparison is based on their values, so `123 == std::string("123")` evaluates to true because both represent the same numeric value.

This code provides a clear demonstration of various string comparisons in C++, including exact equality, inequality, lexicographical order, and case-insensitive comparisons.
