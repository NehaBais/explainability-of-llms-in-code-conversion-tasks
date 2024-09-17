Below is the C equivalent code:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = (int) ((double)a / b); // truncates towards zero
    int remainder = a % b;  // same sign as first operand

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient); 
    printf("Remainder: %d\n", remainder);

    return 0;
}
```

Note:
- In C, the division is truncated towards zero if both operands are integers.
- The sign of the result for modulus operation is determined by the first operand. 

This code will prompt the user to enter two integers and then print out their sum, difference, product, quotient, and remainder. Note that the typecast in the `quotient` calculation ensures that the division is carried out as a floating-point division before being converted back to an integer, which correctly truncates towards zero.
