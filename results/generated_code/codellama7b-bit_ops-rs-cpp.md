```
#include <iostream>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    std::cout << "a      = " << std::bitset<8>(a) << std::endl;
    std::cout << "b      = " << std::bitset<8>(b) << std::endl;
    std::cout << "a | b  = " << std::bitset<8>(a | b) << std::endl;
    std::cout << "a & b  = " << std::bitset<8>(a & b) << std::endl;
    std::cout << "a ^ b  = " << std::bitset<8>(a ^ b) << std::endl;
    std::cout << "!a     = " << std::bitset<8>(~a) << std::endl;
    std::cout << "a << 3 = " << std::bitset<8>(a << 3) << std::endl;
    std::cout << "a >> 3 = " << std::bitset<8>(a >> 3) << std::endl;
}
```
This code uses the `std::bitset` class from the C++ standard library to display the binary representation of the integers. It also uses the bitwise operators `|`, `&`, `^`, and `~` to perform the desired operations on the integers. The left shift operator (`<<`) is used to shift the bits of `a` to the left by 3 positions, while the right shift operator (`>>`) is used to shift the bits of `a` to the right by 3 positions. The right arithmetic shift operator (`>>>`) is not used in this code because it is not needed for the given operations.

The output of the program should be as follows:
```
a      = 10101101
b      = 10010011
a | b  = 10111111
a & b  = 10010010
a ^ b  = 10111100
!a     = 01100010
a << 3 = 10101101000
a >> 3 = 000001011
```
Note that the output is displayed using the `std::bitset` class, which displays the binary representation of the integers in a more human-readable format than the raw integer values.
