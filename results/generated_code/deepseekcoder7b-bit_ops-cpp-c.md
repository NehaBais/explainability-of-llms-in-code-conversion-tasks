In C programming language, bitwise operations are done using bitwise operators rather than function calls. Also, there isn't a built-in right arithmetic shift (>>), so we have to emulate it by casting the integer to an unsigned int before shifting, as shown in the below code snippet.
```c
#include <stdio.h>

void bitwise(int a, int b) {
    printf("a and b: %d\n", (a & b)); 
    printf("a or b: %d\n", (a | b));  
    printf("a xor b: %d\n", (a ^ b));
    printf("not a: %d\n", ~a);      //Note that in C, bitwise NOT operator works on unsigned numbers. So cast the int to an unsigned int before usage.
   
    /* Note: the C shift operators are not guaranteed to work if the shift count (that is, b) 
     * is negative or greater than the number of bits in a integer being shifted.*/
    printf("a shl b: %d\n", (a << b)); // left shift 
    printf("a shr b: %d\n", (unsigned int)a >> b); // typically arithmetic right shift, but not guaranteed to be the same as logical right shift in all cases.
    
    unsigned int ua = a;
    printf("a lsr b: %u\n", (ua >> b));  // logical right shift 
  
    /* there are no rotation operators in C, bitwise rotation is usually implemented with masking and shifting operations */
}
```
Please note that the `std::rotl` and `std::rotr` functions you used in your code don't exist in C or C++. If you need to rotate left or right (i.e., shift all bits towards higher/lower index), a typical solution would be:
- Left rotation (equivalent of rol): `(a << b) | (a >> (32 - b))`
- Right rotation (equivalent of ror): `(a >> b) | (a << (32 - b))`
These code snippets assume a 32 bit integer. If you're working with different sized integers, you will need to adjust the shift and rotate amounts appropriately. The above methods can be used in C as well but remember to change them based on your data type size. Also, these operations are not standard functions of any languages so make sure that they fit into your needs.

