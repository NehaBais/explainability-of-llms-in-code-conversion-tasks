 The equivalent C code would be:

```c
#include <stdio.h>

int main() {
    int nbr1, nbr2;
    
    printf("Enter the first number: ");
    scanf("%d", &nbr1);
    
    printf("Enter the second number: ");
    scanf("%d", &nbr2);

    if(nbr1 < nbr2) {
        printf("%d is less than %d\n", nbr1, nbr2);
    } 

    if(nbr1 > nbr2) {
        printf("%d is greater than %d\n", nbr1, nbr2);
    } 
    
    if(nbr1 == nbr2) {
        printf("%d is equal to %d\n", nbr1, nbr2);
    }
    
    return 0;
}
```

In this C code:
- The program first asks for two numbers from the user. The `scanf` function in C is used to take input from the standard input (usually the keyboard).
- Then, it checks each condition separately - less than, greater than and equal to - using if statements. If the condition is true, it prints out a message stating which number is less than, more than or equal to the other number.
