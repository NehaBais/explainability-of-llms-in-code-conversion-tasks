 In C, you can use the logical operators `&&`, `||`, and `!` to perform these same operations as in Java:

```c
#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", (a && b));
  printf("a OR b : %d\n", (a || b));
  printf("NOT a : %d\n", !a);
}
```
The `int` type is used for the function arguments because in C, boolean values are represented as integers where `0` represents `false` and any non-zero value represents `true`.
