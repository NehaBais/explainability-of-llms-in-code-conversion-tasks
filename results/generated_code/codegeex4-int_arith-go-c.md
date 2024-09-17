Below is the C code equivalent to your Golang program.

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);  // truncates towards 0
    printf("%d %% %d = %d\n", a, b, a%b); // same sign as first operand
    
    // C does not support exponentiation operator in its standard library, so we'll have to implement it ourselves.
    // The following example implementation uses pow function from math.h, which has no integer-only version
    long double result = pow(a, b);
    printf("%d ^ %d = %.0Lf\n", a, b, result); 

    return 0;
}
```
Note:
1. In Golang, the `/` operator truncates towards zero, as does C's `%` operator.
2. The `pow()` function is used for exponentiation but it returns a long double. 
3. If you want to use only integer numbers for power operation, then you need an additional library or implement your own power function.
4. To get the same behavior with negative numbers in C, you should use the `%` operator instead of `/`. The remainder will have the same sign as the first operand if both operands are not negative; otherwise, it has the same sign as the second operand.
