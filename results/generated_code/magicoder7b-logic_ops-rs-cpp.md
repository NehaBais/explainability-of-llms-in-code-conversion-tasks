 ```cpp
#include <iostream>

void booleanOps(bool a, bool b) {
    std::cout << a << " and " << b << " -> " << (a && b) << std::endl;
    std::cout << a << " or " << b << " -> " << (a || b) << std::endl;
    std::cout << a << " xor " << b << " -> " << (a ^ b) << std::endl;
    std::cout << "not " << a << " -> " << !a << std::endl;
}

int main() {
    booleanOps(true, true);
    booleanOps(true, false);
    booleanOps(false, true);
    booleanOps(false, false);
    
    return 0;
}
```
This code does the same as the Rust version but it uses C++ style for output and input.

Note: The "xor" operation in Rust is often referred to as "exclusive or", so the equivalent line in this conversion is using "^" instead of "xor".
