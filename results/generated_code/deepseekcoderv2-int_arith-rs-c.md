Answer: Here is the C code that performs the same operations:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./a.out a b\n");
        return -1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d (truncates towards zero)\n", a / b); // truncates towards zero
    printf("remainder:        %d (same sign as first operand)\n", a % b); // same sign as first operand
}
```
