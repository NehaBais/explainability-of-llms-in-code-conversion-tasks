The following code is the equivalent of your Golang code in C++. The only difference is that C++ has no built-in print formatting like Golang's `%016b`, so we have to use a string stream for printing binary numbers:

```cpp
#include <iostream>
#include <bitset>
#include <cstdint>

void bitwise(int16_t A, int16_t b) {
    std::cout << "A: " << std::bitset<16>(static_cast<uint16_t>(A)) << "\n";
    std::cout << "b: " << std::bitset<16>(static_cast<uint16_t>(b)) << "\n";

    // Bitwise logical operations
    std::cout << "and: " << std::bitset<16>((uint16_t)A & (uint16_t)b) << "\n";
    std::cout << "or:  " << std::bitset<16>((uint16_t)A | (uint16_t)b) << "\n";
    std::cout << "xor: " << std::bitset<16>((uint16_t)A ^ (uint16_t)b) << "\n";
    std::cout << "not: " << std::bitset<16>(~(uint16_t)A) << "\n";

    if (b < 0) {
        std::cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n";
        return;
    }

    // Logical shifts (unsigned left operand)
    std::cout << "shl: " << std::bitset<16>((uint16_t)A << b) << "\n";
    std::cout << "shr: " << std::bitset<16>((uint16_t)A >> b) << "\n";

    // Arithmetic shifts (signed left operand)
    std::cout << "las: " << std::bitset<16>(static_cast<int16_t>(A << b)) << "\n";
    std::cout << "ras: " << std::bitset<16>(static_cast<int16_t>(A >> b)) << "\n";

    // Rotations
    std::cout << "rol: " << std::bitset<16>((uint16_t)A << b | (uint16_t)A >> (16 - b)) << "\n";
    std::cout << "ror: " << std::bitset<16>(((uint16_t)A >> b) | (uint16_t)A << (16 - b)) << "\n";
}

int main() {
    int16_t A = -460, b = 6;
    bitwise(A, b);
    return 0;
}
```

This code works the same way as your Golang version: it defines a `bitwise()` function that performs bitwise AND, OR, XOR operations on two integers, and also does bitwise NOT on the first integer. It then does left and right shifts/rotates on the first integer with shift amount equal to the second integer. The main function calls this bitwise function with test values.
