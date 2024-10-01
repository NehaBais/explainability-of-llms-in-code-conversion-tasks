 In C language, you can't directly print the boolean expressions like we do in JavaScript. Instead of that we will return these values to be printed from the function as it is more common in C programming style. Here is the equivalent code for your logic function:

```c
#include <stdio.h>

void logic(int a, int b) {
    printf("a AND b: %d\n", a && b);
    printf("a OR b: %d\n", a || b);
    printf("NOT a: %d\n", !a);
}
```
In this C code, `&&` and `||` are equivalent to JavaScript's `and` and `or`. The `!` is equivalent to the JavaScript `not`. These operators return 0 for false (i.e., they evaluate to false) and non-zero values (1 for true) when applied on boolean type integer expressions, just like in your function.
