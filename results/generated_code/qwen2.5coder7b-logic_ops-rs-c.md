Here is the equivalent code in C:

```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, a && b);
    printf("%d or %d -> %d\n", a, b, a || b);
    printf("%d xor %d -> %d\n", a, b, a ^ b);
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

Note that in C, `bool` is not an intrinsic type. Instead, it is typically represented by an integer where 0 represents false and any non-zero value represents true (commonly just 1).
