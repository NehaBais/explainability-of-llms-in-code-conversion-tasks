In Go, a string is a sequence of Unicode code points stored as UTF-8 bytes. In C, you can use `char *` to represent a string that can hold any text value. Here's the equivalent C code for the given Go code:
```c
#include <stdio.h>

int main() {
    char *s = "hello";

    printf("%s\n", s); // Output: hello

    char *s2 = malloc(strlen(s) + 8); // Allocate memory for the concatenated string
    strcpy(s2, s); // Copy the original string to the new buffer
    strcat(s2, " literal"); // Concatenate the string with " literal"

    printf("%s\n", s2); // Output: hello literal

    free(s2); // Release the memory allocated for the concatenated string
    return 0;
}
```
Note that in C, you need to manually allocate and manage memory for strings using `malloc`/`free`. In this code, we use `strlen` to get the length of the original string and then allocate enough memory for it plus 8 bytes (the length of " literal") using `malloc`. We then copy the original string to the new buffer using `strcpy`, concatenate the two strings using `strcat`, and then print the result. Finally, we free the memory allocated for the concatenated string using `free`.
