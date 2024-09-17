#include <immintrin.h>
#include <stdio.h>

void bitwise(int A, int b) {
  printf("A and B: %d\n", (A & B));
  printf("A or B: %d\n", (A | B));
  printf("A xor B: %d\n", (A ^ B));
  printf("Not A: %d\n", ~A);

  // Note: The C/C++ shift operators are not guaranteed to work if the shift
  // count (that is, b) Is negative, or is greater or equal to the number of
  // bits in the integer being shifted.
  printf("A shl B: %d\n",
         (A << b)); // Note: "<<" is used both for output and for left shift
  printf("A shr B: %d\n",
         (A >> b)); // typically arithmetic right shift, but not guaranteed

  unsigned int ua = A;
  printf("A lsr B: %u\n", (ua >> b)); // logical right shift (guaranteed)

  // there are no rotation operators in C, but as of c++20 there is a
  // standard-library rotate function. The rotate function works for all
  // rotation amounts, but the integer being rotated must always be an unsigned
  // integer.
  printf("A rol B: %u\n", _rotl(ua, b));
  printf("A ror B: %u\n", _rotr(ua, b));
}

int main() {
  bitwise(10, 2);
  return 0;
}