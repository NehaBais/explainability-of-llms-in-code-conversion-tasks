```c
#include <stdio.h>

void boolean_ops(bool a, bool b) {
    printf("%-5b and %-5b -> %-5b\n", a, b, a && b);
    printf("%-5b or  %-5b -> %-5b\n", a, b, a || b);
    printf("%-5b xor  %-5b -> %-5b\n", a, b, a ^ b);
    printf("not %-5b -> %-5b\n", a, !a);
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);

    return 0;
}
```
