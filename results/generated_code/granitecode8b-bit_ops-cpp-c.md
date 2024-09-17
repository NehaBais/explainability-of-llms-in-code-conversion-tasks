Here is the converted code from C++ to C:
```c
#include 
void bitwise(int a, int b) {
 printf("a and b: %d
", a & b); // Note: parentheses are needed because & has lower precedence than <<
 printf("a or b: %d
", a | b);
 printf("a xor b: %d
", a ^ b);
 printf("not a: %d
", ~a);
 
 // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
 // is negative, or is greater or equal to the number of bits in the integer being shifted.
 printf("a shl b: %d
", a << b); // Note: "<<" is used both for output and for left shift
 printf("a shr b: %d
", a >> b); // typically arithmetic right shift, but not guaranteed
 unsigned int ua = a;
 printf("a lsr b: %u
", ua >> b); // logical right shift (guaranteed)
 
 // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
 // The rotate function works for all rotation amounts, but the integer being rotated must always be an
 // unsigned integer.
 printf("a rol b: %u
", (ua << b) | (ua >> (sizeof(int)*8 - b)));
 printf("a ror b: %u
", (ua >> b) | (ua << (sizeof(int)*8 - b)));
}
``` 
Note that in C, the output is not directly printed to the console but stored in a buffer and then printed at once. Also, the logical right shift operator `>>` in C returns an unsigned integer while the arithmetic right shift operator `>>` returns a signed integer. Therefore, we cast one of the operands to unsigned int to ensure that the result of the shift is always an unsigned integer. Additionally, for rotation, we use bitwise operations to simulate the behavior of the rotate function in C++.

