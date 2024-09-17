Below is the equivalent C code for your Rust code. The function `i32_operations` takes two integers, performs all required operations, and prints out the results.

```c
#include <stdio.h>

void i32_operations(int a, int b) {
    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d\n", a / b);  // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./program <integer1> <integer2>\n");
        return 1;
    }

    int a = atoi(argv[1]));
    int b = atoi(argv[2]));

    i32_operations(a, b);

    return 0;
}
```
This C code does exactly what your Rust code does. It takes two integers as input arguments, performs all the required operations on these integers, and prints out the results.
