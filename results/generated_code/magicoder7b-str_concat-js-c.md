 In C language, you can use `printf` function to print the variables and `strcpy` function to assign values to a string. Here's how you might write this code in C:

```c
#include <stdio.h>
#define SIZE 50 // assuming that it's enough for your strings

int main() {
    char s[SIZE] = "hello";
    char concat[SIZE];

    strcpy(concat, s);
    strcat(concat, " there!");

    printf("Original string: %s\n", s);
    printf("Concatenated string: %s\n", concat);

    return 0;
}
```
In the above C code, `strcpy` function copies the value of the first string into the second one. `strcat` function then adds another string to the end of the copied string (without adding any extra spaces). Please adjust the size of array in accordance with your needs as I assumed 50 characters would suffice.
