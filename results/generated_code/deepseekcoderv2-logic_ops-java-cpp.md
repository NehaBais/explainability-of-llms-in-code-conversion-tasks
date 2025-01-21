 Here's the equivalent code in C++:

```cpp
#include <iostream>

void logic(bool a, bool b) {
    std::cout << "a AND b: " << (a && b) << std::endl;
    std::cout << "a OR b: " << (a || b) << std::endl;
    std::cout << "NOT a: " << (!a) << std::endl;
}

int main() {
    bool a = true; // or false, depending on your test case
    bool b = false; // or true, depending on your test case
    logic(a, b);
    return 0;
}
```

This C++ code defines a function `logic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on those arguments. The `main` function demonstrates how to call this function with example boolean values.
