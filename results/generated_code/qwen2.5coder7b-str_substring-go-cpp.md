```cpp
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

std::u32string toUtf32(const std::string& str) {
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    return converter.from_bytes(str);
}

std::string fromUtf32(const std::u32string& str) {
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    return converter.to_bytes(str);
}

void displaySubstring(const std::string& s, int n, int m) {
    std::u32string u32s = toUtf32(s);
    if (n + m > u32s.size()) {
        std::cout << "Error: Substring out of bounds." << std::endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << ' ';
    }
    for (int i = 0; i < m; ++i) {
        std::cout << char(u32s[n + i]);
    }
    std::cout << std::endl;
}

void displaySubstringFromChar(const std::string& s, char c, int m) {
    std::u32string u32s = toUtf32(s);
    size_t dx = u32s.find(c);
    if (dx == std::u32string::npos) {
        std::cout << "Error: Character not found." << std::endl;
        return;
    }
    for (size_t i = 0; i < dx; ++i) {
        std::cout << ' ';
    }
    for (int i = 0; i < m; ++i) {
        std::cout << char(u32s[dx + i]);
    }
    std::cout << std::endl;
}

void displaySubstringFromSubstr(const std::string& s, const std::string& substr, int m) {
    std::u32string u32s = toUtf32(s);
    size_t sx = u32s.find(toUtf32(substr));
    if (sx == std::u32string::npos) {
        std::cout << "Error: Substring not found." << std::endl;
        return;
    }
    for (size_t i = 0; i < sx; ++i) {
        std::cout << ' ';
    }
    for (int i = 0; i < m; ++i) {
        std::cout << char(u32s[sx + i]);
    }
    std::cout << std::endl;
}

int main() {
    std::string s = "ABCDEFGH";
    int n, m;

    // for reference
    std::cout << "Index: 01234567" << std::endl;
    std::cout << "String:" << s << std::endl;

    // starting from n characters in and of m length
    n = 2, m = 3;
    std::cout << "Start " << n << ", length " << m << ": ";
    displaySubstring(s, n, m);

    // starting from n characters in, up to the end of the string
    n = 2;
    std::cout << "Start " << n << ", to end: ";
    displaySubstring(s, n, s.size() - n + 1);

    // whole string minus last character
    std::cout << "All but last: ";
    displaySubstring(s, 0, s.size() - 2);

    // starting from a known character within the string and of m length
    char c = 'D';
    std::cout << "Start '" << c << "', length " << m << ": ";
    displaySubstringFromChar(s, c, m);

    // starting from a known substring within the string and of m length
    std::string substr = "DE";
    std::cout << "Start \"" << substr << "\", length " << m << ": ";
    displaySubstringFromSubstr(s, substr, m);

    return 0;
}
```
This C++ code implements the same functionality as the Go code provided. It uses the `std::u32string` type to handle Unicode strings and provides functions to display substrings based on different criteria. The `toUtf32` and `fromUtf32` functions convert between UTF-8 encoded strings and `std::u32string`.
