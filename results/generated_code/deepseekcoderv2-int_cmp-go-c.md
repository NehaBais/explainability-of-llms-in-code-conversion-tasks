 Here's the equivalent code in C that performs the same task as the provided Go program:

```c
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        printf("%d less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d equal to %d\n", n1, n2);
    } else if (n1 > n2) {
        printf("%d greater than %d\n", n1, n2);
    }

    return 0;
}
```

This C code reads two integers from the user and then uses an `if-else` structure to compare them. The conditions are checked in sequence: first less than (`<`), then equal to (`==`), and finally greater than (`>`). Each condition is tested separately, ensuring that all three comparison operators are used.
