```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "ABCDEFGH";
    int n = 2, m = 3;

    // Index reference
    std::cout << "Index: " << "01234567" << std::endl;
    std::cout << "String: " << s << std::endl;

    // Starting from n characters in and of m length
    std::cout << "Start " << n << ", length " << m << ":    " << s.substr(n, m) << std::endl;

    // Starting from n characters in, up to the end of the string
    std::cout << "Start " << n << ", to end:      " << s.substr(n) << std::endl;

    // Whole string minus last character
    std::cout << "All but last:         " << s.substr(0, s.size() - 1) << std::endl;

    // Starting from a known character within the string and of m length
    size_t dx = s.find('D');
    std::cout << "Start 'D', length " << m << ":  " << s.substr(dx, m) << std::endl;

    // Starting from a known substring within the string and of m length
    size_t sx = s.find("DE");
    std::cout << "Start \"DE\", length " << m << ": " << s.substr(sx, m) << std::endl;

    return 0;
}
```

**Explanation:**

* The C++ code uses the `std::string` class to represent the string.
* The `substr()` method is used to extract substrings based on starting index and length.
* The `find()` method is used to locate a specific character or substring within the string.

**Note:**

* The code assumes UTF-8 encoding, which is the default in C++.
* The program uses logical characters (code points) for string operations.
