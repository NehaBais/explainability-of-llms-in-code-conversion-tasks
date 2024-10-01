The C++ code provided uses the string class from the Standard Library, while C does not have a built-in dynamic string type. However, we can create a string with an array of characters and use standard functions to manipulate it.

Here is how you can achieve the same functionality in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    printf("%s literal\n", s);
    
    char s2[20];
    strcpy(s2, s); // copies 's' into 's2'
    strcat(s2, " literal"); // concatenates " literal" to 's2'
    
    printf("%s\n", s2);

    return 0;
}
```

This code does the following:
- `char s[] = "hello";` creates a character array (i.e., a string) with the value "hello".
- `printf("%s literal\n", s);` prints out "hello literal" by concatenating it directly in the printf call.
- `char s2[20];` creates another character array of length 20. The exact size depends on your needs - you need enough space for both strings and one extra character for the null terminator.
- `strcpy(s2, s);` copies the contents of "s" into "s2".
- `strcat(s2, " literal");` appends " literal" to the end of "s2".
- `printf("%s\n", s2);` prints out the final concatenated string.
