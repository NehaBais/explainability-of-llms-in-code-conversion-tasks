 Here's the equivalent code in C, assuming you are using a command-line interface to input the integers and output the results:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <a> <b>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double)a / b;  // Ensure division is done in floating point for accurate quotient
    int remainder = a % b;

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %.0f (rounds towards zero)\n", division);  // Indicate rounding towards zero
    printf("a %% b = %d (remainder sign matches the sign of a if different from b)\n", remainder);

    return 0;
}
```

This C code reads two integers from the command line, performs the specified arithmetic operations, and prints the results. Note that for division, it uses `%.0f` to format the float as an integer (which effectively rounds towards zero), and it specifies how the remainder is calculated according to the sign of the operands if they are different.
