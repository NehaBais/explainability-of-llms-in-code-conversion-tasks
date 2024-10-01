Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s = "hello";
    printf("%s\n", s);

    // Allocate memory for the new string
    char *s1 = malloc(strlen(s) + strlen(" world") + 1);
    if (s1 == NULL) {
        exit(-1); // Exit if there is no enough space to allocate memory
    }

    // Concatenate the strings
    strcpy(s1, s);
    strcat(s1, " world");

    printf("%s\n", s1);

    free(s1); // Free allocated memory
    return 0;
}
```

Note: In C we do not have the convenience of string manipulation like Rust. We need to manage our own memory and use the standard library functions to manipulate strings. So, here we are allocating dynamic memory for the new string with `malloc()` and then using `strcpy()` and `strcat()` to copy and concatenate the strings respectively. Finally, don't forget to free the allocated memory with `free()`.
