The equivalent code in C would be:

```c
#include <stdio.h>

void print_logic(int a, int b)
{
    printf("%d\n", a && b);
    printf("%d\n", a || b);
    printf("%d\n", !a);
}
```

Here are some important notes for the conversion:
1. In C, boolean values aren't directly available as they are in C++. Instead, integers are used to represent booleans where 0 represents false and any non-zero value represents true.
2. You can't use `std::cout` or `std::endl`, you have to use `printf` instead.
3. The logical operators &&, ||, and ! work in the same way as they do in C++.
4. There's no need to convert a and b into "true" or "false", because they are already treated like that by printf.
5. Notice that we take integer parameters, not boolean ones, but we treat them in a logical manner within our function.
