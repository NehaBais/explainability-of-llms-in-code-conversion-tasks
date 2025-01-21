Below is the C code that performs the same operations as the given Python script. The C code uses bitwise operators for AND, OR, XOR, NOT, left shift, right shift, arithmetic right shift, left rotate, and right rotate.

```c
#include <stdio.h>

#define MAX_WIDTH 32

unsigned int mask(int width) {
    return (1 << width) - 1;
}

void bitwise_built_ins(int width, unsigned int a, unsigned int b) {
    unsigned int result;

    printf("AND:     0b%*.*x\n", width / 4, width / 4, a);
    printf("       & 0b%*.*x\n", width / 4, width / 4, b);
    result = (a & b) & mask(width);
    printf("       = 0b%*.*x\n", width / 4, width / 4, result);

    printf("OR:      0b%*.*x\n", width / 4, width / 4, a);
    printf("       | 0b%*.*x\n", width / 4, width / 4, b);
    result = (a | b) & mask(width);
    printf("       = 0b%*.*x\n", width / 4, width / 4, result);

    printf("XOR:     0b%*.*x\n", width / 4, width / 4, a);
    printf("       ^ 0b%*.*x\n", width / 4, width / 4, b);
    result = (a ^ b) & mask(width);
    printf("       = 0b%*.*x\n", width / 4, width / 4, result);

    printf("NOT:   ~ 0b%*.*x\n", width / 4, width / 4, a);
    result = (~a) & mask(width);
    printf("       = 0b%*.*x\n", width / 4, width / 4, result);

    printf("\nSHIFTS\n");

    printf("  RIGHT:   0b%*.*x >> 1\n", width / 4, width / 4, a);
    result = (a >> 1) & mask(width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  LEFT:    0b%*.*x << 1\n", width / 4, width / 4, a);
    result = (a << 1) & mask(width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);
}

unsigned int arithmetic_right_shift(unsigned int value, int shift_amount, int width) {
    if (shift_amount >= width || shift_amount < 0)
        return value;

    unsigned int sign_bit = (value >> (width - 1)) & 1;
    for (int i = 0; i < shift_amount; ++i) {
        value = (value << 1) | sign_bit;
    }

    return value;
}

unsigned int rotate_left(unsigned int value, int shift_amount, int width) {
    if (shift_amount >= width || shift_amount < 0)
        return value;

    shift_amount %= width;
    return ((value << shift_amount) | (value >> (width - shift_amount))) & mask(width);
}

unsigned int rotate_right(unsigned int value, int shift_amount, int width) {
    if (shift_amount >= width || shift_amount < 0)
        return value;

    shift_amount %= width;
    return ((value >> shift_amount) | (value << (width - shift_amount))) & mask(width);
}

void helper_funcs(int width, unsigned int a) {
    unsigned int result, aa = (1 << (width - 1)) | a; // Sign-extend 'a'

    printf("\nROTATIONS\n");

    printf("  LEFT:    0b%*.*x << 1\n", width / 4, width / 4, a);
    result = rotate_left(a, 1, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  LEFT:    0b%*.*x << 2\n", width / 4, width / 4, a);
    result = rotate_left(a, 2, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  LEFT:    0b%*.*x << 4\n", width / 4, width / 4, a);
    result = rotate_left(a, 4, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("\nSIGN-EXTENDING ARITHMETIC RIGHT SHIFTS\n");

    printf("  asr(1): 0b%*.*x >> 1\n", width / 4, width / 4, a);
    result = arithmetic_right_shift(a, 1, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  asr(1): 0b%*.*x >> 1\n", width / 4, width / 4, aa);
    result = arithmetic_right_shift(aa, 1, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  asr(2): 0b%*.*x >> 2\n", width / 4, width / 4, a);
    result = arithmetic_right_shift(a, 2, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  asr(2): 0b%*.*x >> 2\n", width / 4, width / 4, aa);
    result = arithmetic_right_shift(aa, 2, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  asr(4): 0b%*.*x >> 4\n", width / 4, width / 4, a);
    result = arithmetic_right_shift(a, 4, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);

    printf("  asr(4): 0b%*.*x >> 4\n", width / 4, width / 4, aa);
    result = arithmetic_right_shift(aa, 4, width);
    printf("         = 0b%*.*x\n", width / 4, width / 4, result);
}

int main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
    return 0;
}
```

This C code includes functions for the bitwise operations and additional helper functions to demonstrate arithmetic right shifts and rotations. The `main` function calls these functions with the specified width and values.
