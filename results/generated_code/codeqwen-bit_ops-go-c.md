The given Golang code is already written in C. It converts all the operations from Golang to C syntax and prints the results using printf(). The main function accepts two integers as input and calls the bitwise() function to perform the required operations on them. The bitwise() function converts both operands (A and B) to their respective unsigned versions before performing each operation, except for bitwise NOT which operates directly on signed A. All rotations are performed using a custom implementation that calculates the left or right rotation based on the value of b.

Here is the same code in C:

```c
#include <stdio.h>

void bitwise(int16_t A, int16_t B) {
    printf("A: %016x\n", (unsigned)A);
    printf("B: %016x\n", (unsigned)B);

    // Bitwise logical operations
    printf("and: %016x\n", A & B);
    printf("or:  %016x\n", A | B);
    printf("xor: %016x\n", A ^ B);
    printf("not: %016x\n", ~A);

    if (B < 0) {
        printf("Right operand is negative, but all shifts require an unsigned right operand (shift distance).\n");
        return;
    }

    unsigned ua = A;
    unsigned ub = B;

    // Logical shifts (unsigned left operand)
    printf("shl: %016x\n", ua << ub);
    printf("shr: %016x\n", ua >> ub);

    // Arithmetic shifts (signed left operand)
    int16_t sa = A;
    printf("las: %016x\n", sa << ub);
    printf("ras: %016x\n", sa >> ub);

    // Rotations
    printf("rol: %016x\n", (ua << ub) | ((unsigned)(ua >> (16 - ub))));
    printf("ror: %016x\n", ((unsigned)sa >> ub) | (ua << (16 - ub)));
}

int main() {
    int16_t A = -460, B = 6;
    bitwise(A, B);
    return 0;
}
```
