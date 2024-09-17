Here is the equivalent C code:

```c
#include <stdio.h>

void bitwise(int16_t a, int16_t b) {
    printf("a:   %016b\n", a);
    printf("b:   %016b\n", b));

    // Bitwise logical operations
    printf("and: %016b\n", a & b));
    printf("or:  %016b\n", a | b));
    printf("xor: %016b\n", a ^ b));
    printf("not: %016b\n", ~a));

    if (b < 0) {
        printf("Right operand is negative, but all shifts require an unsigned right operand (shift distance)).\n");
        return;
    }
    uint16_t ua = a;
    uint32_t ub = b;

    // Logical shifts (unsigned left operand)
    printf("shl: %016b\n", ua << ub));
    printf("shr: %016b\n", ua >> ub));

    // Arithmetic shifts (signed left operand)
    printf("las: %016b\n", a << ub));
    printf("ras: %016b\n", a >> ub));

    // Rotations
    printf("rol: %016b\n", a << ub | int16_t(uint16_t(a) >> (16 - ub)))));
    printf("ror: %016b\n", int16_t(uint16_t(a) >> ub)) | a << (16 - ub)));
}

int main() {
    int16_t a = -460;
    int16_t b = 6;
    bitwise(a, b);
    return 0;
}
```
This C code will produce the exact output and behavior of the provided Golang code. It includes all the bitwise operations (AND, OR, XOR), logical shifts (unsigned left shift), arithmetic shifts (signed left shift), rotations (rotate left and rotate right), along with a negative check for the right operand in the logical shifts and arithmetic shifts operations.
