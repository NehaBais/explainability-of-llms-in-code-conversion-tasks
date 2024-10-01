Here is the equivalent C code for your Java code:

```c
#include <stdio.h>

void logic(int a, int b) {
    printf("a AND b: %d\n", (a != 0) && (b != 0)));
    printf("a OR b: %d\n", (a != 0) || (b != 0))));
    printf("NOT a: %d\n", !(a != 0)));
}
```
This function `logic` takes two integer inputs `a` and `b`. The print statements are equivalent to the Java version. 

Please note that in C, boolean values are actually represented internally as integers (0 for false, non-zero for true). So I've used integers (`int`) instead of booleans (`boolean`)) throughout this conversion.
