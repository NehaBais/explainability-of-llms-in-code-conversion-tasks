The Rust code is not directly compatible with C, as the type `u8` in Rust corresponds to an 8-bit unsigned integer in C. However, using bitwise operations on integers can be achieved in C by defining the variables as `unsigned char`. This conversion should provide equivalent results and make the code runnable in C.
```c
#include <stdio.h>
int main() {
    unsigned char a = 105;
    unsigned char b = 91;
    printf("a      = %08X\n", a);
    printf("b      = %08X\n", b);
    printf("a | b   = %08X\n", a | b);
    printf("a & b   = %08X\n", a & b);
    printf("a ^ b   = %08X\n", a ^ b);
    printf("!a      = %08X\n", ~a);
    printf("a << 3  = %08X\n", a << 3);
    printf("a >> 3  = %08X\n", a >> 3);
    return 0;
}
```
Note that in C, the bitwise operations `&`, `|`, and `^` are performed on individual bits of the operands, not on bytes or whole integers. Therefore, the number of bytes used for printing should be adjusted accordingly in the `printf` format specifiers.
