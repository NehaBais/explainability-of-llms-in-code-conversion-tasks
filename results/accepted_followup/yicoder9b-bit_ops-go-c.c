#include <limits.h>
#include <stdint.h> // This line includes the necessary header for uint32_t
#include <stdio.h>

void bitwise(int32_t a, int32_t b) {
  printf("a:\t%032b\n", (unsigned int)a);
  printf("b:\t%032b\n", (unsigned int)b);

  // Bitwise logical operations
  printf("and:\t%032b\n", a & b);
  printf("or:\t%032b\n", a | b);
  printf("xor:\t%032b\n", a ^ b);
  printf("not:\t%032b\n", ~a);

  if (b < 0) {
    printf("Right operand is negative, but all shifts require an unsigned "
           "right operand (shift distance).\n");
    return;
  }

  // Logical shifts (unsigned left operand)
  printf("shl:\t%032b\n", ((uint32_t)a) << b); // Correct use of uint32_t
  printf("shr:\t%032b\n", ((uint32_t)a) >> b); // Correct use of uint32_t

  // Arithmetic shifts (signed left operand)
  printf("las:\t%032b\n", a << b);
  printf("ras:\t%032b\n", a >> b);

  // Rotations
  printf("rol:\t%032b\n",
         (a << b) | ((uint32_t)a >> (32 - b))); // Correct use of uint32_t
  printf("ror:\t%032b\n",
         ((uint32_t)a >> b) | a << (32 - b)); // Correct use of uint32_t
}

int main() {
  int a = -460, b = 6;
  bitwise(a, b);
  return 0;
}