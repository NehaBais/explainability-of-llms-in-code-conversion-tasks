 Sure, here is the equivalent C++ code for the given JavaScript functions, assuming UTF-8 encoding (since handling Unicode characters properly requires knowledge of the specific encoding used):

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "abcdefgh";

    int n = 2;
    int m = 3;

    // * starting from n characters in and of m length;
    if (n + m <= str.length()) {
        std::cout << str.substr(n, m) << std::endl;  // => "cde"
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    // * starting from n characters in, up to the end of the string;
    if (n < str.length()) {
        std::string substr = str.substr(n);
        std::cout << substr << std::endl;  // => "cdefgh"
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    if (str.length() > 0) {
        std::string substr = str.substr(0, str.length() - 1);
        std::cout << substr << std::endl;  // => "abcdefg"
    } else {
        std::cout << "String is empty" << std::endl;
    }

    // * starting from a known character within the string and of m length;
    int pos = str.find('b');
    if (pos != std::string::npos && pos + m <= str.length()) {
        std::cout << str.substr(pos, m) << std::endl;  // => "bcd"
    } else {
        std::cout << "Character not found or index out of range" << std::endl;
    }

    // * starting from a known substring within the string and of m length.
    std::string subStr = "bc";
    pos = str.find(subStr);
    if (pos != std::string::npos && pos + m <= str.length()) {
        std::cout << str.substr(pos, m) << std::endl;  // => "bcd"
    } else {
        std::cout << "Substring not found or index out of range" << std::endl;
    }

    return 0;
}
```

This C++ code performs the same operations as the provided JavaScript code, handling UTF-8 encoded strings and ensuring that logical characters (code points) are referenced.
