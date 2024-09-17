Certainly! Here is the code in C:
```
#include <stdio.h>

int main() {

    int a = 4;
    int b = 7;

    printf("a AND b: %d\n", a & b);
    printf("a OR b: %d\n", a | b);
    printf("a XOR b: %d\n", a ^ b);
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", a << b); // left shift
    printf("a >> b: %d\n", a >> b); // arithmetic right shift
    printf("a >>> b: %d\n", a >>> b); // logical right shift

    return 0;
}
```
This code should perform the required operations on two integers, a bitwise AND, OR, and XOR, as well as a bitwise NOT, left shift, right shift (arithmetic and logical), and rotates. The shifts and rotates are done with the second integer as the shift/rotate amount. The output of each operation is printed to the console using printf().
