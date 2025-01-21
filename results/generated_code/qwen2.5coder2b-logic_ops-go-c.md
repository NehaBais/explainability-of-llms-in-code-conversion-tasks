In C, we can use the logical operators `&&`, `||`, and `!` to perform the required operations. Here's an example code snippet that converts your Go function into C:

```c
#include <stdio.h>

void printLogic(bool a, bool b) {
    printf("a and b is %d\n", a && b);
    printf("a or b is %d\n", a || b);
    printf("not a is %d\n", !a);
}

int main() {
    printLogic(true, true);
    printLogic(false, false);
    printLogic(true, false);
    printLogic(false, true);

    return 0;
}
```

In this code snippet, `printLogic` function takes two boolean arguments `a` and `b`. It uses the logical operators `&&`, `||`, and `!` to compute the result of "and", "or", and "not" operations on these inputs respectively. The `main` function demonstrates calling `printLogic` with different pairs of boolean values.
