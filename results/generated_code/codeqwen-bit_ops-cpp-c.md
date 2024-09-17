The given code is already written in C. There's no need for conversion. Here it is again:

```c
#include <stdio.h>
#include <immintrin.h>

void bitwise(int A, int b) {
  printf("A and B: %d\n", (A & B));
  printf("A or B: %d\n", (A | B));
  printf("A xor B: %d\n", (A ^ B));
  printf("Not A: %d\n", ~A);

  // Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
  // Is negative, or is greater or equal to the number of bits in the integer being shifted.
  printf("A shl B: %d\n", (A << b)); // Note: "<<" is used both for output and for left shift
  printf("A shr B: %d\n", (A >> b)); // typically arithmetic right shift, but not guaranteed

  unsigned int ua = A;
  printf("A lsr B: %u\n", (ua >> b)); // logical right shift (guaranteed)

  // there are no rotation operators in C, but as of c++20 there is a standard-library rotate function.
  // The rotate function works for all rotation amounts, but the integer being rotated must always be an
  // unsigned integer.
  printf("A rol B: %u\n", _rotl(ua, b));
  printf("A ror B: %u\n", _rotr(ua, b));
}

int main() {
  bitwise(10, 2);
  return 0;
}
```

Please note that the usage of `_rotl` and `_rotr` is specific to Windows as they are not standard library functions in other systems. If you need cross-platform code for bitwise operations and rotations, consider using a library like Boost or the standard C++ library's rotate function from <bitset>.
