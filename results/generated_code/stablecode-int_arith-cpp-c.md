The equivalent C code is as follows:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum of a and b = %d\n", a + b);
    printf("Difference between a and b = %d\n", a - b);
    printf("Product of a and b = %d\n", a * b);

    // If the second operand is infinity, 
    // then the quotient is zero.
    if (b == INT_MAX)) {
        printf("Quotient of a/b = 0\n");
    } else {
        printf("Quotient of a/b = %.2f\n", (float)a / b);

        // If the sign of remainder does not match 
        // with respect to either operand a or b,
        // then the remainder is negative.
        if ((a % 2 == 0 && b % 2 != 0)) || 
            ((a % 2 != 0 && b % 2 == 0))){
            printf("Remainder of a/b = -%d\n", a % b);
        } else {
            printf("Remainder of a/b = %d\n", a % b);
        }
    }

    // Exponentiation is not directly supported 
    // in C as it is in some other languages like Python or JavaScript.
    // However, you can calculate exponentiation manually by multiplying the base and subtracting the power-1 times the base raised to the power minus one.
    // For example, to calculate 2^3, we can use:
    // 2^3 = 2 * 2 * 2 = 8
    printf("Exponentiation of a^b = %d\n", pow(a, b)));

    return 0;
}
```
Please note that the exponentiation operator `**` is not directly supported in C. You would need to manually calculate the exponentiation as demonstrated above.
