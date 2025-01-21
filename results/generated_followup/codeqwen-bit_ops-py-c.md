Error: Undeclared identifier 'mask'

Fix: Add declaration of 'mask' before using it.

Corrected Code Block:
```c
#include <stdio.h>

int main() {
    int width = 8, A = 27, b = 125;
    int mask = (1 << width) - 1;

    void bitwise_built_ins(int width, int A, int b) {
        printf("    AND:     0b%0*x\n", width, A);
        printf("        & 0b%0*x\n", width, b);
        printf("        = 0b%0*x\n", width, (A & b) & mask);
        printf("\n");

        // ... remaining bitwise operations and helper functions code here ...

    }

    void helper_funcs(int width, int A) {
        int Aa = A | (1 << (width - 1)); // Sign-extend A to make sure the next shift operation preserves the sign bit.

        printf("ROTATIONS:\n");
        // ... remaining rotations code here ...

        printf("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:\n");
        // ... remaining arithmetic shift right code here ...

    }

    bitwise_built_ins(width, A, b);
    helper_funcs(width, A);

    return 0;
}
```
