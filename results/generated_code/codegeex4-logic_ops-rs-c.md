In C language, the equivalent code would be:

```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, a && b);
    printf("%d or %d -> %d\n", a, b, a || b);
    printf("not %d -> %d\n", a, !a);
}

int main() {
    boolean_ops(1, 1);
    boolean_ops(1, 0);
    boolean_ops(0, 1);
    boolean_ops(0, 0);
    return 0;
}
```

In C language, logical operations are performed with the `&&` operator for "and", `||` for "or" and `!` for "not". Also note that in C language, a non-zero value is treated as true and zero is treated as false.
