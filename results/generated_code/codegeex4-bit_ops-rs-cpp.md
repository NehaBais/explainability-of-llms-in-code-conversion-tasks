```cpp
#include <iostream>
#include <bitset>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    std::cout << "a      = " << std::bitset<8>(a) << std::endl;
    std::cout << "b      = " << std::bitset<8>(b) << std::endl;
    std::cout << "a | b  = " << std::bitset<8>(a | b) << std::endl;
    std::cout << "a & b  = " << std::bitset<8>(a & b) << std::endl;
    std::cout << "a ^ b  = " << std::bitset<8>(a ^ b) << std::endl;
    std::cout << "!a     = " << std::bitset<8>(~a) << std::endl;

    if((sizeof(a)*8) > (b))
        a = a << b;
    
    std::cout << "a << 3 = " << std::bitset<8>(a) << std::endl;
    
    if((sizeof(a)*8) > (b))
        a = a >> b;

    std::cout << "a >> 3 = " << std::bitset<8>(a) << std::endl;

    return 0;
}
```

In C++, the bitwise operations are exactly the same as in Rust. However, to convert left and right shift and rotate operations, we use the shift-left (`<<`) and shift-right (`>>`) operators. The `std::bitset` template is used for binary representation of integers.

Left rotates can be implemented by first performing a bitwise rotation, then doing an XOR operation between shifted bits.
Right rotates can be implemented by first performing a bitwise rotation, then doing an XOR operation between shifted bits.

However, this C++ code does not handle left and right rotate operations as the Rust version does. Because these operations may lead to loss of data (since they move the bits off of one end), they are undefined for unsigned types in C++. If you need to perform a "rotate" on an unsigned type, you will have to implement it manually.
