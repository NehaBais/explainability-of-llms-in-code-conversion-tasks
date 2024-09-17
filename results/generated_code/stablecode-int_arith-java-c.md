Here is the equivalent C code:

```c
#include <stdio.h>

int main() {
    // Get two integers from command line arguments
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'
    double division = (double)a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result))

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("quotient of a / b = %.2f\n", division); // Prints the quotient with two decimal places
    return 0;
}
```
This code does exactly the same as your Java code. It gets two integers from the user, performs various arithmetic operations on them and finally prints the results.
