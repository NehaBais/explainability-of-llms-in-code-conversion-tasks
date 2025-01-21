 Sure, here is the equivalent code in C without error handling. Note that Rust's `env::args` and parsing are replaced with standard input in C, and we handle integer division differently since C does not have an automatic way to handle rounding for division like Rust does.

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <integer1> <integer2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    
    // For integer quotient in C, we use the / operator which truncates towards zero.
    int quotient = a / b;
    printf("integer quotient: %d\n", quotient);

    // For remainder, the sign is determined by the first operand if they are different.
    int remainder = a % b;
    printf("remainder:        %d\n", remainder);

    return 0;
}
```

In this C code:
- `atoi` is used to convert command line arguments from strings to integers.
- The integer division `/` operator in C truncates towards zero, which matches how Rust handles integer division for the quotient.
- The remainder operation `%` follows the rule that its sign matches the sign of the first operand if the signs of the operands are different.
