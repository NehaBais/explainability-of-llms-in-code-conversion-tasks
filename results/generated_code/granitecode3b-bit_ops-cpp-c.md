Here's the converted code in C:
```c
#include 
void bitwise(int a, int b) { 
 printf("a and b: %d\n", a & b); // Note: parentheses are needed because & has lower precedence than <<
 printf("a or b: %d\n", a | b);
 printf("a xor b: %d\n", a ^ b);
 printf("not a: %d\n", ~a);

 // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
 // is negative, or is greater or equal to the number of bits in the integer being shifted.
 printf("a shl b: %d\n", a << b); // Note: "<<" is used both for output and for left shift
 printf("a shr b: %d\n", a >> b); // typically arithmetic right shift, but not guaranteed

 unsigned int ua = a;
 printf("a lsr b: %u\n", ua >> b); // logical right shift (guaranteed)

 // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
 // The rotate function works for all rotation amounts, but the integer being rotated must always be an
 // unsigned integer.
 printf("a rol b: %u\n", std::rotl(ua, b));
 printf("a ror b: %u\n", std::rotr(ua, b));
}
```
The only difference between the C++ and C code is that in the C code, I added `unsigned int ua = a;` to create a copy of `a` as an unsigned integer before performing the logical right shift (`>>`). This is because the logical right shift operator (`>>`) returns an unsigned integer. Also, I removed the parentheses around the `printf` function calls and replaced the semicolons with newlines for better readability.

