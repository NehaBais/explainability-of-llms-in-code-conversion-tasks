The given C code can be converted to C++ as follows:

```cpp
#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
        }
    else if (a == b) {
        std::cout << a << " is equal to " << b << std::endl;
        }
    else {
        std::cout << a << " is greater than " << b << std::endl;
        }

    return 0;
}
```

This C++ code does the same thing as the given C code. It takes two integers from the user and displays a message depending on whether the first integer is less than, equal to, or greater than the second integer.
