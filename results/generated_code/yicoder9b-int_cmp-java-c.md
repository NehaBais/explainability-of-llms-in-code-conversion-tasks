Here's a conversion of the Java code into C: 
```c
#include <stdio.h>

int main() {
    int nbr1, nbr2;

    printf("Enter first integer:\n");
    scanf("%d", &nbr1);

    printf("Enter second integer:\n");
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
