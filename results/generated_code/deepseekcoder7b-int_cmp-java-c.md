The equivalent C code would be as follows:

```C
#include <stdio.h>

int main() {
    int nbr1, nbr2;
    
    printf("Enter the first integer:\n");
    scanf("%d", &nbr1);
  
    printf("Enter the second integer:\n");
    scanf("%d", &nbr2);
        
    if(nbr1 < nbr2) 
        printf("%d is less than %d\n", nbr1, nbr2);
    
    if(nbr1 > nbr2) 
        printf("%d is greater than %d\n", nbr1, nbr2);
        
    if(nbr1 == nbr2)  
        printf("%d is equal to %d\n", nbr1, nbr2);
    
    return 0;
}
```
This C program does the same thing as your Java code: it prompts for and reads in two integers from the user. It then checks if first integer is less than, greater than or equal to the second integer using `if` statements with comparison operators (<, >, ==). The result of each check is printed on a new line.

