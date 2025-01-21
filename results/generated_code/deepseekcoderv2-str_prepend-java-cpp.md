 Certainly! Here's how you can convert the given Java code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "def";
    str = "abc" + str;
    std::cout << str << std::endl;
    return 0;
}
```

In this C++ code:
1. We include the necessary headers for input/output operations and string manipulation.
2. We declare a `std::string` variable named `str` and initialize it with the value "def".
3. We prepend the string literal "abc" to the `str` using the concatenation operator `+`.
4. Finally, we print the modified string using `std::cout`.
