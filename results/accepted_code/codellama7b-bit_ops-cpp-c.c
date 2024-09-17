#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", a & b); // Note: parentheses are needed because & has
                                  // lower precedence than <<
  printf("a or b:  %d\n", a | b);
  printf("a xor b: %d\n", a ^ b);
  printf("not a:   %d\n", ~a);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift
  // count (that is, b) is negative, or is greater or equal to the number of
  // bits in the integer being shifted.
  printf("a shl b: %d\n",
         a << b); // Note: "<<" is used both for output and for left shift
  printf("a shr b: %d\n",
         a >> b); // typically arithmetic right shift, but not guaranteed
  unsigned int ua = a;
  printf("a lsr b: %d\n", ua >> b); // logical right shift (guaranteed)

  // there are no rotation operators in C++, but as of c++20 there is a
  // standard-library rotate function. The rotate function works for all
  // rotation amounts, but the integer being rotated must always be an unsigned
  // integer.
  printf("a rol b: %d\n", std::rotl(ua, b));
  printf("a ror b: %d\n", std::rotr(ua, b));
}