Here's how you can convert the given Java code into C. Note that in C, we use `scanf()` function for getting input from the user and `printf()` function for displaying output.

```c
#include <stdio.h>

int main() {
    int nbr1, nbr2;

    printf("Enter the first integer: ");
    scanf("%d", &nbr1);

    printf("Enter the second integer: ");
    scanf("%d", &nbr2);

    if(nbr1<nbr2)
        printf("%d is less than %d\n", nbr1, nbr2);

    if(nbr1>nbr2)
        printf("%d is greater than %d\n", nbr1, nbr2);

    if(nbr1==nbr2)
        printf("%d is equal to %d\n", nbr1, nbr2);

    return 0;
}
```
This C program will do exactly the same thing as your Java code. It prompts the user to enter two integers and then compares these values using `if` conditions.
