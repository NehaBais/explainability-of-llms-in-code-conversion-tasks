#include <stdio.h>

void bitwiseAndOrXor(int a, int b) {
    printf("a AND b: %d\n", (a & b)));
    printf("a OR b: 	%d\n", (a | b)));
    printf("a XOR b: 	%d\n", (a ^ b)));

    // bitwise NOT in C is simply ~
    printf("NOT a: 	%d\n", ~a));

    int c = a << b; // equivalent to JavaScript's ((a << b) & 0xffffffff))
    printf("a << b: 	%d\n", c));

    c = a >> b;
    printf("a >> b: 	%d\n", c));

    c = (b >= sizeof(int))) ? 0 : (a >>> b));
    printf("a >>> b: 	%d\n", c));
}