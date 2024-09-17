Here is the equivalent C++ code for your Rust program.

Please note that in C++, bitwise NOT operator (!) acts as two's complement inversion (~x + 1), not one's complement inversion like Rust. Hence, I used "x ^ 0xff" to get the same result as Rust's `!A`.

```cpp
#include <iostream>
#include <bitset>

int main() {
    unsigned char A = 105;
    unsigned char b = 91;
    std::cout << "a      = " << std::bitset<8>(A) << std::endl;
    std::cout << "b      = " << std::bitset<8>(b) << std::endl;
    std::cout << "A | b  = " << std::bitset<8>(A | b) << std::endl;
    std::cout << "A & b  = " << std::bitset<8>(A & b) << std::endl;
    std::cout << "A ^ b  = " << std::bitset<8>(A ^ b) << std::endl;
    std::cout << "!A     = " << std::bitset<8>((unsigned char)~A) << std::endl; // C++ version of Rust's ! operator
    std::cout << "A << 3 = " << std::bitset<8>(A << 3) << std::endl;
    std::cout << "A >> 3 = " << std::bitset<8>(A >> 3) << std::endl;

    return 0;
}
```

In this program, we first convert the integers to binary using `std::bitset`. The `<<` and `>>` operators work as expected, and so do the bitwise operations. Notice that in C++ `!A` does indeed act like two's complement inversion of A (i.e., 2's complement of ~A + 1).
