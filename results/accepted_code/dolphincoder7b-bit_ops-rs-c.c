#include <stdio.h>
int main() {
  unsigned char a = 105;
  unsigned char b = 91;
  printf("a      = %08X\n", a);
  printf("b      = %08X\n", b);
  printf("a | b   = %08X\n", a | b);
  printf("a & b   = %08X\n", a & b);
  printf("a ^ b   = %08X\n", a ^ b);
  printf("!a      = %08X\n", ~a);
  printf("a << 3  = %08X\n", a << 3);
  printf("a >> 3  = %08X\n", a >> 3);
  return 0;
}