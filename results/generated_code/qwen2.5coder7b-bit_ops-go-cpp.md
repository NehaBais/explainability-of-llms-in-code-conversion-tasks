Here is the equivalent C++ code for your Golang code. Note that C++ does not have built-in left and right rotate operations. So I will use bitwise AND, OR, XOR, NOT, and shift operators to achieve this.

```cpp
#include <iostream>
#include <bitset>

void bitwise(int a, int b) {
    std::cout << "a:   " << std::bitset<16>(a) << "\n";
    std::cout << "b:   " << std::bitset<16>(b) << "\n";

    // Bitwise logical operations
    std::cout << "and: " << std::bitset<16>(a & b) << "\n";
    std::cout << "or:  " << std::bitset<16>(a | b) << "\n";
    std::cout << "xor: " << std::bitset<16>(a ^ b) << "\n";
    std::cout << "not: " << std::bitset<16>(~a) << "\n";

    if (b < 0) {
        std::cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n";
        return;
    }

    // Logical shifts (unsigned left operand)
    std::cout << "shl: " << std::bitset<16>(static_cast<unsigned short>(a) << static_cast<unsigned short>(b)) << "\n";
    std::cout << "shr: " << std::bitset<16>(static_cast<unsigned short>(a) >> static_cast<unsigned short>(b)) << "\n";

    // Arithmetic shifts (signed left operand)
    std::cout << "las: " << std::bitset<16>(a << b) << "\n";
    std::cout << "ras: " << std::bitset<16>(a >> b) << "\n";

    // Rotations
    std::cout << "rol: " << std::bitset<16>((static_cast<unsigned short>(a) << static_cast<unsigned short>(b)) | (a >> (16 - b))) << "\n";
    std::cout << "ror: " << std::bitset<16>(((a >> static_cast<unsigned short>(b)) & ((1 << (16 - b)) - 1)) | (static_cast<unsigned short>(a) << (16 - b)))) << "\n";
}

int main() {
    int a = -460, b = 6;
    bitwise(a, b);
    return 0;
}
```

This code will print out the binary representation of `a` and `b`, perform the requested operations on them, and then print out the results in binary.
