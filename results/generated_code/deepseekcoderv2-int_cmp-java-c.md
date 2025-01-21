 Sure, here's the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int nbr1, nbr2;

    printf("Enter the first integer: ");
    scanf("%d", &nbr1);
    printf("Enter the second integer: ");
    scanf("%d", &nbr2);

    if (nbr1 < nbr2) {
        printf("%d is less than %d\n", nbr1, nbr2);
    }

    if (nbr1 > nbr2) {
        printf("%d is greater than %d\n", nbr1, nbr2);
    }

    if (nbr1 == nbr2) {
        printf("%d is equal to %d\n", nbr1, nbr2);
    }

    return 0;
}
```

This C code does the following:
1. Reads two integers from the user.
2. Compares them using if statements and prints a message for each comparison (less than, greater than, equal to).
