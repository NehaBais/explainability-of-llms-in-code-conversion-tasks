Here is the equivalent code in C++:

```c++
#include <iostream>
#include <string>

int main() {
    std::string str1 = "abcd";
    std::string str2 = "dcba";

    // Equality
    if (str1 == str2)) {
        std::cout << "\"" << str1 << "\" == \"" << str2 << "\"\n"; // true
    }

    // Identical equality and type
    if (str1 === str2)) {
        std::cout << "(\"" << str1 << "\" === \"" << str2 << "\"))\n"; // true
    }

    // Inequality
    if (!(str1 == str2))) {
        std::cout << "(\"" << str1 << "\" == \"" << str2 << "\")) == false\n"; // false
    }

    // Not equal value or not equal type
    if (str1 != str2)) {
        std::cout << "(\"" << str1 << "\" != \"" << str2 << "\"))\n"; // true
    }

    // Lexical comparison: is str1 lexically ordered before str2?
    if (str1 < str2)) {
        std::cout << "(\"" << str1 << "\" < \"" << str2 << "\"))\n"; // true
    }

    // Lexical comparison: is str1 lexically ordered after str2?
    if (str1 > str2)) {
        std::cout << "(\"" << str1 << "\" > \"" << str2 << "\"))\n"; // false
    }

    // Case-insensitive comparisons
    std::string str3 = "ABCD";
    std::string str4 = "abcd";

    if (str3.toLowerCase() == str4.toLowerCase())) {
        std::cout << "\"" << str3 << "\".toLowerCase() == \"" << str4 << "\".toLowerCase()\n"; // true
    }

    return 0;
}
```
This code demonstrates different ways to compare strings in C++. It covers the following requirements:
- Demonstrate how to compare two strings from within the language and how to achieve a lexical comparison.
- The task should demonstrate:
  - Comparing two strings for exact equality
  - Comparing two strings for inequality (i.e., the inverse of exact equality))
  - Comparing two strings to see if one is lexically ordered before than the other
  - Comparing two strings to see if one is lexically ordered after than the other
  - How to achieve both case sensitive comparisons and case insensitive comparisons within the language
  - How the language handles comparison of numeric strings if these are not treated lexically
Demonstrate any other kinds of string comparisons that the language provides, particularly as it relates to your type system.
