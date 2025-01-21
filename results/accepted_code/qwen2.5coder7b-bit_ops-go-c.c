#include <stdio.h>

void bitwise(int a, int b) {

  printf("a:   %016x\n", (unsigned)a);
  printf("b:   %016x\n", (unsigned)b);

  // Bitwise logical operations
  printf("and: %016x\n", (unsigned)(a & b));
  printf("or:  %016x\n", (unsigned)(a | b));
  printf("xor: %016x\n", (unsigned)(a ^ b));
  printf("not: %016x\n", (unsigned)~a);

  // Logical shifts (unsigned left operand)
  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }

  printf("shl: %016x\n", (unsigned)(a << b));
  printf("shr: %016x\n", (unsigned)((unsigned)a >> b));

  // Arithmetic shifts
  printf("las: %016x\n", (unsigned)((int)a << b));
  printf("ras: %016x\n", (unsigned)((int)a >> b));

  // Rotations
  printf("rol: %016x\n", (unsigned)((a << b) | (a >> (32 - b))));
  printf("ror: %016x\n", (unsigned)(((unsigned)a >> b) | (a << (32 - b))));
}

int main() {
  int a, b = 6;
  a = -460;

  bitwise(a, b);
}