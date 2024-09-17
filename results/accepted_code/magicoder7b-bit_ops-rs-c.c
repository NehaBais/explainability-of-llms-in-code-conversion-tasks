#include <stdio.h>

void main() {
  unsigned char a = 105;
  unsigned char b = 91;

  printf("a      = %08u\n", a);
  printf("b      = %08u\n", b);
  printf("a | b  = %08u\n", a | b);
  printf("a & b  = %08u\n", a & b);
  printf("a ^ b  = %08u\n", a ^ b);
  printf("~a     = %08u\n", ~a);
  printf("a << 3 = %08u\n", a << 3);
  printf("a >> 3 = %08u\n", a >> 3);
}