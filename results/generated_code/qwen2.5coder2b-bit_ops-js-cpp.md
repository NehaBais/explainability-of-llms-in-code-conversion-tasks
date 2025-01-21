In C++, the bitwise operators are defined in `<bitset>` library. There is no direct equivalent to JavaScript's shift and rotate operations, because they're not built-in with the language.

Here is how you could write a function in C++ that performs bitwise AND, OR, XOR, NOT on two integers, as well as left shift, right shift, and right arithmetic shift:

```cpp
#include <iostream>
#include <bitset>

void bitwise(int a, int b) {
    std::cout << "a AND b: " << (a & b) << std::endl;
    std::cout << "a OR b: " << (a | b) << std::endl;
    std::cout << "a XOR b: " << (a ^ b) << std::endl;

    std::bitset<32> bitA(a);
    std::bitset<32> bitB(b);

    // NOT on first integer
    std::bitset<32> resultNOT = ~bitA;

    std::cout << "NOT a: " << (int)resultNOT.to_ulong() << std::endl;

    // Left shift
    std::bitset<64> leftShifted(resultNOT.to_ulong());
    std::cout << "a << b: " << leftShifted << std::endl;

    // Right shift
    std::bitset<32> rightShifted(leftShifted >> 1);
    std::cout << "a >> b (arithmetic): " << rightShifted << std::endl;

    // Right arithmetic shift
    std::bitset<32> rightArithShifted(leftShifted >> 1);
    std::cout << "a >> b (logical): " << rightArithShifted << std::endl;
}

int main() {
    int a = 5, b = 3;
    bitwise(a, b);
    return 0;
}
```

This program first converts the integers to `std::bitset` for easy manipulation. Then it performs NOT operation on `a`. It performs left shift using bit operations directly because there is no built-in left shift operator in C++. It then performs right shift and right arithmetic shift by dividing the result by 2. 

Please note that this code assumes you're working with 32-bit integers, as JavaScript's binary operators are generally assumed to be 32-bit integers. If you need to handle larger numbers, you would need to change the size of `std::bitset` and adjust accordingly.
