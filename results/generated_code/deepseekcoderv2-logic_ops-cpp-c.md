 Sure, here's the equivalent code in C:

```c
#include <stdio.h>
#include <stdbool.h>

void print_logic(bool a, bool b) {
    printf("%s and %s is %s\n", a ? "true" : "false", b ? "true" : "false", a && b ? "true" : "false");
    printf("%s or %s is %s\n", a ? "true" : "false", b ? "true" : "false", a || b ? "true" : "false");
    printf("not %s is %s\n", a ? "true" : "false", !a ? "true" : "false");
}
```

This C code defines the same function `print_logic` that takes two boolean arguments and prints their logical AND, OR, and NOT results. The ternary operator (`? :`) is used to convert booleans to strings for printing.
