#include <stdio.h>
#define FMT_SIZE "016"

void bitwise(int a, int b) {
  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }
  printf("a:   %0" FMT_SIZE "X\n", a);
  printf("b:   %0" FMT_SIZE "X\n", b);

  // Bitwise logical operations
  printf("and: %0" FMT_SIZE "X\n", a & b);
  printf("or:  %0" FMT_SIZE "X\n", a | b);
  printf("xor: %0" FMT_SIZE "X\n", a ^ b);
  printf("not: %0" FMT_SIZE "X\n", ~a & 0xFFFF);

  // Logical shifts (unsigned left operand)
  unsigned int ua = a;
  unsigned int ub = b;
  printf("shl: %0" FMT_SIZE "X\n", ua << ub);
  printf("shr: %0" FMT_SIZE "X\n", ua >> ub);

  // Arithmetic shifts (signed left operand)
  int las = a << ub;
  if ((ub & 1) == 1 && (~((uint32_t)(las)) & (1ULL << (32 - ub)))) {
    printf("ras: %0" FMT_SIZE "X\n", ~(las >> ub));
  } else {
    printf("ras: %0" FMT_SIZE "X\n", las >> ub);
  }

  // Rotations
  int rol = (ua << ub) | ((ua & 0xFFFF) >> (16 - ub));
  if ((ub & 1) == 1 && (~((uint32_t)(rol)) & (1ULL << (32 - ub)))) {
    printf("rol: %0" FMT_SIZE "X\n", ~(rol >> ub));
  } else {
    printf("rol: %0" FMT_SIZE "X\n", rol >> ub);
  }

  int ror = ((a << 32 - ub) | (a >> (ub + 16)));
  if ((ub & 1) == 1 && (~((uint32_t)(ror)) & (1ULL << (32 - ub)))) {
    printf("ror: %0" FMT_SIZE "X\n", ~(ror >> ub));
  } else {
    printf("ror: %0" FMT_SIZE "X\n", ror >> ub);
  }
}

int main() {
  int a = -460, b = 6;
  bitwise(a, b);
  return 0;
}