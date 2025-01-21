In C++, string interpolation is not directly supported as it is in Golang. However, you can achieve similar results using the `std::format` function from the C++17 standard library. Here's how you can modify your code:

```cpp
#include <iostream>
#include <format> // for std::format

int main() {
    std::string str = "Mary had a {} lamb";
    std::string txt = "big";

    std::cout << std::format(str, txt) << std::endl;  // Outputs: Mary had a big lamb
    return 0;
}
```

In this code, `std::format` is used to format the string. The function takes a format string and one or more arguments. In this case, it replaces any placeholders in the format string (`{}`) with the values provided for `txt`.

Please note that you need to compile the program using a compiler that supports C++17 (or higher). If you are using GCC 4.x, you might not have access to C++17 features.
