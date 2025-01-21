 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <bitset>

void bitwise(int16_t a, int16_t b) {
    std::cout << "a:   " << std::bitset<16>(static_cast<uint16_t>(a)) << std::endl;
    std::cout << "b:   " << std::bitset<16>(static_cast<uint16_t>(b)) << std::endl;

    // Bitwise logical operations
    std::cout << "and: " << std::bitset<16>(static_cast<uint16_t>(a & b)) << std::endl;
    std::cout << "or:  " << std::bitset<16>(static_cast<uint16_t>(a | b)) << std::endl;
    std::cout << "xor: " << std::bitset<16>(static_cast<uint16_t>(a ^ b)) << std::endl;
    std::cout << "not: " << std::bitset<16>(static_cast<uint16_t>(~a)) << std::endl;

    if (b < 0) {
        std::cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance)." << std::endl;
        return;
    }

    uint16_t ua = static_cast<uint16_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);

    // Logical shifts (unsigned left operand)
    std::cout << "shl: " << std::bitset<16>(ua << ub) << std::endl;
    std::cout << "shr: " << std::bitset<16>(static_cast<uint16_t>(ua >> ub)) << std::endl;

    // Arithmetic shifts (signed left operand)
    std::cout << "las: " << std::bitset<16>(static_cast<int16_t>(a << ub)) << std::endl;
    std::cout << "ras: " << std::bitset<16>(static_cast<int16_t>(a >> ub)) << std::endl;

    // Rotations
    uint16_t rolResult = (ua << ub) | ((ua >> (16 - ub)));
    std::cout << "rol: " << std::bitset<16>(rolResult) << std::endl;
    uint16_t rorResult = ((ua >> ub) | (ua << (16 - ub)));
    std::cout << "ror: " << std::bitset<16>(rorResult) << std::endl;
}

int main() {
    int16_t a = -460, b = 6;
    bitwise(a, b);
    return 0;
}
```

This C++ code performs the same operations as the provided Go code: it prints the results of bitwise AND, OR, XOR, NOT, left shift, right shift, left arithmetic shift, and rotations on two integers. The shifts and rotations are performed using the second integer, with appropriate type conversions to ensure they are unsigned for logical shifts and signed for arithmetic shifts.
