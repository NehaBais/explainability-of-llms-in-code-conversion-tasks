```
#include <iostream>

void bitwise(int a, int b) {
    // Bitwise AND
    std::cout << "a and b: " << (a & b) << '\n';

    // Bitwise OR
    std::cout << "a or b:  " << (a | b) << '\n';

    // Bitwise XOR
    std::cout << "a xor b: " << (a ^ b) << '\n';

    // Bitwise NOT
    std::cout << "not a:   " << ~a << '\n';

    // Left shift
    std::cout << "a shl b: " << (a << b) << '\n';

    // Right shift (arithmetic)
    std::cout << "a shr b: " << (a >> b) << '\n';

    // Right shift (logical)
    unsigned int ua = a;
    std::cout << "a lsr b: " << (ua >> b) << '\n';

    // Rotate left
    std::cout << "a rol b: " << std::rotl(ua, b) << '\n';

    // Rotate right
    std::cout << "a ror b: " << std::rotr(ua, b) << '\n';
}
```
Note that in Python, the bitwise operators are not overloaded like they are in C++, so you need to use the built-in functions for them. Also, in Python 3.10 and later, you can use the `rotl` and `rotr` functions from the `math` module to perform rotations.
