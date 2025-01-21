Sure, here is the equivalent code in C:

```c
#include <stdio.h>

void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; --i)
        printf("%d", (num >> i) & 1);
}

void left_rotate(unsigned char *a, unsigned char b) {
    *a = (*a << b) | (*a >> (8 - b));
}

void right_rotate(unsigned char *a, unsigned char b) {
    *a = (*a >> b) | (*a << (8 - b));
}

int main() {
    unsigned char a = 105;
    unsigned char b = 91;

    printf("a      = ");
    print_binary(a);
    printf("\n");
    
    printf("b      = ");
    print_binary(b);
    printf("\n");

    printf("a | b  = ");
    print_binary(a | b);
    printf("\n");

    printf("a & b  = ");
    print_binary(a & b);
    printf("\n");

    printf("a ^ b  = ");
    print_binary(a ^ b);
    printf("\n");

    printf("!a     = ");
    print_binary(~a);
    printf("\n");

    printf("a << %d = ", b);
    print_binary(a << b);
    printf("\n");

    printf("a >> %d = ", b);
    print_binary(a >> b);
    printf("\n");

    printf("a >>> %d = ", b); // Right arithmetic shift doesn't exist in C, so using logical right shift
    print_binary((unsigned)a >> b);
    printf("\n");

    printf("Left Rotate by %d = ", b);
    left_rotate(&a, b);
    print_binary(a);
    printf("\n");

    printf("Right Rotate by %d = ", b);
    right_rotate(&a, b);
    print_binary(a);
    printf("\n");

    return 0;
}
```

This C code will perform the required operations including bitwise AND, OR, XOR, NOT, left shift, right shift (logical), right arithmetic shift (using logical right shift), and both left and right rotate. Note that a logical right shift is used to simulate a right arithmetic shift since C doesn't have a built-in right arithmetic shift operator. The `print_binary` function prints the binary representation of an unsigned char.
