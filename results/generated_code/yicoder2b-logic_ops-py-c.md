Sure, here is the equivalent C code for the given Python function:

```c
#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b){
    printf("a and b: %s\n", (a && b) ? "true" : "false"); // In C, true is represented as 1 and false with 0
    printf("a or b: %s\n", (a || b) ? "true" : "false");
    printf("not a: %s\n", (!a) ? "true" : "false"); // In C, the not operator is ~ in python
}
```

Note that we use `stdbool.h` for the boolean datatype and `stdio.h` for printf function. This C code works the same as your Python function which compares two boolean values and print out the results of "and", "or" and "not" operation on them.
