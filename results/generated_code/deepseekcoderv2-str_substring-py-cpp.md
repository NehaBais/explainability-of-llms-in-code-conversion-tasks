 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "abcdefgh";
    int n = 2, m = 3;
    char char_val = 'd';
    std::string chars = "cd";

    // starting from n=2 characters in and m=3 in length;
    if (n - 1 + m <= s.length()) {
        std::cout << s.substr(n - 1, m) << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    // starting from n characters in, up to the end of the string;
    if (n - 1 < s.length()) {
        std::cout << s.substr(n - 1) << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    // whole string minus last character;
    if (!s.empty()) {
        std::cout << s.substr(0, s.length() - 1) << std::endl;
    } else {
        std::cout << "String is empty" << std::endl;
    }

    // starting from a known character char="d" within the string and of m length;
    size_t indx = s.find(char_val);
    if (indx != std::string::npos && indx + m <= s.length()) {
        std::cout << s.substr(indx, m) << std::endl;
    } else {
        std::cout << "Character not found or index out of range" << std::endl;
    }

    // starting from a known substring chars="cd" within the string and of m length.
    size_t indx2 = s.find(chars);
    if (indx2 != std::string::npos && indx2 + m <= s.length()) {
        std::cout << s.substr(indx2, m) << std::endl;
    } else {
        std::cout << "Substring not found or index out of range" << std::endl;
    }

    return 0;
}
```

This C++ code performs the same operations as the provided Python code. It handles UTF-8 encoding by default, which supports any valid Unicode code point. The substr function is used to extract substrings from the string `s` based on the given conditions.
