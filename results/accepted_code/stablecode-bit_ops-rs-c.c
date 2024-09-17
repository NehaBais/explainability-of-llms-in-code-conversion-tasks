#include <stdio.h>

void main() {
  unsigned char a = 105;
  unsigned char b = 91;

  printf("a      = %08b\n", a);
  printf("b      = %08b\n", b);
  printf("a | b  = %08b\n", a | b);
  printf("a & b  = %08b\n", a & b);
  printf("a ^ b  = %08b\n", a ^ b);
  printf("!a     = %08b\n", !(unsigned char)a);

  int shift = 3;
  printf("a << %d = %08b\n", shift, a << shift);
  printf("a >> %d = %08b\n", shift, a >> shift);
}