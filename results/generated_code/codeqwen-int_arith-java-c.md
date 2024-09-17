The equivalent C code would be:

```c
#include <stdio.h>

int main() {
    int A, b;

    printf("Enter two integers: ");
    scanf("%d %d", &A, &b);

    int sum = A + b;        // The result of adding 'A' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    int difference = A - b; // The result of subtracting 'b' from 'A'
    int product = A * b;    // The result of multiplying 'A' and 'b'
    float division = (float)A / b; // The result of dividing 'A' by 'b' (Note: 'division' does not contain the fractional result)
    int remainder = A % b;  // The remainder of dividing 'A' by 'b'

    printf("a + b = %d\n", sum);
    printf("A - b = %d\n", difference);
    printf("A * b = %d\n", product);
    printf("quotient of a / b = %.2f\n", division); // prints the quotient with 2 decimal places
    printf("remainder of a / b = %d\n", remainder);

    return 0;
}
```
Note: In C, we use `%d` for integer types and `%.2f` for floating point numbers. Also, the division between two integers results in an integer by default (using floor division) in C, so you must explicitly cast one of the operands to a float to get a floating point result.
