#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", a & b);
  printf("a or b:  %d\n", a | b);
  printf("a xor b: %d\n", a ^ b);
  printf("not a:   %u\n", ~a);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift
  // count (that is, b) is negative, or is greater or equal to the number of
  // bits in the integer being shifted.
  printf("a shl b: %d\n", a << b);
  printf("a shr b: %d\n", a >> b);

  unsigned int ua = a;
  printf("a lsr b: %u\n", ua >> b);

  // Implementing left and right rotation manually as C does not have built-in
  // support for that
  int mask =
      sizeof(int) * 8 -
      1; // to ensure the shift count is within the limit of the integer size
  b &= mask;
  printf("a rol b: %u\n", (ua << b) | (ua >> (sizeof(int) * 8 - b)));
  printf("a ror b: %u\n", (ua >> b) | (ua << (sizeof(int) * 8 - b)));
}