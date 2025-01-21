The error indicates that the compiler cannot find the header file `unicode/unistr.h`, which is part of the International Components for Unicode (ICU) library. This library is required to handle Unicode operations.

To fix this, you need to ensure that the ICU library is correctly installed on your system and that its include paths are properly set during compilation. If you're using a package manager like vcpkg or conan, make sure to install the ICU package through it. Otherwise, you may need to manually download and build the ICU library yourself.

Here's the corrected code block:

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
  std::cout << icu::UnicodeString(us, n - 1, m).normalize(U_NORMALIZATION_NONE)
            << "\n";

  // starting from n characters in, up to the end of the string;
  std::cout << us.slice(n - 1).normalize(U_NORMALIZATION_NONE) << "\n";

  // whole string minus last character;
  std::cout << icu::UnicodeString(us, 0, -1).normalize(U_NORMALIZATION_NONE)
            << "\n";

  // starting from a known character within the string and of m length
  UChar ch = u'd';
  int32_t indx = us.find(ch);
  if (indx >= 0)
    std::cout << icu::UnicodeString(us, indx, m).normalize(U_NORMALIZATION_NONE)
              << "\n";

  // starting from a known substring within the string and of m length
  icu::UnicodeString chars("cd");
  indx = us.find(chars);
  if (indx >= 0)
    std::cout << icu::UnicodeString(us, indx, m).normalize(U_NORMALIZATION_NONE)
              << "\n";

  return 0;
}
```
