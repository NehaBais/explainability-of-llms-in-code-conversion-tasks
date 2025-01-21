Here's how you can convert your JavaScript code into C++:

```c++
#include <iostream>
#include <string>

int main() {
    // Create a string variable equal to any text value.
    std::string s = ", World";

    // Prepend the string variable with another string literal.
    s = "Hello" + s;

    // Print the final result
    std::cout << s << std::endl;

    return 0;
}
```

This C++ code achieves the same result as your JavaScript code: it creates a string `s` and prepends another string to it. Finally, it prints out the resulting string.
