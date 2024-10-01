## Solution 

```c
#include <stdbool.h>
#include <stdio.h>

void print_result(const char* operation, bool a, bool b, bool result) {
    printf("%s %d and %d -> %d\n", operation, a, b, result);
}

void boolean_ops(bool a, bool b) {
    print_result("and", a, b, a && b);
    print_result("or", a, b, a || b);
    print_result("xor", a, b, a ^ b);
    printf("not %d -> %d\n", a, !a);
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false)
    return 0;
}
```
