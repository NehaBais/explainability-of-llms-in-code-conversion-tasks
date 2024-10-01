Here is the equivalent code in C++:
```
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
Note that in C++, the `bool` type is a built-in type and does not need to be explicitly declared. Additionally, the syntax for printing to the console is different from Rust's, as it uses `std::cout` instead of `println!`.
