 Here's the equivalent code in C that performs the requested operations:

```c
#include <stdio.h>
#include <stdint.h>

uint8_t bitwise_and(uint8_t a, uint8_t b) {
    return a & b;
}

uint8_t bitwise_or(uint8_t a, uint8_t b) {
    return a | b;
}

uint8_t bitwise_xor(uint8_t a, uint8_t b) {
    return a ^ b;
}

uint8_t bitwise_not(uint8_t a) {
    return ~a;
}

uint8_t left_shift(uint8_t a, int shift_amount) {
    return a << shift_amount;
}

uint8_t right_shift(uint8_t a, int shift_amount) {
    return a >> shift_amount;
}

uint8_t right_arithmetic_shift(int8_t a, int shift_amount) {
    // For unsigned integers, right arithmetic shift is the same as logical shift
    return (uint8_t)(a >> shift_amount);
}

uint8_t left_rotate(uint8_t a, int rotate_amount) {
    rotate_amount = rotate_amount % 8; // Ensure rotation amount is within bounds
    return (a << rotate_amount) | (a >> (8 - rotate_amount));
}

uint8_t right_rotate(uint8_t a, int rotate_amount) {
    rotate_amount = rotate_amount % 8; // Ensure rotation amount is within bounds
    return (a >> rotate_amount) | (a << (8 - rotate_amount));
}

void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; --i) {
        printf("%d", (value >> i) & 1);
    }
    printf("\n");
}

int main() {
    uint8_t a = 105;
    uint8_t b = 91;
    
    printf("a      = "); print_binary(a);
    printf("b      = "); print_binary(b);
    printf("a | b  = "); print_binary(bitwise_or(a, b));
    printf("a & b  = "); print_binary(bitwise_and(a, b));
    printf("a ^ b  = "); print_binary(bitwise_xor(a, b));
    printf("!a     = "); print_binary(bitwise_not(a));
    printf("a << 3 = "); print_binary(left_shift(a, 3));
    printf("a >> 3 = "); print_binary(right_shift(a, 3));
    
    return 0;
}
```

This C code defines functions to perform bitwise AND, OR, XOR, NOT, left shift, right shift (logical and arithmetic), left rotate, and right rotate operations on two integers. The `print_binary` function is used to print the binary representation of an integer for visualization.
