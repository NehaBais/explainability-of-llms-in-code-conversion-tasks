Here's the equivalent code in C:

```C
#include <stdio.h>
#include <stdbool.h>

void printLogic(bool A, bool B) {
    printf("A and B is %s\n", (A && B) ? "true" : "false");
    printf("A or B is %s\n", (A || B) ? "true" : "false");
    printf("Not A is %s\n", !A ? "true" : "false");
}

int main() {
    bool a = true;
    bool B = false;
    printLogic(A, B);
    return 0;
}
```

The C language does not have a native boolean type like Golang. However, it provides an `#include <stdbool.h>` to use `true` and `false`. Note that you can also print the logic by using ternary operation (`? :`) instead of `if-else`.
