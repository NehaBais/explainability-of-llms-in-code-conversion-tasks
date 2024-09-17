Below is the equivalent C code:
```c
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);  // truncates towards 0
    printf("%d %% %d = %d\n", a, b, a%b);  // same sign as first operand
    int result = 1;
    for(int i = 0; i < b; i++) {
        result *= a; // or result = result * a
    }
    printf("%d ^ %d = %d\n", a, b, result);
    printf("%d / %d = %.2f\n", a, b, ((float)a)/b); // rounds to two decimal places
    return 0;
}
```
In C, the remainder operator `%` works differently. It returns the remainder of the division, rather than the integer quotient that is usually returned by other languages. In this case, the result will be the same sign as the second operand (as specified in the question). 
