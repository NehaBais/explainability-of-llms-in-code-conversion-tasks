 Here's the equivalent code in C without error handling:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);  // truncates towards zero
    printf("%d %% %d = %d\n", a, b, a % b); // same sign as first operand
    // no exponentiation operator in C, you would need to implement it manually or use a library if available
    return 0;
}
```

Note: In C, the modulus operation (`%`) has the same sign as the dividend. If you want the remainder to match the sign of the divisor instead, you can handle that in your application logic by adjusting the result accordingly. For exponentiation, you would need to implement it manually or use a library function if available, as there is no built-in operator for exponentiation in C.
