Converting this Python code to C++ requires understanding how to manipulate strings with Unicode characters, which is more complex compared to Python's built-in support for Unicode. In C++, you can use the `std::u32string` and `std::codecvt_utf8_utf16` (for UTF-8) or `std::wstring_convert` along with `std::basic_string` for UTF-16.

Below is a C++ code snippet that demonstrates how to achieve the same functionality as the Python code using `std::u32string` and `std::codecvt_utf8_utf16`. Note that this example assumes you are working with UTF-8 encoded strings. For other encodings, similar logic can be applied but with different encoding conversions.

```cpp
#include <iostream>
#include <string>
#include <codecvt>
#include <locale>

int main() {
    std::u32string s = u"abcdefgh";
    uint32_t n = 2;
    uint32_t m = 3;
    char32_t char_ = U'd';
    std::u32string chars = u"cd";

    // starting from n=2 characters in and m=3 in length
    auto start_n_m = s.begin() + n - 1;
    auto end_n_m = s.begin() + n - 1 + m;
    for (auto it = start_n_m; it != end_n_m; ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // starting from n characters in, up to the end of the string
    auto start_n_to_end = s.begin() + n - 1;
    for (auto it = start_n_to_end; it != s.end(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // whole string minus last character
    auto start_last_char_removed = s.begin();
    auto end_last_char_removed = s.end() - 1;
    for (auto it = start_last_char_removed; it != end_last_char_removed; ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // starting from a known character char="d" within the string and of m length
    auto indx_char = s.find(char_);
    if (indx_char != std::u32string::npos) {
        auto start_known_char = s.begin() + indx_char;
        auto end_known_char = start_known_char + m;
        for (auto it = start_known_char; it != end_known_char && it != s.end(); ++it) {
            std::cout << *it;
        }
        std::cout << std::endl;
    }

    // starting from a known substring chars="cd" within the string and of m length
    auto indx_chars = s.find(chars);
    if (indx_chars != std::u32string::npos) {
        auto start_known_substring = s.begin() + indx_chars;
        auto end_known_substring = start_known_substring + m;
        for (auto it = start_known_substring; it != end_known_substring && it != s.end(); ++it) {
            std::cout << *it;
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **`std::u32string`**: This is a string type that represents Unicode characters as 32-bit code points.
2. **`find` method**: This method is used to find the first occurrence of a character or substring within the string.
3. **Iterating through the string**: The `for` loop iterates over the range specified and prints each character.

### Note:
- Ensure that your compiler supports C++11 or later, as some features like `std::u32string` are part of the C++11 standard.
- This example assumes you are working with UTF-8 encoded strings. If you need to handle other encodings, additional conversions and handling may be required.

This code should work for any valid Unicode code point in the Basic Multilingual Plane or above it.
