#include <stdint.h>
#include <stdio.h>

void bitwise(int16_t a, int16_t b) {
  printf("a:   %016b\n", (uint16_t)a);
  printf("b:   %016b\n", (uint16_t)b);

  // Bitwise logical operations
  printf("and: %016b\n", (uint16_t)(a & b));
  printf("or:  %016b\n", (uint16_t)(a | b));
  printf("xor: %016b\n", (uint16_t)(a ^ b));
  printf("not: %016b\n", (uint16_t)(~a));

  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }
  uint16_t ua = (uint16_t)a;
  uint32_t ub = (uint32_t)b;

  // Logical shifts (unsigned left operand)
  printf("shl: %016b\n", (uint16_t)(ua << ub));
  printf("shr: %016b\n", (uint16_t)(ua >> ub));

  // Arithmetic shifts (signed left operand)
  printf("las: %016b\n", (uint16_t)(a << ub));
  printf("ras: %016b\n", (uint16_t)(a >> ub));

  // Rotations
  printf("rol: %016b\n", (uint16_t)((ua << ub) | ((uint16_t)a >> (16 - ub))));
  printf("ror: %016b\n", (uint16_t)(((uint16_t)a >> ub) | (a << (16 - ub))));
}

int main() {
  int16_t a = -460;
  int16_t b = 6;
  bitwise(a, b);
  return 0;
}