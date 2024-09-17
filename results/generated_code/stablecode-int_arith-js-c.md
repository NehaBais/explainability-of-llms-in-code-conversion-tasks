Here is the converted code from JavaScript to C:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Invoked as ./script_name <a> <b>. Positions 0 and 1 in the argv array contain 'node' and 'script_name.js' respectively

    int a = atoi(argv[1]));
    int b = atoi(argv[2]));

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double)a / b;
    int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

    printf("a + b = %d\n", sum);  // The %d syntax is a placeholder that is replaced by the sum
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %.2f\n", division);
    printf("a %% b = %d\n", remainder);

    return 0;
}
```

This code takes two integers as command-line arguments (`argv[1]` and `argv[2]`) and performs various arithmetic operations on them. The results are printed to the console using the `printf()` function.
