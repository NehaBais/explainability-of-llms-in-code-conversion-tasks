#include <stdio.h>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;
  printf("a      = %d\n", a);
  printf("b      = %d\n", b);
  printf("a | b  = %d\n", a | b);
  printf("a & b  = %d\n", a & b);
  printf("a ^ b  = %d\n", a ^ b);
  printf("!a     = %d\n", ~a);
  printf("a << 3 = %d\n", a << 3);
  printf("a >> 3 = %d\n", a >> 3);
}