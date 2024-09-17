In C, you can perform bitwise operations using the following operators:
- AND: &
- OR: |
- XOR: ^
- NOT: ~
- Left shift: <<
- Right shift: >>
- Arithmetic right shift: >>>

For rotating bits in C, you need to implement it yourself as there's no built-in operator for that. Here is how you can translate your Rust code to C:

```c
#include <stdio.h>

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    printf("a      = %08b\n", a);
    printf("b      = %08b\n", b);
    printf("a | b  = %08b\n", a | b);
    printf("a & b  = %08b\n", a & b);
    printf("a ^ b  = %08b\n", a ^ b);
    printf("!a     = %08b\n", ~a + 1); // To make it unsigned
    printf("a << 3 = %08b\n", a << 3);
    printf("a >> 3 = %08b\n", a >> 3);

    printf("a << b = %08b\n", a << b);
    printf("a >> b = %08b\n", a >> b);

    unsigned char temp = a;
    int i;

    for(i=0; i < b; i++) {
        if((temp & 1) == 1)
            temp = (temp >> 7) | (temp << 1);
        else
            temp >>= 1;
    }
    printf("rotate right by b on a: %08b\n", temp);

    temp = a;

    for(i=0; i < b; i++) {
        if((temp & 128) == 128)
            temp = (temp << 7) | (temp >> 1);
        else
            temp <<= 1;
    }
    printf("rotate left by b on a: %08b\n", temp);

    return 0;
}
```

Note: C does not have built-in functions for bitwise rotation, so you need to implement these manually. The above code uses a loop to shift bits and insert either a '0' or '1' depending on the rightmost (or leftmost) bit of the number.
