Here is the equivalent code in C++:

```C++
#include <iostream>

void boolean_ops(bool A, bool b) {
    std::cout << "(" << A << " && " << b << ") -> " << (A && b) << std::endl;
    std::cout << "(" << A << " || " << b << ") -> " << (A || b) << std::endl;
    // C++ does not support the bitwise XOR operator for bools, so we'll use logical AND and OR instead.
    std::cout << "(" << A << " xor " << b << ") -> " << ((!A && b) || (A && !b)) << std::endl;
    std::cout << "not (" << A << ") -> " << (!A) << std::endl;
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```

Please note that C++ doesn't support the bitwise XOR operator (`^`) for boolean types. Instead, we use logical AND (`&&`) and OR (`||`) operations in combination with NOT (`!`) to replicate XOR behavior.
