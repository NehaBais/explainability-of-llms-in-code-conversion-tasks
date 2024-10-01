```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *string = malloc(10 * sizeof(char));
    strcpy(string, "def");
    strcat(string, "abc");

    printf("%s\n", string);

    free(string);
    
    return 0;
}
```
This C code does the same as your Java code. It creates a dynamic array of characters (equivalent to String in Java), copies the initial value into it using strcpy function, and then concatenates another string ("abc") to it using strcat function. The result is printed out with printf function. At the end, the allocated memory is freed with free function to prevent memory leak. Please note that you should include <stdlib.h> for malloc and free functions.
