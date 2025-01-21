 Here's the equivalent code in C++:

```cpp
#include <iostream>

void boolean_ops(bool a, bool b) {
    std::cout << std::boolalpha; // Print bools as true/false
    std::cout << "and (" << a << ", " << b << ") -> " << (a && b) << std::endl;
    std::cout << "or  (" << a << ", " << b << ") -> " << (a || b) << std::endl;
    // In C++, the XOR operation is not directly supported by the standard library, so we use the ^ operator for bitwise XOR
    std::cout << "xor (" << a << ", " << b << ") -> " << (a != b) << std::endl;
    std::cout << "not (" << a << ") -> " << !a << std::endl;
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```

This C++ code defines a function `boolean_ops` that takes two boolean arguments and prints the results of "and", "or", and "not" operations on them. The `std::boolalpha` manipulator is used to print booleans as `true` or `false`. For the XOR operation, we use the inequality operator (`!=`) since there isn't a direct boolean XOR in C++.
