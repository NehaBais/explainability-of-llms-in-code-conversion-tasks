#include <stdio.h>

void bitwise(int a, int b) {
  printf("a AND b: %d\n", a & b);
  printf("a OR b: %d\n", a | b);
  printf("a XOR b: %d\n", a ^ b);
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", a << b);        // left shift
  printf("a >> b: %d\n", a >> b);        // arithmetic right shift
  printf("a >>> b: %d\n", a >>> (int)b); // logical right shift
}