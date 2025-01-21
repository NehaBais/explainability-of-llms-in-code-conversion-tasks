The equivalent C code for the given C++ function would look like this:
```c
#include <stdio.h>

void print_logic(bool a, bool b)
{
    printf("a and b is %d\n", (a && b));
    printf("a or b is %d\n", (a || b));
    printf("not a is %d\n", (!a));
}
```
In this C code, we use the `printf` function to print the result of the logical operators. The `&&`, `||` and `!` operators are used in the same way as in the original C++ code. The `%d` format specifier is used to print integers (which represent the boolean results). The `std::boolalpha` flag is not needed in C because it uses `printf`'s built-in conversion flags for bools.
