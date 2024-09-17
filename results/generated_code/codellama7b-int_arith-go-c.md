
Here's the C code that satisfies the requirements:
```C
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    
    // sum
    printf("%d + %d = %d\n", a, b, a+b);
    
    // difference
    printf("%d - %d = %d\n", a, b, a-b);
    
    // product
    printf("%d * %d = %d\n", a, b, a*b);
    
    // integer quotient (truncates towards 0)
    int quotient = a/b;
    printf("%d / %d = %d (truncating towards zero)\n", a, b, quotient);
    
    // remainder
    int remainder = a%b;
    if(remainder < 0 && b > 0 || remainder > 0 && b < 0){
        printf("%d %% %d = %d (same sign as second operand)\n", a, b, remainder);
    } else {
        printf("%d %% %d = %d (same sign as first operand)\n", a, b, remainder);
    }
    
    // no exponentiation operator
    
    return 0;
}
```
Note that the C code uses `scanf` to read the two integers from the user, and `printf` to print the results. The `main` function is used as the entry point of the program. The `int quotient = a/b;` line calculates the integer quotient using integer division, which truncates towards 0 by default. The `remainder` variable is calculated using the modulo operator (`%`). The sign of the remainder depends on whether the divisor has the same sign as the dividend or not.
