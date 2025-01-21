 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate initial size for the string (adjust as needed)
    char *s = malloc(100 * sizeof(char));
    if (!s) {
        perror("Failed to allocate memory");
        return EXIT_FAILURE;
    }
    s[0] = '\0'; // Initialize the string as empty

    // Append "foo" to the string
    strcat(s, "foo");

    // Append "bar" to the string
    strcat(s, "bar");

    // Print the contents of the variable after append operation
    printf("%s\n", s);

    // Free allocated memory
    free(s);

    return EXIT_SUCCESS;
}
```

In this C code:
1. We allocate a string with an initial size (you can adjust it as needed).
2. We initialize the string to be empty.
3. We use `strcat` to append "foo" and then "bar" to the string.
4. Finally, we print the contents of the variable after the append operation and free the allocated memory.
