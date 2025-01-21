#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", a & b);
  printf("a or b:  %d\n", a | b);
  printf("a xor b: %d\n", a ^ b);
  printf("not a:  %d\n", ~a);

  int ua = a;

  // Arithmetic shift. Bitwise left shift can cause overflow, so we're using
  // arithmetic shift instead.
  printf("a shl b:  %d\n",
         (a << b) & ~(1 << 31)); // We must mask off the sign bit to prevent it
                                 // from being set

  // Logical right shift (guaranteed). Bitwise right shift can cause overflow,
  // so we're using logical right shift instead.
  printf("a shr b:  %d\n", ua >> b);
  printf("a lsr b:  %d\n", ua >> b);

  // Rotates the bits of a left by b positions and returns the result as an
  // unsigned int.
  printf("a rol b:  %u\n", (ua << b) | (ua >> (-b & 31)));

  // Rotates the bits of a right by b positions and returns the result as an
  // unsigned int.
  printf("a ror b:  %u\n", ((ua >> b) | (ua << (-b & 31))));
}

// Add a main function to call our bitwise function with some sample values
int main() {
  bitwise(13428576, -1);

  return 0;
}