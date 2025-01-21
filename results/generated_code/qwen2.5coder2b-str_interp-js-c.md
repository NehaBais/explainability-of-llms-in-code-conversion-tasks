To convert this JavaScript code to C, you can use string formatting functions depending on your programming language. Here's how you might do it using C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";

    // Using std::stringstream for basic string manipulation
    std::stringstream ss;
    ss << original;
    ss << " " << little;

    std::string replaced = ss.str();

    // Output the result
    std::cout << replaced << std::endl;

    return 0;
}
```

In this C++ code, we use `std::stringstream` to format the string. This function allows us to insert variables into a string by placing them inside placeholders (like `%d`, `%s`) and then formatting the string using those placeholders.

Note: The above is a basic demonstration using C++, which may not support all features as compared to JavaScript in terms of syntax. For more complex scenarios such as handling different languages or custom string interpolation, you would need to consider using an external library or implement the logic manually.
