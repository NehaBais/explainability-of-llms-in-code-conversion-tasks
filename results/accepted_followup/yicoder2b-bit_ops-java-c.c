#include <stdio.h>

void bitwise(int a, int b) {
  // Bitwise AND of two integers
  printf("a AND b: %d\n", a & b);

  // Bitwise OR of two integers
  printf("a OR b: %d\n", a | b);

  // Bitwise XOR of two integers
  printf("a XOR b: %d\n", a ^ b);

  // Bitwise NOT of first integer
  printf("NOT a: %d\n", ~a);

  // Left shift of the first integer with respect to the second integer
  printf("a << b: %d\n", a << b);

  // Arithmetic right shift of the first integer with respect to the second
  // integer
  printf("a >> b: %d\n", a >> b);

  // Logical right shift of the first integer with respect to the second integer
  printf("a >>> b: %d\n", a >>> b);
}