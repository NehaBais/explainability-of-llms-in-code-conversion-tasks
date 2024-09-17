 In C, bitwise operations are performed using the '~' operator for NOT, and the '<<' or '>>' operators to perform left and right shifts respectively. Here is how you can translate your Rust code into C:

```c
#include <stdio.h>

void main() {
    unsigned char a = 105;
    unsigned char b = 91;
    
    printf("a      = %08u\n", a);
    printf("b      = %08u\n", b);
    printf("a | b  = %08u\n", a | b);
    printf("a & b  = %08u\n", a & b);
    printf("a ^ b  = %08u\n", a ^ b);
    printf("~a     = %08u\n", ~a);
    printf("a << 3 = %08u\n", a << 3);
    printf("a >> 3 = %08u\n", a >> 3);
}
```
Please note that in C, the bitwise shift operations are performed on integers and not characters or bytes. Also, please be aware that the ~ operator performs a bitwise NOT operation on the binary representation of an integer, so it's a bitwise NOT, not a logical NOT. Finally, the %08u format specifier is used to print the unsigned integer with at least 8 digits (including leading zeros if necessary).
