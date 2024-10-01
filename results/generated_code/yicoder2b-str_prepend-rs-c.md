The equivalent C code would be:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s = "World"; 
    char *res = malloc(15*sizeof(char)); // allocate memory for the string "Hello " and s
    strcpy(res, "Hello "); // copy the string "Hello " to res
    strcat(res+strlen(res), s); // append s to res
  
    printf("%s\n", res); // print the result
    free(res);
    return 0;
}
```
This C program does basically the same thing as your Rust program. It creates a string variable s and assigns it a value of "World". It then preprend another string literal "Hello " to this variable and stores it back in the memory space for s. Finally, it prints out the result which is "Hello World". The reason we allocated 15 bytes extra for res (and not for s) is because `strcat` might need to extend the size of res dynamically as it appends to it.
