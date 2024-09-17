#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", (a & b));
  printf("a or b:  %d\n", (a | b));
  printf("a xor b: %d\n", (a ^ b));
  printf("not a:   %d\n", ~a);

  printf("a shl b: %d\n", (a << b));
  if (b >= 0) { // check for negative shift count
    printf("a shr b: %d\n", ((unsigned int)a >> b));
    unsigned int ua = a;
    printf("a lsr b: %u\n", (ua >> b));
  } else {
    printf("Invalid shift count (must be non-negative)\n");
  }

  // Below are the manual left and right rotate functions.
  int a_rotl = (a << b) | ((unsigned int)a >> sizeof(int) * 8 - b);
  printf("a rotl b: %d\n", a_rotl);

  int a_rotr = ((unsigned int)a >> b) | (a << (sizeof(int) * 8 - b));
  printf("a rotr b: %u\n", a_rotr);
}