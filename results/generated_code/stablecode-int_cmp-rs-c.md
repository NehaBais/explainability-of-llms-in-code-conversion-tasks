Here's the equivalent C code:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer:\n");
    scanf("%d", &a);

    printf("Enter second integer:\n");
    scanf("%d", &b);

    if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else if (a == b) {
        printf("%d equals %d\n", a, b);
    } else if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }

    return 0;
}
```

This C code performs the same task as the Rust code provided. It takes two integers from the user, compares them, and prints an appropriate message based on the comparison result. The condition for each case is separated to ensure all three comparison operators are used in the code.
