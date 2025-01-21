#include <stdint.h>
#include <stdio.h>

void bitwise(int16_t a, int16_t b) {
  printf("a:   %016b\n", a));
    printf("b:   %016b\n", b));

    // Bitwise logical operations
    printf("and: %016b\n", a & b));
    printf("or : %016b\n", a | b));
    printf("xor :%016b\n", a ^ b));

    printf("shl: %016b\n", a << b));
    printf("shr: %016b\n", a >> b));

    // Addition and subtraction
    int result = a + b;
    printf("Sum  : %d\n", result));
    result = a - b;
    printf("Difference : %d\n", result));
}

int main() {
  bitwise(10, 5);
  return 0;
}