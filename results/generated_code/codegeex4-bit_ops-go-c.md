```c
#include <stdio.h>
#include <stdint.h>

void bitwise(int16_t a, int16_t b) {
    printf("a:   %016llx\n", (uint64_t)a);
    printf("b:   %016llx\n", (uint64_t)b);

    // Bitwise logical operations
    printf("and: %016llx\n", (uint64_t)(a & b));
    printf("or:  %016llx\n", (uint64_t)(a | b));
    printf("xor: %016llx\n", (uint64_t)(a ^ b));
    printf("not: %016llx\n", (uint64_t)(~a));

    if(b < 0) {
        printf("Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n");
        return;
    }

    uint16_t ua = a;
    uint32_t ub = b;

    // Logical shifts (unsigned left operand)
    printf("shl: %016llx\n", (uint64_t)(ua << ub));
    printf("shr: %016llx\n", (uint64_t)(ua >> ub));

    // Arithmetic shifts (signed left operand)
    printf("las: %016llx\n", (uint64_t)((int32_t)a << ub));
    printf("ras: %016llx\n", (uint64_t)((int32_t)a >> ub));

    // Rotations
    uint16_t rol = ua << ub | ua >> ((sizeof(ua) * 8) - ub);
    uint16_t ror = ua >> ub | ua << ((sizeof(ua) * 8) - ub);

    printf("rol: %016llx\n", (uint64_t)rol);
    printf("ror: %016llx\n", (uint64_t)rort);

}

int main() {
    int16_t a, b = -460, 6;
    bitwise(a, b);
}
```

I have translated the given Go code into C and kept the functionality similar. Note that C doesn't support some operations like shifting with negative shift amount or rotating on signed integers as it would lose the sign information. Also, C's logical shifts are unsigned regardless of the type of the operand. Please be aware that I did not include error checking for cases where the shift amount is larger than the number of bits in the operand, which should be considered when using this code in practice.
