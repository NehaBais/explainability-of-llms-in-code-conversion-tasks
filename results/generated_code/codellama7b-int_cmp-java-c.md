```
#include <stdio.h>

int main()
{
    int nbr1, nbr2;
    printf("Enter two integers: ");
    scanf("%d %d", &nbr1, &nbr2);

    if (nbr1<nbr2)
        printf("%d is less than %d\n", nbr1, nbr2);
    else if (nbr1>nbr2)
        printf("%d is greater than %d\n", nbr1, nbr2);
    else
        printf("%d is equal to %d\n", nbr1, nbr2);

    return 0;
}
```
This code reads two integers from the user and then compares them using the if statements. It also uses the printf function to print the appropriate message based on the comparison.
