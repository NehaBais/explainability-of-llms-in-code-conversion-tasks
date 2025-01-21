Error: 
The error generated is related to missing semicolons in printf statements. 

Fix: 
To fix this error, add semicolons after each printf statement.

Corrected code:
```c
#include <stdio.h>

void print_logic(int a, int b) {

    printf("%d\n", (a && b)));
    printf("%d\n", (a || b))));
    printf("%d\n", (!a))));
}

int main() {
    print_logic(1, 1);
    print_logic(0, 1);
    return 0;
}
```
