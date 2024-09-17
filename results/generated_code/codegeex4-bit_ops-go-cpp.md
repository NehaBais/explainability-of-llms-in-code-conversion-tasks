```cpp
#include <iostream>
#include <iomanip>

void bitwise(int a, int b) {
    std::cout << "a:   " << std::bitset<16>(a) << "\n";
    std::cout << "b:   " << std::bitset<16>(b) << "\n";

    // Bitwise logical operations
    std::cout << "and: " << std::bitset<16>(a&b) << "\n";
    std::cout << "or:  " << std::bitset<16>(a|b) << "\n";
    std::cout << "xor: " << std::bitset<16>(a^b) << "\n";
    std::cout << "not: " << std::bitset<16>((unsigned int)(~a)) << "\n";

    if (b < 0) {
        std::cout << "Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n";
        return;
    }
    uint32_t ua = static_cast<uint32_t>(a);
    uint32_t ub = static_cast<uint32_t>(b);

    // Logical shifts (unsigned left operand)
    std::cout << "shl: " << std::bitset<16>((static_cast<unsigned int>(ua) << ub)) << "\n";
    std::cout << "shr: " << std::bitset<16>((static_cast<unsigned int>(ua) >> ub)) << "\n";

    // Arithmetic shifts (signed left operand)
    std::cout << "las: " << std::bitset<16>((a << ub)) << "\n";
    std::cout << "ras: " << std::bitset<16>((a >> ub)) << "\n";

    // Rotations
    uint32_t rol = ((ua << ub) & 0xffff) | (ua >> (16 - ub));
    std::cout << "rol: " << std::bitset<16>(static_cast<int>(rol)) << "\n";
    int ror = (ua >> ub) | ((ua << (16 - ub)) & 0xffff);
    std::cout << "ror: " << std::bitset<16>(ror) << "\n";
}

int main() {
    int a, b;
    a = -460;
    b = 6;
    bitwise(a, b);
}
```
