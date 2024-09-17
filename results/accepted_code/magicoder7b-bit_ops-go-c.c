#include <stdio.h>
#define FMT_SIZE 32

void bitwise(int a, int b) {
  printf("a:   %0" FMT_SIZE "X\n", (unsigned int)a);
  printf("b:   %0" FMT_SIZE "X\n", (unsigned int)b);

  // Bitwise logical operations
  printf("and: %0" FMT_SIZE "X\n", a & b);
  printf("or:  %0" FMT_SIZE "X\n", a | b);
  printf("xor: %0" FMT_SIZE "X\n", a ^ b);
  printf("not: %0" FMT_SIZE "X\n", ~a & 0xFFFF);

  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }
  int ua = a;
  unsigned int ub = b;

  // Logical shifts (unsigned left operand)
  printf("shl: %0" FMT_SIZE "X\n", ua << ub);
  printf("shr: %0" FMT_SIZE "X\n", ua >> ub);

  // Arithmetic shifts (signed left operand)
  printf("las: %0" FMT_SIZE "X\n", a << ub);
  printf("ras: %0" FMT_SIZE "X\n", a >> ub);

  // Rotations
  int rol = (ua << ub) | ((ua & 0xFFFF) >> (16 - ub));
  int ror = ((a << 32 - ub) | (a >> (ub + 16)));
  printf("rol: %0" FMT_SIZE "X\n", rol);
  printf("ror: %0" FMT_SIZE "X\n", ror);
}

int main() {
  int a = -460, b = 6;
  bitwise(a, b);
  return 0;
}