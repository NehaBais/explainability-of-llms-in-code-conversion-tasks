Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <bitset>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    std::cout << "a      = " << std::bitset<8>(a) << '\n';
    std::cout << "b      = " << std::bitset<8>(b) << '\n';
    std::cout << "a | b  = " << std::bitset<8>(a | b) << '\n';
    std::cout << "a & b  = " << std::bitset<8>(a & b) << '\n';
    std::cout << "a ^ b  = " << std::bitset<8>(a ^ b) << '\n';
    std::cout << "~a     = " << std::bitset<8>((~a & 0xFF)) << '\n'; // Using bitwise AND with 0xFF to preserve the sign bit
    std::cout << "a << " << (int)b << " = " << std::bitset<8>(a << b) << '\n';
    
    unsigned char arith_shift_result = a >> b; 
    if(arith_shift_result & (1 << 7)) { // Check if the sign bit is set
        arith_shift_result |= (~0u << (8 - b)); // Sign extend to preserve the sign bit
    }
    std::cout << "a >> " << (int)b << " = " << std::bitset<8>(arith_shift_result) << '\n';

    unsigned char left_rotate_result = a;
    while(b--) {
        bool MSB = (left_rotate_result & 0x80); // Get the most significant bit
        left_rotate_result <<= 1; // Left shift by one
        if(MSB)
            left_rotate_result |= 1; // Set the least significant bit if necessary
    }
    std::cout << "a <<rotate> " << (int)b << " = " << std::bitset<8>(left_rotate_result) << '\n';

    unsigned char right_rotate_result = a;
    while(b--) {
        bool LSB = (right_rotate_result & 1); // Get the least significant bit
        right_rotate_result >>= 1; // Right shift by one
        if(LSB)
            right_rotate_result |= 0x80; // Set the most significant bit if necessary
    }
    std::cout << "a >>rotate> " << (int)b << " = " << std::bitset<8>(right_rotate_result) << '\n';

    return 0;
}
```
Please note that in C++, bitwise right shift on negative numbers is undefined. Therefore, to simulate a right arithmetic shift, we first perform the logical right shift and then manually set the sign bit if it was originally set.

Also, for left rotation and right rotation, a while loop with b (the shift amount) iterations is used to simulate these operations manually.
