Here is the equivalent C code for your requirement. Note that you need to include `<limits.h>` to get the number of bits in an integer (`CHAR_BIT*sizeof(int)`) and `<stdio.h>` for standard input/output functions:
```C
#include <limits.h>
#include <stdio.h>

void bitwise(int a, int b) {
    printf("a and b: %d\n", (a & b)); 
    printf("a or b:  %d\n", (a | b));
    printf("a xor b: %d\n", (a ^ b));
    printf("not a:   %d\n", ~a);

    // Note that the C/C++ shift operators are not guaranteed to work if 
    // the shift count is negative or >= number of bits in integer.
    printf("a shl b: %d\n", (a << b));
  
    int num_bits = CHAR_BIT*sizeof(int);
    b %= num_bits; // ensure that rotate amount is within [0,num_bits)

    unsigned int ua = a;
    printf("a lsr b: %d\n", (ua >> b)); 
  
    // there are no rotation operators in C. You can implement them yourself
    unsigned int mask = (1 << num_bits) - 1; // all ones
    printf("a rol b: %u\n", ((ua<<b) | (ua>>(num_bits-b))) & mask);
    printf("a ror b: %u\n", ((ua>>b) | (ua<<(num_bits-b))) & mask);
}
```
Please note that the bitwise rotate is a custom implementation as there are no built in C operators for rotating bits. The `mask` ensures that only the valid number of bits are taken into account after rotation.
