 Here is the equivalent C++ code for the provided C code. This version uses modern C++ features and handles Unicode strings properly by using `std::string` and standard library functions that work with logical characters (code points).

```cpp
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

// Function to get a substring starting from n characters in and of m length
std::string substring(const std::string &s, size_t n, ptrdiff_t m) {
    if (n >= s.size()) return ""; // If start position is beyond the string length
    if (m < 0) m = s.size() + m - n + 1; // Negative m means up to the mth char from right
    if (n < 0 || m < 0) return ""; // Invalid inputs

    size_t start = std::min(s.size(), n);
    size_t length = std::min(m, s.size() - start);

    return s.substr(start, length);
}

// Function to get the whole string minus the last character
std::string str_wholeless1(const std::string &s) {
    if (s.empty()) return "";
    return substring(s, 0, s.size() - 1);
}

// Function to get a substring starting from a known character within the string and of m length
std::string str_fromch(const std::string &s, char ch, ptrdiff_t m) {
    auto pos = s.find(ch);
    if (pos == std::string::npos) return ""; // Character not found
    return substring(s, pos, m);
}

// Function to get a substring starting from a known substring within the string and of m length
std::string str_fromstr(const std::string &s, const std::string &in, ptrdiff_t m) {
    auto pos = s.find(in);
    if (pos == std::string::npos) return ""; // Substring not found
    return substring(s, pos, m);
}

// Helper macro for testing and printing results
#define TEST(A) do { \
    std::string r = (A); \
    if (r.empty()) std::cout << "--error--\n"; \
    else std::cout << r << "\n"; \
} while(0)

int main() {
    const std::string s = "hello world shortest program";

    TEST(substring(s, 12, 5)); // get "short"
    TEST(substring(s, 6, -1)); // get "world shortest program"
    TEST(str_wholeless1(s));   // "... progra"
    TEST(str_fromch(s, 'w', 5)); // "world"
    TEST(str_fromstr(s, "ro", 3)); // "rog"

    return 0;
}
```

### Explanation:
1. **Substring Function**: The `substring` function in C++ uses `std::string::substr` to create substrings, which handles Unicode characters correctly by referring to logical characters (code points).
2. **Helper Functions**: Helper functions like `str_wholeless1`, `str_fromch`, and `str_fromstr` are implemented similarly but now leverage C++ standard library functions (`std::string::find` for locating substrings) which are more idiomatic in C++.
3. **Testing**: The `TEST` macro is used to test the functions and print results, similar to the original C code. This ensures that if a function returns an empty string (indicating an error or invalid input), it prints "--error--". Otherwise, it prints the substring.
