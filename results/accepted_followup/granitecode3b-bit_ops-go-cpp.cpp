#include
int main() {
  uint16_t a = -460;
  uint32_t b = 6;

  // Bitwise logical operations
  printf("a:   %016bnn", a);
  printf("b:   %016bnn", b);
  printf("and: %016bnn", a & b);
  printf("or:  %016bnn", a | b);
  printf("xor: %016bnn", a ^ b);
  printf("not: %016bnn", ~a);

  // Right operand is negative, but all shifts require an unsigned right operand
  // (shift distance).
  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return 1;
  }

  uint16_t ua = a;
  uint32_t ub = b;

  // Logical shifts (unsigned left operand)
  printf("shl: %016bnn", ua << ub);
  printf("shr: %016bnn", ua >> ub);

  // Arithmetic shifts (signed left operand)
  printf("las: %016bnn", a << ub);
  printf("ras: %016bnn", a >> ub);

  // Rotations
  printf("rol: %016bnn", (a << ub) | (ua >> (16 - ub)));
  printf("ror: %016bnn", (ua << ub) | (a >> (16 - ub)));

  return 0;
}