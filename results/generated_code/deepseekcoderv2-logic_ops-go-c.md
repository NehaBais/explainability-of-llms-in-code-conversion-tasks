 Certainly! Below is the equivalent code in C that performs the same operations as the provided Go function:

```c
#include <stdio.h>
#include <stdbool.h>

void printLogic(bool a, bool b) {
    printf("a and b is %s\n", a && b ? "true" : "false");
    printf("a or b is %s\n", a || b ? "true" : "false");
    printf("not a is %s\n", !a ? "false" : "true");
}

int main() {
    bool a = true;
    bool b = false;
    printLogic(a, b);
    return 0;
}
```

This C code defines a function `printLogic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them. The `printf` function is used to print the results in a readable format, where `true` is represented as `1` (which is printed as `true`) and `false` is represented as `0` (which is printed as `false`).
