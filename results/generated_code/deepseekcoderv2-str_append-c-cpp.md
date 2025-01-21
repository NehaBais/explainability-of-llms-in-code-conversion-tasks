 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Good Morning";
    std::string cstr = " to all";
    std::string cstr2 = " !!!";

    // Append the strings using the most idiomatic way in C++
    str += cstr;
    str += cstr2;

    // Show the contents of the variable after the append operation
    std::cout << str << std::endl;

    return 0;
}
```

In this C++ code:
- We use `std::string` for the string manipulation.
- The concatenation is done using the `+=` operator, which is idiomatic in C++.
