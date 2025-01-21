The error is that the C++ compiler cannot find the header file "iostream".
The corrected code is:
```c++
#include <iostream>
int main() {
    int a = 10;
    std::cout << "a         = " << a << std::endl;
    std::cout << "a + 3     = " << a + 3 << std::endl;
    std::cout << "a - 2     = " << a - 2 << std::endl;
    std::cout << "a * 5     = " << a * 5 << std::endl;
    std::cout << "a / 2     = " << a / 2 << std::endl;
    std::cout << "a % 4     = " << a % 4 << std::endl;
    std::cout << "!a        = " << !a << std::endl;
    std::cout << "a & 3     = " << (a & 3) << std::endl;
    std::cout << "a | 5     = " << (a | 5) << std::endl;
    std::cout << "a ^ 7     = " << (a ^ 7) << std::endl;
    std::cout << "a << 3   = " << (a << 3) << std::endl;
    std::cout << "a >> 3   = " << (a >> 3) << std::endl;
}
```

