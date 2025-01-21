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
 printf("a lsr b: %u
", ua >> b); // logical right shift (guaranteed)
 printf("a rol b: %u
", (ua << b) | (ua >> (sizeof(int)*8 - b)));
 printf("a ror b: %u
", (ua >> b) | (ua << (sizeof(int)*8 - b)));
}