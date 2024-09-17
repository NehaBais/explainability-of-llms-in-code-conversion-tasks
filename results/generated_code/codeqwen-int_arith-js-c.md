The given code is already written in C, as it does not use JavaScript-specific features like `process.argv`. Here's an equivalent program:

```c
#include <stdio.h>

int main() {
    int A;
    int b;
    printf("Enter two integers: ");
    scanf("%d %d", &A, &b);

    int sum = A + b;
    int difference = A - b;
    int product = A * b;
    float division = (float)A / b;  // Casting to float for floating point division
    int remainder = A % b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient (Towards zero): %.2f\n", division);  // To prevent floating point precision issues we use 2 decimal places
    printf("Remainder: %d\n", remainder);

    return 0;
}
```
This C program also does not include error handling, as in real-world applications it's crucial to handle user input errors and edge cases.
