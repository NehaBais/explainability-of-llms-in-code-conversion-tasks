 Sure, here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    if (a < b) {
        printf("a is less than b\n");
    } else if (a > b) {
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    }

    return 0;
}
```

This C code does the following:
1. Reads two integers from the user using `scanf`.
2. Compares the two integers and prints a message based on their relationship (less than, greater than, or equal to).
