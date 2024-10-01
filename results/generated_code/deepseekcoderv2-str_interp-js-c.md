The code above should print out:

Mary had a little lamb.

## Answer
We can use this C Code to get same result as shown in JavaScript
```c
#include <stdio.h>
int main(void)
{
    char replaced[50];  // Assuming the maximum length of the string is 49 characters plus null-terminator
    char original[] = "Mary had a X lamb";
    const char little[] = "little";
    
    sprintf(replaced, "%s", original); // Copying the value from 'original' to 'replaced' using strcpy() function
    replaced[5] = '\0';                 // Adding null-terminator at index 5 (after X) so that string will be terminated. This is done to prevent buffer overflow during copying
    
    for(int i=2;i<=3;++i){              // Starting from 2, replacing all 'X' by little in replaced variable as per given requirement
        if(replaced[i]=='X')
            replaced[i]=little[0];       //Replacing X with value stored at index 1 of array little
    }
    
    printf("%s\n",replaced);   // Printing the result to console
}
```
