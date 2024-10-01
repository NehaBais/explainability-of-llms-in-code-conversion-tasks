#include <stdio.h>

void bitwise(int16_t a, int32_t b) {
  // Perform bitwise operations on a and b
  printf("a:   %016b\n", a & b);
  printf("and: %016b\n", a & b);
  printf("or:  %016b\n", a | b);
  printf("xor: %016b\n", a ^ b);
  printf("not: %016b\n", ~a & b);
  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }
  unsigned int ua = a;
  unsigned int ub = b;

  // Perform logical shift operations on a and b
  printf("shl: %016b\n", ua << ub);
  printf("shr: %016b\n", ua >> ub);

  // Perform arithmetic shift operations on a and b
  printf("las: %016b\n", -ua << ub);
  printf("ras: %016b\n", -ua >> ub);

  // Perform rotation operations on a and b
}

int main() {
  int16_t a = -460;
  int32_t b = 6;
  bitwise(a, b);
  return 0;
}