```c
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    float quotient = (float) num1 / num2;  // cast to avoid integer division
    int remainder = num1 % num2;

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("quotient of a / b = %.0f\n", quotient);  // truncate towards zero
    printf("remainder of a / b = %d\n", remainder);  // same sign as first operand

    return 0;
}
```

The C program prompts the user to enter two integers and then calculates their sum, difference, product, quotient (rounded towards zero), and remainder. Note that floating-point division is used for the quotient to get a real number result and then the integer part is converted back to an integer using type casting.
