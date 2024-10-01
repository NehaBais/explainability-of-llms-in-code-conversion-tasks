C does not support string manipulation as elegantly as C++. Therefore, strings in C are typically manipulated using character arrays and functions such as strcpy(), strcat(), etc. However, the idiomatic way of appending strings in C is by using dynamic memory allocation along with the strcpy() and strcat() methods.

Here's how your code would look like in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *greeting = (char *)malloc(6 * sizeof(char));
    strcpy(greeting, "Hello");
    
    char *appendStr = ", world!";
    greeting = realloc(greeting, (strlen(greeting) + strlen(appendStr) + 1) * sizeof(char));
    strcat(greeting, appendStr);
   
    printf("%s\n", greeting);

    free(greeting); 
    return 0;
}
```

This code uses the malloc function to allocate memory for the string, then strcpy() and strcat() functions to copy strings to this allocated memory. When you're done with the string, remember to free up the memory by calling free().
