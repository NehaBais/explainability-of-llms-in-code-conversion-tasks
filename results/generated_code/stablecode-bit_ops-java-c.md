Here is the equivalent C code for the given Java routine:

```c
#include <stdio.h>

void bitwise(int a, int b) {
    printf("a AND b: %d\n", (a & b)));
    printf("a OR b: %d\n", (a | b)));
    printf("a XOR b: %d\n", (a ^ b)));
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", (a << b)));  // left shift
    printf("a >> b: %d\n", (a >> b)));  // arithmetic right shift
    printf("a >>> b: %d\n", (a >>> b))); // logical right shift
    printf("a rol b: %d\n", ((unsigned long long int) a << b)))); // rotate left, C99+
    printf("a ror b: %d\n", ((unsigned long long int) a >> b)))); // rotate right, C99+
}
```
This is the direct conversion from Java to C. However, please note that in C language, integer constants are represented using "ul" suffix for unsigned integers and "li" prefix for signed integers. 

For example, in the given code snippet, `(a >> b)` represents right arithmetic shift by 'b' positions of the first integer 'a'. The same applies to other bitwise operations mentioned in the code.
