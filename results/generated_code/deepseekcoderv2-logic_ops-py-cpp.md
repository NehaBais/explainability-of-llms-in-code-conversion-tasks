 Here's how you can convert the given Python function to C++:

```cpp
#include <iostream>
#include <cstdbool> // For bool type and std::boolalpha

void logic(bool a, bool b) {
    std::cout << "a and b: " << (a && b) << std::endl;
    std::cout << "a or b: " << (a || b) << std::endl;
    std::cout << "not a: " << (!a) << std::endl;
}

int main() {
    bool a = true; // Example values, you can change these as needed
    bool b = false;

    logic(a, b);

    return 0;
}
```

This C++ code defines a function `logic` that takes two boolean arguments. It then outputs the result of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments. The `main` function demonstrates how to call this `logic` function with example boolean values.
