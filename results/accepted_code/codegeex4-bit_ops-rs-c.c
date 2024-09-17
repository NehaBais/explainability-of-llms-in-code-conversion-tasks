#include <stdio.h>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;

  printf("a      = %08b\n", a);
  printf("b      = %08b\n", b);
  printf("a | b  = %08b\n", a | b);
  printf("a & b  = %08b\n", a & b);
  printf("a ^ b  = %08b\n", a ^ b);
  printf("!a     = %08b\n", ~a + 1); // To make it unsigned
  printf("a << 3 = %08b\n", a << 3);
  printf("a >> 3 = %08b\n", a >> 3);

  printf("a << b = %08b\n", a << b);
  printf("a >> b = %08b\n", a >> b);

  unsigned char temp = a;
  int i;

  for (i = 0; i < b; i++) {
    if ((temp & 1) == 1)
      temp = (temp >> 7) | (temp << 1);
    else
      temp >>= 1;
  }
  printf("rotate right by b on a: %08b\n", temp);

  temp = a;

  for (i = 0; i < b; i++) {
    if ((temp & 128) == 128)
      temp = (temp << 7) | (temp >> 1);
    else
      temp <<= 1;
  }
  printf("rotate left by b on a: %08b\n", temp);

  return 0;
}