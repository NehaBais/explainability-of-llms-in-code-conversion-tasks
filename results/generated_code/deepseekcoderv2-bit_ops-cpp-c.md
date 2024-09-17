Answer: The following code is the C version of the above function. Only difference in this case is that we had to use `unsigned` keyword while defining variable `int a`. This will make sure it behaves as unsigned integer instead of signed one. And also there is no need for left-shift operator in C as you can simply multiply with 2^b and divide by the same to perform the shift operation.
```c
#include<stdio.h>
void bitwise(unsigned int a, unsigned int b) {
    printf("a and b: %u\n", a & b); // Note: parentheses are needed because & has lower precedence than <<
    printf("a or b:  %u\n", a | b);
    printf("a xor b: %u\n", a ^ b);
    printf("not a:   %u\n", ~a );

    // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    // is negative, or is greater or equal to the number of bits in the integer being shifted.
    printf("a shl b: %u\n", a << b); // Note: "<<" is used both for output and for left shift
    printf("a shr b: %u\n", a >> b); // typically arithmetic right shift, but not guaranteed
    unsigned int ua = a;
    printf("a lsr b: %u\n", (unsigned)ua >> b); // logical right shift (guaranteed)

    // there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
    // The rotate function works for all rotation amounts, but the integer being rotated must always be an
    // unsigned integer.
    printf("a rol b: %u\n", std::rotl(ua, b));
    printf("a ror b: %u\n", std::rotr(ua, b));
}
```
