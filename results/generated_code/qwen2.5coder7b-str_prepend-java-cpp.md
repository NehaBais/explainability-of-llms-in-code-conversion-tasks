In C++, you can use the `std::string` class and the `+` operator to concatenate strings, similar to Java. Here is how you would convert the given Java code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "def";
    str = "abc" + str;
    std::cout << str; // Outputs: abcdef
    return 0;
}
```

In this C++ code, `std::string` is used instead of `String`, and the `+` operator is used to concatenate strings. The result is stored back in the same variable `str`.
