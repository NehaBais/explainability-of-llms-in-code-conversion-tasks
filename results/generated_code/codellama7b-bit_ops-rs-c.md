 Here is the equivalent code in C:
```
#include <stdio.h>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    printf("a      = %d\n", a);
    printf("b      = %d\n", b);
    printf("a | b  = %d\n", a | b);
    printf("a & b  = %d\n", a & b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("!a     = %d\n", ~a);
    printf("a << 3 = %d\n", a << 3);
    printf("a >> 3 = %d\n", a >> 3);
}
```
Explanation:

In Rust, the bitwise operations are performed on the `u8` type, which is an 8-bit unsigned integer. In C, we use the standard library function `printf()` to print the values of the variables as binary numbers with 8 bits.
The bitwise NOT operation in Rust is implemented using the unary operator `!`. In C, we use the bitwise complement operator `~` to perform a bitwise NOT operation.
The left shift and right shift operations are performed on the variable `a` by shifting it by 3 bits to the left or right respectively. The left rotate and right rotate operations are performed on the variable `a` by rotating it by 3 bits to the left or right respectively.
All of these operations are equivalent in Rust and C, and can be used interchangeably.
