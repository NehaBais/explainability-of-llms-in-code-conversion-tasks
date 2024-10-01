Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Good Morning";
    std::string cstr = " to all";
    std::string cstr2 = " !!";

    // Append the string variable with another string literal
    str += cstr;
    str += cstr2;

    // Print the contents of the variable after the append operation.
    std::cout << str << std::endl;

    return 0;
}
```

This C++ code performs the same operations as the original C code. The main difference is that in C++, we use `std::string` for string variables, and we can directly concatenate two `std::string` objects using the `+=` operator.
