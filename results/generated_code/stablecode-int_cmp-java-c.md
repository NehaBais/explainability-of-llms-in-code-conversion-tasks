Here's the equivalent C code:

```c
#include <stdio.h>

int main() {
    int nbr1, nbr2;

    printf("Enter first integer:\n");
    scanf("%d", &nbr1);
  
    printf("Enter second integer:\n");
    scanf("%d", &nbr2);

    if(nbr1<nbr2) {
        printf("%d is less than %d\n", nbr1, nbr2);
    }

    if(nbr1>nbr2) {
        printf("%d is greater than %d\n", nbr1, nbr2);
    }

    if(nbr1==nbr2) {
        printf("%d is equal to %d\n", nbr1, nbr2));
    }

    return 0;
}
```
This code does exactly what the Java version does: it reads two integers from the user and then prints out a message stating whether or not the first integer fits into any of the three categories (less than, equal to, greater than) specified in the problem statement.
