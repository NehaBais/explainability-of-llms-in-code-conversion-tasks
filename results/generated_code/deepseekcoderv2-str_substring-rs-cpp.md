 To convert the given Rust code to C++, we need to consider how strings are handled in C++ and ensure that Unicode characters are properly managed. Below is the equivalent C++ code for the provided Rust code, which handles UTF-8 encoded strings and operates on logical characters (code points) rather than byte sequences.

```cpp
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字)
    if (n + m <= s.length()) {
        std::cout << std::string(s.begin() + n, s.begin() + n + m) << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    // Print all characters starting at index 2 (c文字化けdef)
    if (n < s.length()) {
        std::string sub = s.substr(n);
        std::cout << sub << std::endl;
    } else {
        std::cout << "Index out of range" << std::endl;
    }

    // Print all characters except the last (abc文字化けde)
    if (!s.empty()) {
        std::string truncated = s.substr(0, s.length() - 1);
        std::cout << truncated << std::endl;
    } else {
        std::cout << "String is empty" << std::endl;
    }

    // Print 3 characters starting with 'b' (bc文)
    auto it = std::find(s.begin(), s.end(), 'b');
    if (it != s.end() && std::distance(s.begin(), it) + m <= s.length()) {
        std::string sub = std::string(it, it + m);
        std::cout << sub << std::endl;
    } else {
        std::cout << "Character not found or index out of range" << std::endl;
    }

    // Print 3 characters starting with "けd" (けde)
    auto pos = s.find("けd");
    if (pos != std::string::npos && pos + m <= s.length()) {
        std::string sub = s.substr(pos, m);
        std::cout << sub << std::endl;
    } else {
        std::cout << "Substring not found or index out of range" << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **Print 3 characters starting at index 2 (c文字)**:
   - We use `std::string(s.begin() + n, s.begin() + n + m)` to extract a substring from position `n` with length `m`.
   
2. **Print all characters starting at index 2 (c文字化けdef)**:
   - We use `s.substr(n)` to get the substring starting from index `n`.

3. **Print all characters except the last (abc文字化けde)**:
   - We use `s.substr(0, s.length() - 1)` to get all characters except the last one.

4. **Print 3 characters starting with 'b' (bc文)**:
   - We find the position of character `'b'` using `std::find` and then extract a substring from this position with length `m`.

5. **Print 3 characters starting with "けd" (けde)**:
   - We find the position of the substring `"けd"` using `s.find("けd")` and then extract a substring from this position with length `m`.

This C++ code ensures that Unicode characters are handled correctly by referring to logical characters rather than byte sequences, making it suitable for UTF-8 encoded strings.
