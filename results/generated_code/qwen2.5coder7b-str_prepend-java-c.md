In C, strings are represented as arrays of characters and cannot be changed like in Java. However, you can simulate this behavior using functions.

Here's how you could rewrite the code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate(char** destination, const char* source) {
    size_t dest_len = strlen(*destination);
    size_t source_len = strlen(source);

    *destination = (char*)realloc(*destination, dest_len + source_len + 1); // +1 for '\0'
    
    if (*destination == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        exit(1);
    }

    strcat(*destination, source); // Concatenate
}

int main() {
    char* string = "def";

    concatenate(&string, "abc");

    printf("%s\n", string);

    free(string); // Don't forget to deallocate memory when done

    return 0;
}
```

In this code:
1. `concatenate()` function is used to append the source string to the destination string.
2. It first calculates the lengths of both strings, then reallocates memory for the new string (old length + source length + 1 for '\0' terminator).
3. If reallocation fails, it prints an error message and exits.
4. Then it uses `strcat()` function to concatenate.
5. In `main()`, `string` is initialized with "def", then it's passed to `concatenate()` function to prepend "abc" to it.
6. Finally, the result is printed and memory is deallocated using free().
