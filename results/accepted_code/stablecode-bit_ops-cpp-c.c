#include <stdio.h>

void bitwise(int a, int b) {
    printf("a and b: %d\n", (a & b)));
    printf("a or b : %d\n", (a | b))));
    printf("a xor b : %d\n", (a ^ b))));

    // bitwise NOT operation on the first integer 'a'
    printf("not a:   %d\n", ~a));

    // left shift operation on the first integer 'a', with shift amount 'b' from
    // the second integer 'b'
    printf("a shl b: %d\n", (a << b))));

    // right shift operation on the first integer 'a', with shift amount 'b'
    // from the second integer 'b'
    printf("a shr b:  %d\n", (a >> b))));

    // logical left shift operation on the first integer 'a', with shift amount
    // 'b' from the second integer 'b'
    unsigned int ua = a;
    printf("a lsr b: %d\n", (ua >> b))));
}