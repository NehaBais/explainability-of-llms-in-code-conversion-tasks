 Here's the equivalent code in C++ that performs bitwise operations as specified:

```cpp
#include <iostream>
#include <bitset>

int main() {
    uint8_t a = 105;
    uint8_t b = 91;
    
    std::cout << "a      = " << std::bitset<8>(a) << std::endl;
    std::cout << "b      = " << std::bitset<8>(b) << std::endl;
    std::cout << "a | b  = " << std::bitset<8>(a | b) << std::endl;
    std::cout << "a & b  = " << std::bitset<8>(a & b) << std::endl;
    std::cout << "a ^ b  = " << std::bitset<8>(a ^ b) << std::endl;
    
    // Bitwise NOT is not directly supported for unsigned integers in C++, but we can print the result as if it were a signed integer to see two's complement representation.
    int8_t negatedA = ~static_cast<int8_t>(a);
    std::cout << "!a     = " << std::bitset<8>(negatedA) << std::endl;
    
    // Left shift and right shift with a shift amount of b
    uint8_t leftShiftedA = a << b;
    std::cout << "a << b = " << std::bitset<8>(leftShiftedA) << std::endl;
    
    uint8_t rightShiftedA = a >> b;
    std::cout << "a >> b = " << std::bitset<8>(rightShiftedA) << std::endl;
    
    // Right arithmetic shift is the same as regular right shift for unsigned integers in C++
    uint8_t rightArithmeticShiftedA = static_cast<int8_t>(a) >> b;
    std::cout << "a >> (arithmetic) b = " << std::bitset<8>(rightArithmeticShiftedA) << std::endl;
    
    // Left rotate is not directly supported in C++, but you can implement it using bitwise operations.
    uint8_t leftRotatedA = (a << b) | ((a >> (8 - b)) & ((1 << b) - 1));
    std::cout << "a <<< b = " << std::bitset<8>(leftRotatedA) << std::endl;
    
    // Right rotate is not directly supported in C++, but you can implement it using bitwise operations.
    uint8_t rightRotatedA = (a >> b) | ((a << (8 - b)) & ((1 << 8) - 1));
    std::cout << "a >>> b = " << std::bitset<8>(rightRotatedA) << std::endl;
    
    return 0;
}
```

Note: In C++, bitwise NOT for unsigned integers is not directly supported, so we cast the integer to a signed integer type to get its two's complement representation. Similarly, left and right rotate operations are not natively supported in C++ without additional bitwise manipulations. The provided code demonstrates how to implement these operations using basic bitwise operations.
