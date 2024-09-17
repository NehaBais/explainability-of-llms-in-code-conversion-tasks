#include <stdio.h>

void bitwise(short a, short b) {
  printf("a:   %016b\n", (unsigned short)(a));
  printf("b:   %016b\n", (unsigned short)(b));

  // Bitwise logical operations
  printf("and: %016b\n", (unsigned short)(a & b));
  printf("or:  %016b\n", (unsigned short)(a | b));
  printf("xor: %016b\n", (unsigned short)(a ^ b));
  printf("not: %016b\n", (unsigned short)(~a));

  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }
  unsigned short ua = (unsigned short)(a);
  int ub = (int)(b);

  // Logical shifts (unsigned left operand)
  printf("shl: %016b\n", (unsigned short)(ua << ub));
  printf("shr: %016b\n", (unsigned short)(ua >> ub));

  // Arithmetic shifts (signed left operand)
  printf("las: %016b\n", (short)(a << ub));
  printf("ras: %016b\n", (short)(a >> ub));

  // Rotations
  printf("rol: %016b\n",
         (unsigned short)((a << ub) | ((short)(a) >> (16 - ub))));
  printf("ror: %016b\n",
         (unsigned short)(((short)(a) >> ub) | (a << (16 - ub))));
}

int main() {
  short a = -460, b = 6;
  bitwise(a, b);
  return 0;
}