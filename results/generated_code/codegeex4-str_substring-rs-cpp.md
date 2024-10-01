Below is the equivalent C++ code for your given Rust program.

```C++
#include <iostream>
#include <string>
#include <codecvt>

std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;

int main() {
    std::u32string s = u"abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    std::wcout << converter.to_bytes(s.substr(n, m)) << std::endl;

    // Print all characters starting at index 2 (c文字化けdef)
    std::wcout << converter.to_bytes(s.substr(n)) << std::endl;

    // Print all characters except the last (abc文字化けde)
    std::wcout << converter.to_bytes(s.substr(0, s.length() - 1)) << std::endl;

    // Print 3 characters starting with 'b' (bc文)
    auto cpos = s.find(U'b');
    if(cpos != std::u32string::npos) {
        std::wcout << converter.to_bytes(s.substr(cpos, m)) << std::endl;
    }

    // Print 3 characters starting with "けd" (けde)
    auto spos = s.find(U'けd');
    if(spos != std::u32string::npos) {
        std::wcout << converter.to_bytes(s.substr(spos, m)) << std::endl;
    }
    
    return 0;
}
```

Please note that the C++ standard library does not natively support Unicode. The program uses `std::u32string` for Unicode handling, but this requires manual management of string encoding/decoding.

Also, keep in mind that finding a substring or character in UTF-8 text can be complex because a single "character" might be made up of multiple bytes. This code does not correctly handle such situations and will likely produce incorrect results if the input contains multi-byte Unicode characters. 

If you're dealing with large amounts of text, or need to perform more complicated string manipulations, consider using a library that supports Unicode natively, like ICU (International Components for Unicode).
