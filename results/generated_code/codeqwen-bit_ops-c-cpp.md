The given code is already written in C++, as it contains the bitwise and arithmetic operations. You can directly run this function in any C++ compiler without needing to convert it into C code.

Here's how you can write this routine in a different way using templates, for a more general-purpose solution:

```cpp
#include <iostream>

template<typename T>
void bitwise(T A, T b) {
    std::cout << "A and b: " << (A & b) << std::endl;
    std::cout << "A or b: " << (A | b) << std::endl;
    std::cout << "A xor b: " << (A ^ b) << std::endl;
    std::cout << "not A: " << ~A << std::endl;
    std::cout << "A << n: " << (A << b) << std::endl; /* left shift */
    std::cout << "A >> n: " << (A >> b) << std::endl; /* On most platforms: arithmetic right shift */
    std::cout << "c >> b: " << ((unsigned T) A >> b) << std::endl; /* logical right shift */
}

int main() {
    bitwise(15, 2);
    return 0;
}
```
In this code, I've used templates to make the function more general. You can use any integer type (like int, long, short etc) as arguments of this function. This will be much easier if you want to apply these operations on a floating-point number or string because those are not integers.
