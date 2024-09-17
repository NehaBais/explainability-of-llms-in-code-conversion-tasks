Here is the equivalent C code for your Python code. 

This translation assumes that both inputs are integers, since you're using integer division in your Python code. This may not be true depending on how these variables are initialized elsewhere in your program.

```C
#include <stdio.h>
#include <math.h>

int main() {

    int input1 = 18;
    int input2 = 7;

    // Calculations
    int sum = input1 + input2;
    int difference = input1 - input2;
    int product = input1 * input2;
    float quotient = (float)input1 / (float)input2;
    int remainder;

    remainder = input1 % input2;

    // Outputs
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Integer quotient: %.0f\n", quotient);
    printf("Actual Remainder: %d\n", remainder);
    float exponentiation = pow(input1, input2));
    printf("Exponentiation: %.4f\n",exponentiation);

    return 0;
}
```

This code basically performs all the operations you've mentioned. It displays the result of each operation in a human-readable format.
