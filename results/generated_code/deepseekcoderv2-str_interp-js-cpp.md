 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";
    
    // Find and replace the substring "X" with "little"
    size_t pos = original.find("X");
    if (pos != std::string::npos) {
        original.replace(pos, 1, little);
    }

    std::cout << original << std::endl; // Output: Mary had a little lamb
    return 0;
}
```

In this C++ code:
- We define the original string and the replacement string.
- We use the `find` method to locate the position of "X" in the original string.
- If "X" is found, we replace it with "little" using the `replace` method.
- Finally, we output the modified string.
