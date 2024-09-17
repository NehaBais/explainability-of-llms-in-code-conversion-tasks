```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("sum:              %d\n", a + b);
    printf("difference:       %d\n", a - b);
    printf("product:          %d\n", a * b);
    printf("integer quotient: %d\n", a / b); // truncates towards zero
    printf("remainder:        %d\n", a % b); // same sign as first operand

    return 0;
}
```
