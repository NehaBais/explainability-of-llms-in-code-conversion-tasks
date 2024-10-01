The following is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

std::wstring_convert<std::codecvt_utf8<char32_t>> conv;

void printSubstring(const std::u32string &s, int n, int m) {
    if (m == -1)
        m = s.size() - n;
    std::wcout << conv.to_bytes(s.substr(n, m)) << std::endl;
}

int main() {
    std::u32string s = U"abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    printSubstring(s, n, m);

    // Print all characters starting at index 2 (c文字化けdef)
    printSubstring(s, n, -1);

    // Print all characters except the last (abc文字化けde)
    printSubstring(s, 0, s.size()-1);

    // Print 3 characters starting with 'b' (bc文)
    auto cpos = s.find(U'b');
    printSubstring(s, cpos+1, m);

    // Print 3 characters starting with "けd" (けde)
    auto spos = s.find(U"けd");
    printSubstring(s, spos+2, m);

    return 0;
}
```

This C++ code uses `std::u32string` to represent the string instead of `String`. The `std::codecvt_utf8<char32_t>` converter is used to convert between UTF-8 and `char32_t`. The function `printSubstring()` is used to print a substring from index `n` with length `m`, or until the end of the string if `m` is -1.

Please note that C++ uses Unicode code point for characters, not 8-bit or 16-bit code units. Also, `std::u32string` is used to represent strings in UTF-32 which can hold any valid Unicode character regardless of its position.
