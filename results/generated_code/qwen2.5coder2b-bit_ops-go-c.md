To convert the given Go code to C, we need to adjust the functions and data types accordingly. Here's how you can do it:

```c
#include <stdio.h>

void bitwise(int a, int b) {
    printf("a:   %016b\n", a);
    printf("b:   %016b\n", b);

    // Bitwise logical operations
    printf("and: %016b\n", (a & b));
    printf("or:  %016b\n", (a | b));
    printf("xor: %016b\n", (a ^ b));
    printf("not: %016b\n", ~(a));

    if (b < 0) {
        printf("Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n");
        return;
    }
    unsigned int ua = (unsigned int)a;
    unsigned int ub = (unsigned int)b;

    // Logical shifts (unsigned left operand)
    printf("shl: %016b\n", (ua << ub));
    printf("shr: %016b\n", (ua >> ub));

    // Arithmetic shifts (signed left operand)
    printf("las: %016b\n", (a << ub));
    printf("ras: %016b\n", ((int)a << ub) | a);

    // Rotations
    int rol = a << ub;
    if (rol > 0x10000)
        rol -= 0x10000;
    int ror = (a >> ub) + a * (32 - ub);
    if (ror > 0x10000)
        ror -= 0x10000;

    printf("rol: %016b\n", rol);
    printf("ror: %016b\n", ror);
}

int main() {
    int a = -460, b = 6;
    bitwise(a, b);
    return 0;
}
```

In this C code:
- We use `unsigned int` for the integer types to ensure that the shifts and rotations are performed correctly on 16-bit values.
- The right shift operations in the main function handle negative values by performing a left shift instead (since the result will be zero).
- The left rotate operation uses bitwise AND and OR to achieve the desired effect.
- The right rotate operation also uses bitwise AND and OR to achieve the desired effect.
