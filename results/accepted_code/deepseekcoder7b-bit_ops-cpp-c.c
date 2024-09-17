#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", (a & b));
  printf("a or b: %d\n", (a | b));
  printf("a xor b: %d\n", (a ^ b));
  printf("not a: %d\n",
         ~a); // Note that in C, bitwise NOT operator works on unsigned numbers.
              // So cast the int to an unsigned int before usage.

  /* Note: the C shift operators are not guaranteed to work if the shift count
   * (that is, b) is negative or greater than the number of bits in a integer
   * being shifted.*/
  printf("a shl b: %d\n", (a << b)); // left shift
  printf("a shr b: %d\n",
         (unsigned int)a >>
             b); // typically arithmetic right shift, but not guaranteed to be
                 // the same as logical right shift in all cases.

  unsigned int ua = a;
  printf("a lsr b: %u\n", (ua >> b)); // logical right shift

  /* there are no rotation operators in C, bitwise rotation is usually
   * implemented with masking and shifting operations */
}