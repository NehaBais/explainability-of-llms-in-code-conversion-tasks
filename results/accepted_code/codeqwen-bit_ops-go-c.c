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
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
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