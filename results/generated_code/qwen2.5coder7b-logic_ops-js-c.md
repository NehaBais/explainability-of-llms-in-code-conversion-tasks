Sure, here is how you can convert the JavaScript function to C:

```c
#include <stdio.h>

void logic(int a, int b) {
    printf("a AND b: %d\n", (a && b));
    printf("a OR b: %d\n", (a || b));
    printf("NOT a: %d\n", (!a));
}

int main() {
    logic(1, 0);
    return 0;
}
```

In C, we use `printf` to print output, and `int` type is used for boolean values. The logical AND (`&&`), OR (`||`), and NOT (`!`) operators work similarly in C as they do in JavaScript.
