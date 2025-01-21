```cpp
#include <iostream>

void boolean_ops(bool a, bool b) {
    std::cout << "(" << a << " && " << b << ") -> " << (a && b) << std::endl;
    std::cout << "(" << a << " || " << b << ") -> " << (a || b) << std::endl;
    std::cout << "(" << a << " ^ " << b << ") -> " << (a ^ b) << std::endl;
    std::cout << "!" << a << " -> " << (!a) << std::endl;
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
