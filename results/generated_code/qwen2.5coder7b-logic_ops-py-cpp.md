Here is the equivalent code in C++:

```cpp
#include <iostream>

void logic(bool a, bool b) {
    std::cout << "a and b: " << (a && b) << std::endl;
    std::cout << "a or b: " << (a || b) << std::endl;
    std::cout << "not a: " << (!a) << std::endl;
}

int main() {
    logic(true, false);
    return 0;
}
```

In this C++ code, the `&&` operator is used for logical AND, the `||` operator is used for logical OR and the `!` operator is used for logical NOT. 

The `std::cout` statement is used to print the result of operations. It is equivalent to the Python's `print()` function.

And the `main` function calls the `logic` function with two arguments as an example.
