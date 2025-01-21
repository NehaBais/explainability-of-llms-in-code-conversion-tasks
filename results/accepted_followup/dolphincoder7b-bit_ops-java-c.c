#include <stdio.h>
void bitwise_func(int a, int b) {
  printf("a AND b: %d\n", a & b);
  printf("a OR b: %d\n", a | b);
  printf("a XOR b: %d\n", a ^ b);
  printf("NOT a: %d\n", ~a);
  printf("a   << b: %d\n", a << b); // left shift
  printf("a   >> b: %d\n", a >> b); // arithmetic right shift
  printf("a  >>> b: %d\n", a >> b); // logical right shift
    printf("a rol b: %d\n", (int)((((unsigned int)a  << b) | (a>>(32 - b))));   //rotate left, C99+
    printf("a ror b: %d\n", (int)((((unsigned int)a  >> b) | (a<<(32 - b))));   //rotate right, C99+
}