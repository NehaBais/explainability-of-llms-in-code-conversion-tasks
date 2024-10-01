Here's your converted C code:

```c
#include <stdio.h>

void printLogic(int a, int b) {
    printf("a and b is %d\n", a && b);
    printf("a or b is %d\n", a || b);
    printf("not a is %d\n", !a);
}
```

I've assumed the `bool` type in Golang corresponds to the `int` type in C, because in the standard C library there's no corresponding boolean type defined. If this assumption isn't correct, you should adjust the code accordingly.
