The equivalent C code for the given JavaScript function is as follows.
```c
#include <stdio.h>

void logic(int a, int b) {
    // AND operator
    printf("a AND b: %d\n", (a && b));

    // OR operator
    printf("a OR b: %d\n", (a || b));

    // NOT operator
    printf("NOT a: %d\n", !a);
}
```
Please note that in C and many other programming languages, boolean values are represented as integers with 0 for false and 1 for true. Hence when you use the logical operators "&&", "||", or the NOT operator on a boolean value, it will give you the correct output as if the inputs were originally logical (true/false). If we change 'a' and 'b' to true/false, the results from calling the function would be different than in JavaScript.
