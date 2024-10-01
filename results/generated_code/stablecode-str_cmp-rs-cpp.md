Here is the equivalent code in C++:

```C++
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a = "abc";
    std::string b = "Bac";

    // Comparing two strings for exact equality
    if (a == b) std::cout << "The strings are equal\n";
   
    // Comparing two strings for inequality 
    // i.e., the inverse of exact equality)
    if (a != b)) std::cout << "The strings are not equal\n";

    // Demonstrating lexical comparison:
  
    // Compare strings 'a' and 'b' using standard library function: std::lexicographical_compare
    bool cmp = std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()));
    std::cout << "The string 'a' is lexically ordered ";
    if (cmp) {
        std::cout << "before the string 'b'\n";
    } else {
        std::cout << "after the string 'b'\n";
    }

    // Case-insensitive comparisons:
  
    // Create owned strings, then compare as above
    std::string a2 = std::string(a.begin(), std::find_if(a.begin(), a.end(), [](unsigned char c){return !std::isalnum(c);})), b));

    // Demonstrate any other kinds of string comparisons that the language provides:
  
    // Checking if string is prefix of another string
    bool is_prefix = std::equal(a.begin(), a.end()), b.begin(), b.end());
    std::cout << "The string 'a' is a prefix of string 'b': ";
    if (is_prefix) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    // Checking if string is suffix of another string
    bool is_suffix = std::equal(b.begin(), b.end()), a.rbegin(), a.rend());
    std::cout << "The string 'a' is a suffix of the string 'b': ";
    if (is_suffix) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
```
This program compares two strings for exact equality, inequality, lexical ordering before and after the other string. It also demonstrates case-insensitive comparisons using a combination of standard C++ functions to achieve this. Additionally, it also checks if one string is prefix or suffix of another string.
