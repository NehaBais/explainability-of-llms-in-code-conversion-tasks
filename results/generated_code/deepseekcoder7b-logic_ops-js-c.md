In C, you can use the `printf` function to print output to console. Here is how you would do it in C:

```c
#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}
```

In the above C code, `%d` is used to print integer variables. It will print `1` for true and `0` for false in boolean context of C language like JavaScript's Boolean values. Please note that this function expects a as a boolean by treating 0 as false and non-zero value as true. If you want the function to work with booleans themselves (true:1,false:0), it can be used in similar way.

