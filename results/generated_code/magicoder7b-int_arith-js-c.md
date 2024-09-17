 In C, we can't directly get user input and console log data in the same way as JavaScript. Therefore, we will need to use the `scanf()` function for getting inputs from users and print statements for displaying output. Here is a translation of your given code into C:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number:\n");
    scanf("%d", &a);
    
    printf("Enter second number:\n");
    scanf("%d", &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float division = (float)a / b; // We're casting one operand to 'float' so we can get decimal results.

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %.2f\n", division); // Two decimal places.
    return 0;
}
```

Please note that this C code will not calculate the remainder or exponentiation as you did in your JavaScript code because C language doesn't support these operations directly for integers without using any library functions like `pow()`, `%` operator. You can use `pow()` function from `math.h` library to get the power of two numbers and `%` operator to get the remainder of a division operation.
