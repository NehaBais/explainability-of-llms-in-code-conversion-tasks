The equivalent code in C would look like this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n1, n2;

    printf("Enter number: ");
    if (scanf("%d", &n1) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    printf("Enter number: ");
    if (scanf("%d", &n2) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    if (n1 < n2) {
        printf("%d less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d equal to %d\n", n1, n2);
    } else {
        printf("%d greater than %d\n", n1, n2);
    }

    return EXIT_SUCCESS;
}
```
Please note that this program has the same functionality as Golang code. It reads two integers from the user and then prints the appropriate message based on the comparison between them. The function `scanf` is used to read input from the standard input (keyboard) and store it in the variables `n1` and `n2`. If the input cannot be converted into an integer, the program will print "Invalid input" and return `EXIT_FAILURE`.
