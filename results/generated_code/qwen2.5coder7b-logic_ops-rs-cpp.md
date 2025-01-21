Here is the equivalent code in C++:
```cpp
#include <iostream>

void boolean_ops(bool a, bool b) {
    std::cout << a << " and " << b << " -> " << (a && b) << std::endl;
    std::cout << a << " or " << b << " -> " << (a || b) << std::endl;
    std::cout << a << " xor " << b << " -> " << (a ^ b) << std::endl;
    std::cout << "not " << a << " -> " << (!a) << std::endl;
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
}
```
This C++ code does the same thing as the Rust code you provided. It defines a function `boolean_ops` that takes two bool arguments and prints the result of the "and", "or", and "xor" operations on these arguments, as well as the negation of the first argument. In the main function, it calls this function with all combinations of boolean values.
