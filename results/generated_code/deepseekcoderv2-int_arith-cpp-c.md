 Sure, here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    printf("a/b = %d, remainder %d\n", a / b, a % b);
    return 0;
}
```

Note that in C, the behavior for integer division and modulus operations is the same as in C++. The quotient of `a / b` is rounded towards zero, and the sign of the remainder follows the sign of the first operand.
