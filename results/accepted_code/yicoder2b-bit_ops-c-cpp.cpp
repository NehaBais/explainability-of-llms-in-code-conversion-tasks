#include <stdio.h>

void bitwise(int a, int b) {
  printf("a & b: %d\n", a & b); // bitwise AND
  printf("a | b: %d\n", a | b); // bitwise OR
  printf("a ^ b: %d\n", a ^ b); // bitwise XOR
  printf("~a: %d\n", ~a);       // bitwise NOT (complement)

  int c = a;
  printf("c << b: %d\n", c << b); // left shift
  unsigned int d =
      c >> b; // logical right shift to convert signed integer to unsigned
  printf("c >> b: %d\n", d); // logical right shift
}