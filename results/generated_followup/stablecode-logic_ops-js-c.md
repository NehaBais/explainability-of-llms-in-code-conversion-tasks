Error explanation:
The errors generated are related to missing semicolons and extraneous parentheses before semicolons.

Fix explanation:
To fix these errors, we need to add semicolons at the end of each printf statement, and remove the extraneous parentheses before semicolons. 

Corrected code:
```c
#include <stdio.h>

void logic(int a, int b) 
{
    printf("a AND b: %d\n", (a && b)));
    printf("a OR b: %d\n", (a || b))));
    printf("NOT a: %d\n", (!a)));
}
```
