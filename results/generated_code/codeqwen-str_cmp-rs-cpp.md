In C++, you can use the `std::string` class which is a sequence of characters. Here is how to convert your given Rust code into C++:

```cpp
#include <iostream>
#include <algorithm>
#include <cctype>

int main() {
    // only same types can be compared
    // string and string
    std::string A = "abc";
    std::string b = "Bac";

    // Strings are coerced to &str when borrowed and needed
    if (A == b) { std::cout << "The strings are equal" << std::endl; }
    if (A != b) { std::cout << "The strings are not equal" << std::endl; }
    if (A > b) { std::cout << "The first string is lexically after the second" << std::endl; }
    if (A < b) { std::cout << "The first string is lexically before the second" << std::endl; }

    // case-insensitives:

    std::string A2, b2;

    // equality
    // This avoids new allocations
    if (std::equal(A.begin(), A.end(), b.begin(), b.end(), [](unsigned char a, unsigned char B) { return std::tolower(A) == std::tolower(B); })) { 
        std::cout << "Both strings are equal when ignoring case" << std::endl; 
    }

    // everything else, convert to lowercase and then compare as above
    for (auto& c: A) A2 += std::tolower(c);
    for (auto& c: b) b2 += std::tolower(c);

    // repeat checks
}
```
Note that in C++, `std::string` supports operator `==`, `!=`, `>`, and `<`. They perform lexicographical comparison which is a case-sensitive comparison. To make it case-insensitive, you have to convert the strings to lowercase using algorithm like `std::tolower()`.

Also remember that C++ string are not null-terminated like in Rust. So when comparing two strings with `==`, be sure to not compare them past their length (use .size() or .length()).
