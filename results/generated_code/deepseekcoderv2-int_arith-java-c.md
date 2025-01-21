 Sure, here is the equivalent code in C without error handling or support for exponentiation (since standard C does not have an exponentiation operator):

```c
#include <stdio.h>

int main() {
    int a, b;
    
    // Get the 2 numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;        // The result of adding 'a' and 'b'
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'
    int division = a / b;   // The result of dividing 'a' by 'b', truncates towards zero
    int remainder = a % b;  // The remainder of dividing 'a' by 'b', sign matches the first operand

    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("quotient of a / b = %d\n", division);   // truncates towards zero
    printf("remainder of a / b = %d\n", remainder);   // sign matches the first operand

    return 0;
}
```

This C code performs the same operations as the Java code you provided, including getting two integers from the user and displaying their sum, difference, product, quotient (truncates towards zero), and remainder (sign matches the first operand).
