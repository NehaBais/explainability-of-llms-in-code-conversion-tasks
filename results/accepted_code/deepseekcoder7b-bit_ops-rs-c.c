#include <stdio.h>

int main() {
  unsigned char a = 105;
  unsigned char b = 91;

  printf("a      = %8.2ib\n", a);
  printf("b      = %8.2ib\n", b);
  printf("a | b  = %8.2ib\n", a | b);
  printf("a & b  = %8.2ib\n", a & b);
  printf("a ^ b  = %8.2ib\n", a ^ b);
  printf("!a     = %8.2ib\n",
         ~a + 1); // bitwise not, then invert the bits to get positive number.
  unsigned char shift_amount = 3;
  printf("a << %d  = %8.2ib\n", shift_amount, a << shift_amount);
  printf("a >> %d = %8.2ib\n", shift_amount,
         a >> shift_amount); // right arithmetic shift

  return 0;
}