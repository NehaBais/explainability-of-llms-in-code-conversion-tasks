 Here's the equivalent code in C that performs the same operations as your Python script:

```c
#include <stdio.h>
#include <math.h>

int main() {
    int input1, input2;
    
    // Prompt user for input
    printf("Enter first integer: ");
    scanf("%d", &input1);
    printf("Enter second integer: ");
    scanf("%d", &input2);

    // Perform operations and print results
    int sum = input1 + input2;
    printf("Sum: \t\t %d\n", sum);

    int difference = input1 - input2;
    printf("Difference: \t %d\n", difference);

    int product = input1 * input2;
    printf("Product: \t %d\n", product);

    // For quotient and remainder, use integer division and modulus operation
    int quotient_int = input1 / input2;
    float quotient_float = (float)input1 / input2;
    printf("Integer quotient: \t %d\n", quotient_int);
    printf("Float quotient: \t %.6f\n", quotient_float);

    int remainder = input1 % input2;
    printf("Whole Remainder: \t %d\n", remainder);
    printf("Actual Remainder: \t %d\n", remainder);

    // For exponentiation, use the pow function from math library
    double exponentiation = pow(input1, input2);
    printf("Exponentiation: \t %.0f\n", exponentiation);

    return 0;
}
```

This C code prompts the user for two integers, performs the specified arithmetic operations, and prints the results. Note that in C, integer division truncates towards zero by default, which matches the behavior of Python's `int()` function for positive numbers when using floor division. The remainder operation (`%`) in C also follows this behavior unless otherwise specified.
