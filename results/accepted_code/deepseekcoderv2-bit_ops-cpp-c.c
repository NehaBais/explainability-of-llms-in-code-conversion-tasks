#include <stdint.h> // For uintptr_t if needed for specific bit manipulation
#include <stdio.h>
#include <stdlib.h> // For std::rotl and std::rotr (if available)

void bitwise(int a, int b) {
  printf("a and b: %d\n", a & b);
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
  unsigned int ua = (unsigned int)a;
  printf("a lsr b: %u\n", ua >> b); // logical right shift (guaranteed)

  // There are no rotation operators in C, but you can implement them using
  // shifts if needed. Here is a simple implementation of left and right
  // rotations using shifts:
  unsigned int rol(unsigned int value, int shift) {
    return (value << shift) | (value >> (32 - shift));
  }
  unsigned int ror(unsigned int value, int shift) {
    return (value >> shift) | (value << (32 - shift));
  }
  printf("a rol b: %u\n", rol(ua, b));
  printf("a ror b: %u\n", ror(ua, b));
}

int main() {
  int a = 0x12345678; // Example integer values
  int b = 3;          // Example shift/rotate amount
  bitwise(a, b);
  return 0;
}