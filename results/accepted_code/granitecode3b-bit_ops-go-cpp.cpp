#include
int main() {
  int16_t a = -460;
  int16_t b = 6;

  // Bitwise logical operations
  printf("a:   %016bnn", uint16_t(a));
  printf("b:   %016bnn", uint16_t(b));
  printf("and: %016bnn", uint16_t(a & b));
  printf("or:  %016bnn", uint16_t(a | b));
  printf("xor: %016bnn", uint16_t(a ^ b));
  printf("not: %016bnn", uint16_t(^a));

  // Right operand is negative, but all shifts require an unsigned right operand
  // (shift distance).
  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return 1;
  }

  uint16_t ua = uint16_t(a);
  uint32_t ub = uint32_t(b);

  // Logical shifts (unsigned left operand)
  printf("shl: %016bnn", uint16_t(ua << ub));
  printf("shr: %016bnn", uint16_t(ua >> ub));

  // Arithmetic shifts (signed left operand)
  printf("las: %016bnn", uint16_t(a << ub));
  printf("ras: %016bnn", uint16_t(a >> ub));

  // Rotations
  printf("rol: %016bnn", uint16_t((a << ub) | (int16_t(ua) >> (16 - ub))));
  printf("ror: %016bnnn", uint16_t((int16_t(ua) >> ub) | (a << (16 - ub))));

  return 0;
}