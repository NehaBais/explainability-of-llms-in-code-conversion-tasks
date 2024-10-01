Below is your Python code converted to C++ using the ICU (International Components for Unicode) library, which supports a wide range of Unicode code points.

```cpp
#include <iostream>
#include <unicode/unistr.h>

int main() {
    UErrorCode status = U_ZERO_ERROR;
    std::string s = "abcdefgh";
    int n = 2, m = 3;

    // ICU's UnicodeString can handle all Unicode characters.
    icu::UnicodeString us(s.c_str());

    // starting from n=2 characters in and m=3 in length
    std::cout << icu::UnicodeString(us, n-1, m).normalize(U_NORMALIZATION_NONE) << "\n";
    
    // starting from n characters in, up to the end of the string;
    std::cout << us.slice(n-1).normalize(U_NORMALIZATION_NONE) << "\n";

    // whole string minus last character;
    std::cout << icu::UnicodeString(us, 0, -1).normalize(U_NORMALIZATION_NONE) << "\n";

    // starting from a known character within the string and of m length
    UChar ch = u'd';
    int32_t indx = us.find(ch);
    if (indx >= 0)
        std::cout << icu::UnicodeString(us, indx, m).normalize(U_NORMALIZATION_NONE) << "\n";

    // starting from a known substring within the string and of m length
    icu::UnicodeString chars("cd");
    indx = us.find(chars);
    if (indx >= 0)
        std::cout << icu::UnicodeString(us, indx, m).normalize(U_NORMALIZATION_NONE) << "\n";

    return 0;
}
```
Please note that to use this code, you need to have the ICU library installed on your system and properly linked when compiling. For example, using g++:

g++ -o myprogram myprogram.cpp -licuuc

Also, please be aware that this C++ version does not return indices of characters or substrings like the Python code does. This functionality is more complex in Unicode-based languages than it is in ASCII-based ones.
