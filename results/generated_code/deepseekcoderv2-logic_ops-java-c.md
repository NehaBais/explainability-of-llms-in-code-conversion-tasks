 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdbool.h>

void logic(bool a, bool b) {
    printf("a AND b: %d\n", a && b);
    printf("a OR b: %d\n", a || b);
    printf("NOT a: %d\n", !a);
}

int main() {
    logic(true, true);
    logic(true, false);
    logic(false, true);
    logic(false, false);
    return 0;
}
```

Explanation:
- The `logic` function takes two boolean arguments `a` and `b`.
- It prints the results of "AND" (`&&`), "OR" (`||`), and "NOT" (`!`) operations on these arguments.
- In C, logical operations return integers (1 for true, 0 for false).
