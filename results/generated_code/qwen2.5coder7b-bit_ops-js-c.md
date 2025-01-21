Here is a C version of your JavaScript code:

#include <stdio.h>

void bitwise(int a, int b){
    printf("a AND b: %d\n", a & b);
    printf("a OR b: %d\n", a | b);
    printf("a XOR b: %d\n", a ^ b);
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", a << b); // left shift
    printf("a >> b: %d\n", a >> b); // arithmetic right shift
    printf("a >>> b: %d\n", (unsigned int)a >> b); // logical right shift
}

Please note that the bitwise NOT operator (~) in C will invert all bits, including the sign bit. If you want to keep your number positive and just move the bits without changing their sign, use unsigned types.

In addition, there are no built-in rotate operations in C, so they should be implemented manually:

```c
#include <stdio.h>

void bitwise(int a, int b){
    printf("a AND b: %d\n", a & b);
    printf("a OR b: %d\n", a | b);
    printf("a XOR b: %d\n", a ^ b);
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", a << b); // left shift
    printf("a >> b: %d\n", a >> b); // arithmetic right shift
    printf("a >>> b: %d\n", (unsigned int)a >> b); // logical right shift

    int mask = 1;
    mask <<= (sizeof(int) * 8 - b);
    a &= mask; // Clear all bits except the last b bits of a
    a |= (a << b); // Left rotate a by b bits
    printf("a left rotated b times: %d\n", a);

    a >>= (2 * sizeof(int) * 8 - b); // Arithmetic right shift a by 32-b bits to simulate right rotation
    printf("a right rotated b times: %d\n", a);
}
```

In this code, `1 << (sizeof(int) * 8 - b)` is used to create a mask with the last b bits set. The expression `(a & mask) | (a << b)` left rotates the bits of a by b places. `(a >>= (2 * sizeof(int) * 8 - b))` right shifts the bits of a by 32-b places, effectively simulating a right rotate operation on a 32-bit integer.

Note that these are not true logical right rotations. They only work because C treats integers as signed numbers and performs arithmetic right shifts when you use `>>`. If your compiler allows it, you can use the `ror` or `rotr` instruction to perform a true logical rotation.
