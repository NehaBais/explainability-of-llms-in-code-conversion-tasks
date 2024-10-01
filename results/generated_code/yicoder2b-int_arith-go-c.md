This is the equivalent C code for your Golang program:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    if (a != 0 && b != 0) {  // if both operands are not zero
        printf("%d / %d = %d\n", a, b, a/b); // rounds towards 0
        if ((a < 0 && b > 0) || (a > 0 && b < 0)) {  // if signs of operands are different
            printf("%d %% %d = %d\n", a, b, a%b); // sign of result is same as first operand
        } else {
            printf("%d %% %d = %d\n", a, b, -a%b); // sign of result is opposite to second operand
        }
    } else {  // if any operand is zero
        printf("%d / %d = indeterminate\n", a, b);
    }
    return 0;
}
```
