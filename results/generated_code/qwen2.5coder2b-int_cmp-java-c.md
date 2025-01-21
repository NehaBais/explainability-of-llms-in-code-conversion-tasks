Here's the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb1, nb2;

    printf("Enter two integers: ");
    if(scanf("%d %d", &nb1, &nb2) != 2) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    if(nb1 < nb2)
        printf("%d is less than %d\n", nb1, nb2);
    else if(nb1 > nb2)
        printf("%d is greater than %d\n", nb1, nb2);
    else
        printf("%d is equal to %d\n", nb1, nb2);

    return EXIT_SUCCESS;
}
```

This code does essentially the same thing as your Java program. It reads two integers from user input, compares them and prints a message based on which condition is met.

The only difference is that we are using C standard libraries (`<stdio.h>` and `<stdlib.h>`) instead of Java's `BufferedReader` and `InputStreamReader`. 

Also, in C, we don't need to explicitly handle an exception like you did with `IOException` from Java. Instead, we use the built-in function `scanf()` which returns the number of successfully matched elements, so if it doesn't match 2 elements, it means the user input was not valid, and we print an error message.

If you run this program, it will first ask for two integers from the user, then it will display a message based on the result of the comparison.
