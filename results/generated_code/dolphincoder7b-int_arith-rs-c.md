The Rust code is quite simple and straightforward. The equivalent C code that performs the same operations would look like this:
```c
#include <stdio.h>
int main(int argc, char* argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d\n", a / b);  // truncates towards zero
    printf("remainder:        %d\n", a % b);  // same sign as first operand

    return 0;
}
```
This C code is almost the same as Rust, but it's missing some functionality. The 'main' function needs to declare an integer argc and a pointer array argv of strings. Also, there are no built-in functions for integer conversion or printf string formatting, so we have to use manual conversion and printing for every operation.
