Sure, here is the equivalent C code:

```c
#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
    printf("a AND b: %d\n", a && b);
    printf("a OR b: %d\n", a || b);
    printf("NOT a: %d\n", !a);
}

int main() {
    logic(true, true);
    return 0;
}
```
This code includes the `stdbool.h` header file to use boolean data types (`true` and `false`). The function `logic()` takes two parameters of type `bool`, performs logical operations on them, and prints the results. The `printf` function is used to print the output instead of JavaScript's `print`.
