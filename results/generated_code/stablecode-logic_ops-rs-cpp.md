Here is the equivalent C++ code:

```cpp
#include <iostream>

void boolean_ops(bool a, bool b) {
    std::cout << " " << a << " and " << b << " -> " << (a && b) << std::endl;
    std::cout << " " << a << " or " << b << " -> " << (a || b) << std::endl;
    std::cout << " " << a << " xor " << b << " -> " << (a ^ b) << std::endl;
    std::cout << " not " << a << " -> " << (!a) << std::endl;
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
This C++ program is equivalent to the given Rust code. It takes two boolean values a and b as input to the function `boolean_ops`. It then prints the result of "and", "or" and "not" operations on these two arguments. The main function calls this function with different boolean inputs.
