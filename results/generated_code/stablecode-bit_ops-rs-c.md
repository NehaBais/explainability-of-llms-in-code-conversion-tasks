Here is the equivalent C code for your Rust code. Note that in this conversion, I have kept the same operation order as in your provided Rust snippet (i.e., bitwise AND, OR, XOR, bitwise NOT, left shift, right shift, right arithmetic shift, left rotate, and right rotate)).

```c
#include <stdio.h>

void main() {
    unsigned char a = 105;
    unsigned char b = 91;

    printf("a      = %08b\n", a);
    printf("b      = %08b\n", b);
    printf("a | b  = %08b\n", a | b);
    printf("a & b  = %08b\n", a & b);
    printf("a ^ b  = %08b\n", a ^ b);
    printf("!a     = %08b\n", !(unsigned char)a);

    int shift = 3;
    printf("a << %d = %08b\n", shift, a << shift);
    printf("a >> %d = %08b\n", shift, a >> shift);
}
```
This C code will provide the same output as your provided Rust snippet.
