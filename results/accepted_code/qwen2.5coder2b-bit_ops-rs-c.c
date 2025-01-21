#include <stdio.h>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;

  printf("a      = %08x\n", a); // hexadecimal format (lowercase)
  printf("b      = %08x\n", b);
  printf("a | b  = %08x\n", a | b);
  printf("a & b  = %08x\n", a & b);
  printf("a ^ b  = %08x\n", a ^ b);
  printf("!a     = %08x\n", ~a);
  printf("a << 3 = %08x\n", a << 3);
  printf("a >> 3 = %08x\n", a >> 3);

  return 0;
}