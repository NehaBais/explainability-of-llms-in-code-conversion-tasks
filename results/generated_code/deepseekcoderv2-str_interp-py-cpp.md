 Sure! Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string extra = "little";
    std::string new_str = "Mary had a " + extra + " lamb.";
    std::cout << new_str << std::endl;
    return 0;
}
```

In this C++ code:
- We define the string `extra` with the value "little".
- We use the `+` operator to concatenate the strings and insert the value of `extra` into the interpolated string.
- Finally, we print the resulting string using `std::cout`.
