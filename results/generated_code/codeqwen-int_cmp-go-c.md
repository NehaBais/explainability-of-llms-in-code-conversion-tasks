Here is the equivalent C code for your Golang program:

```c
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter number: ");
    if (scanf("%d", &n1) != 1) {
        printf("Error reading input\n");
        return -1;
    }
    printf("Enter another number: ");
    if (scanf("%d", &n2) != 1) {
        printf("Error reading input\n");
        return -1;
    }

    if (n1 < n2) {
        printf("%d less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d equal to %d\n", n1, n2);
    } else {
        printf("%d greater than %d\n", n1, n2);
    }

    return 0;
}
```

This C program uses the `scanf()` function to read integer input from the user. After reading two integers, it checks if n1 is less than, equal to or greater than n2 using an `if-else` statement and prints out a message based on each case. 

In C, there's no built in way of handling errors with `scanf()`, so we need to check the return value to make sure that the input was successful. If it wasn't, we print an error message and exit the program with a non-zero return value.
