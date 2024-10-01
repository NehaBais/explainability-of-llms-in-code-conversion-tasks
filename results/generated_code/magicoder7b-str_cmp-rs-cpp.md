 In C++, the standard library does not provide methods to compare two strings case insensitively or lexically order them. Therefore, there are some differences in comparison code and handling of numeric strings as well compared to Rust's AsciiExt functionality. 

Here is a sample conversion:

```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string a = "abc";
    std::string b = "Bac";

    // Strings are coerced to &str when borrowed and needed
    if (a == b) { std::cout << "The strings are equal" << std::endl; }
    if (a != b) { std::cout << "The strings are not equal" << std::endl; }
    // C++ treats string types in a less intuitive way, this is an order operation on the string data values rather than lexical ordering of the characters.
    if (a < b) { std::cout << "The first string is lexically before the second" << std::endl; }
    else if(a > b) { std::cout << "The first string is lexically after the second" << std::endl; }
    // Same as Rust, >= and <= check whether one string is not lexicographically before or after another.
    // However, C++ doesn't have a direct equivalent of Rust's < > = comparison operators for strings, so we need to manually compare them character by character using the standard library functions: 
    else if (a >= b) { std::cout << "The first string is not lexically before the second" << std::endl; }
    else if (a <= b) { std::cout << "The first string is not lexically after the second" << std::endl; }

    // case-insensitives: 
    
    // Equality, need to compare each character manually with a loop or use built-in C++ function:
    bool equal = true;
    for(auto &c : a) {
        char temp = std::tolower(c);
        if(temp != b[a.find(c)]) {
            equal = false;
            break;
        }
    }
    
    // C++ uses tolower() to convert characters to lowercase, unlike Rust which uses AsciiExt trait for this purpose. 
    if (equal) { std::cout << "Both strings are equal when ignoring case" << std::endl; }

    return 0;
}
```

Note: The code above assumes that the strings are equal in size and have matching characters at each position. If not, it will fail. It also doesn't take into account what to do if the second string is shorter than the first.
