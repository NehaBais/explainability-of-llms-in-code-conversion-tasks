 In C, there's no built-in boolean type as in the case of C++. So, the logic of this function in C should be implemented using int data types where 0 stands for false and any non-zero value stands for true. Here is a conversion of your given C++ code to C:

```c
#include <stdio.h>

void print_logic(int a, int b)
{
    printf("a and b is %d\n", (a && b));
    printf("a or b is %d\n", (a || b));
    printf("not a is %d\n", !a);
}
```

This code will print the results of "and" ("&&") and "or" ("||") operations on 'a' and 'b', as well as the result of "not" ("!"). Keep in mind that C doesn't have boolean types. This function expects integers instead (0 for false, 1 for true).
