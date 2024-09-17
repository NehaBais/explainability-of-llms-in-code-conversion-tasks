Below is your JavaScript code converted to C:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double division = (double) a / b; // C doesn't support float/int division, so we need to cast one of the operands to double
    int remainder = a % b;

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %.2f\n", division); // Displaying up to two decimal places for the division result
    printf("a %% b = %d\n", remainder);

    return 0;
}
```
Compile this code with `gcc your_file_name.c -o your_executable` and then run it as `./your_executable <a> <b>` where `<a>` and `<b>` are your input numbers. The output is similar to the JavaScript version, but due to differences in how C handles division and remainder operations, it may not be exactly the same.

Please note that this C code doesn't include any error checking. You should add appropriate checks for valid inputs in a production environment.
