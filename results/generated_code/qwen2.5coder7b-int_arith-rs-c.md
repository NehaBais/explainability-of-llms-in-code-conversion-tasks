Here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d\n", a / b); // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand

    return 0;
}
```

This C code will get two integers from the user, and then (for those two integers), display their sum, difference, product, integer quotient, and remainder. For quotient, it truncates towards zero and for remainder, its sign matches with the sign of the first operand.
