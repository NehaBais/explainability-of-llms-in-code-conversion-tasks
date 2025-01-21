Sure, here is the equivalent C code for your requirements:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    
    // Since integer division truncates towards 0 in C,
    // we need to use the floor function to get the correct quotient.
    int quotient = (a / b) + ((a % b != 0) ? -1 : 0); 
    printf("%d / %d = %d\n", a, b, quotient);

    // For remainder, same sign as the first operand in C.
    int remainder = (a >= 0 && b > 0) || (a < 0 && b < 0) ? a % b : -abs(a % b);
    printf("%d %% %d = %d\n", a, b, remainder);

    return 0;
}
```

This C code does the same as your Go code. It prompts the user to enter two integers, then prints their sum, difference, product, integer quotient (using floor function), and remainder based on whether the operands have different signs.
