#include "stdio.h"
int main() {
  const int width = 8;
  const int a = 27;
  const int b = 125;
  // Perform bitwise AND, OR, and XOR on two integers
  printf("AND:     0b%0*b \n", width, a & b);
  printf("OR:      0b%0*b \n", width, a | b);
  printf("XOR:     0b%0*b \n", width, a ^ b);
  // Perform bitwise NOT on the first integer and left shift
  printf("NOT:   ~ 0b%0*b \n", width, ~a);
  printf("SHIFTS\n");
  printf("  RIGHT:   0b%0*b \n", width, a >> 1);
  printf("  LEFT:    0b%0*b \n", width, a << 1);

  // Perform right rotate and left rotate on the first integer with the
  // shift/rotate amount from the second integer
  printf("\nROTATIONS\n");
  printf("  RIGHT:   rotr(%d, 0b%0*b, 1)\n", width, a >> 1);
  printf("  LEFT:    rotl(%d, 0b%0*b, 1)\n", width, a << 1);

  // Perform sign-extending arithmetic shift right on the first integer with the
  // shift/rotate amount from the second integer
  printf("\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n");
  printf("   asr(%d, 0b%0*b, 1)\n", width, a >> 1);
  printf("   asr(%d, 0b%0*b, 2)\n", width, a >> 2);
  printf("   asr(%d, 0b%0*b, 4)\n", width, a >> 4);
  return 0;
}