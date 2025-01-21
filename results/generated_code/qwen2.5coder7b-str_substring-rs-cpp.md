Converting Rust code to C++ involves using appropriate libraries for Unicode handling and string manipulation. In C++, the standard library does not directly support Unicode or UTF-8 natively, so we need to use a third-party library like `unicode-segmentation` for processing Unicode strings.

Here's how you can implement the same functionality in C++:

1. Install the `unicode-segmentation` library.
2. Use it to handle Unicode characters correctly.

Below is the equivalent C++ code using `unicode-segmentation`:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include "unicode/segment.h"

void printSubstring(const std::u32string& str, size_t start, size_t length) {
    auto segments = unicode::segment(str);
    std::u32string result;
    for (size_t i = 0; i < length && i + start < segments.size(); ++i) {
        result += segments[start + i];
    }
    std::cout << unicode::toUTF8(result) << std::endl;
}

int main() {
    std::u32string s = U"abc文字化けdef";
    size_t n = 2;
    size_t m = 3;

    // Print 3 characters starting at index 2 (c文字)
    printSubstring(s, n, m);

    // Print all characters starting at index 2 (c文字化けdef)
    printSubstring(s, n, s.size() - n);

    // Print all characters except the last (abc文字化けde)
    printSubstring(s, 0, s.size() - 1);

    // Find the position of 'b' and print 3 characters starting with 'b' (bc文)
    auto bpos = std::find(s.begin(), s.end(), U'b');
    if (bpos != s.end()) {
        printSubstring(s, bpos - s.begin(), m);
    } else {
        std::cout << "Character 'b' not found." << std::endl;
    }

    // Find the position of "けd" and print 3 characters starting with "けd" (けde)
    auto kesepos = s.find(U"けd");
    if (kesepos != std::string::npos) {
        printSubstring(s, kesepos, m);
    } else {
        std::cout << "Substring \"けd\" not found." << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **Dependencies**: Ensure you have the `unicode-segmentation` library installed and linked in your project.
2. **Unicode Handling**: The `unicode/segment.h` header provides functions to handle Unicode segments.
3. **Character Segmentation**: The `unicode::segment` function splits the string into logical characters (code points).
4. **Substring Extraction**: The `printSubstring` function extracts a substring based on the start index and length, using the segmented characters.

### Notes:
- Ensure that the input string is in UTF-32 format (`std::u32string`) to handle Unicode correctly.
- The `unicode-segmentation` library provides functions to convert between different UTF encodings if needed.
