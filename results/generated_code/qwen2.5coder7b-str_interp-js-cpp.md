In C++, you can use the `std::string::replace` method to replace a substring in a string, similar to how JavaScript handles string interpolation. Here's the equivalent code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";

    // Find the position of 'X' in the original string
    size_t pos = original.find('X');

    if (pos != std::string::npos) {
        // Replace 'X' with 'little'
        original.replace(pos, 1, little);
    }

    std::cout << "Replaced string: " << original << std::endl;

    return 0;
}
```

### Explanation:
1. **Finding the Position of `X`:** 
   - We use `original.find('X')` to find the position of `X` in the string `original`. If `X` is found, it returns a valid index; otherwise, it returns `std::string::npos`.

2. **Replacing 'X':**
   - If `X` is found (`pos != std::string::npos`), we use `original.replace(pos, 1, little)` to replace the character at position `pos` with the string `little`. The first argument specifies the start position of the substring to be replaced (inclusive), and the second argument specifies the number of characters to replace. Here, `1` means we are replacing a single character.

3. **Output:**
   - Finally, we print the modified string using `std::cout`.

This code will output:

Replaced string: Mary had a little lamb

Note that C++ strings are mutable, unlike JavaScript strings, so you can modify them directly without creating new variables.
