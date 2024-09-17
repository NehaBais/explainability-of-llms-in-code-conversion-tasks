Below is the equivalent C code:

```c
#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc != 3) return -1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d\n", a / b); // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand

    return 0;
}
```

- The `atoi` function is used to convert the command line arguments from string to integer. Note that it doesn't perform any error checking, unlike Rust's `.parse()`.
- For exponentiation (if the operator exists), there isn't a standard library function for it in C, so you'll have to implement your own.

Remember to compile and run this program with two command line arguments. Example: `./program 10 5`.
