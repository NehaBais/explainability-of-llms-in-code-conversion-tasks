Here is the equivalent C code for performing bitwise AND, OR, XOR operations on two integers and also for performing a bitwise NOT operation on the first integer along with other specified operations:

```c
#include <stdio.h>

void bitwise(int a, int b)
{
    printf("a and b: %d\n", (a & b)));
    printf("a or b : %d\n", (a | b))));
    printf("a xor b : %d\n", (a ^ b))));

    // bitwise NOT operation on the first integer 'a'
    printf("not a:   %d\n", ~a));

    // left shift operation on the first integer 'a', with shift amount 'b' from the second integer 'b'
    printf("a shl b: %d\n", (a << b))));

    // right shift operation on the first integer 'a', with shift amount 'b' from the second integer 'b'
    printf("a shr b:  %d\n", (a >> b))));

    // logical left shift operation on the first integer 'a', with shift amount 'b' from the second integer 'b'
    unsigned int ua = a;
    printf("a lsr b: %d\n", (ua >> b))));
}
```
The provided C++ code is converted to C code as per your requirement. The routine 'bitwise' takes two integers, performs bitwise AND, OR, XOR operations and also performs a bitwise NOT operation on the first integer along with other specified operations. The output results are displayed using printf function in C.
