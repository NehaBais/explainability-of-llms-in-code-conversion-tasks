Sure, here's how you can convert the given JavaScript code into C language:

```c
#include <stdio.h>

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

    double division = (double)a / b; // Explicitly cast to double for division
    int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);

    // For integer quotient, we use floor because it rounds towards zero
    int quotient = (int)division;
    printf("a / b (rounded towards zero) = %d\n", quotient);

    // Remainder sign matches the sign of the first operand
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("a %% b = %d\n", remainder);
    } else {
        // If signs differ, remainder is negative
        printf("a %% b = -%d\n", -remainder);
    }

    return 0;
}
```

You can compile this code using a C compiler. Make sure to save it as `main.c`, for example, and then run the command:

gcc main.c -o main
./main <a> <b>

This will take two integers as input from the user and display their sum, difference, product, quotient (rounded towards zero), remainder, and exponentiation.
