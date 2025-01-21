Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = (char *)malloc(4); // Allocate memory for "foo"
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(s, "foo");

    s = realloc(s, strlen(s) + strlen("bar") + 1); // Reallocate memory to accommodate "bar"
    if (s == NULL) {
        printf("Memory reallocation failed.\n");
        free(s);
        return 1;
    }
    strcat(s, "bar"); // Concatenate string

    printf("%s\n", s);

    free(s); // Don't forget to free the allocated memory
    return 0;
}
```

In this C code, we first allocate space for the string `"foo"` and then reallocate that space (making sure to increase the size appropriately to accommodate the additional characters) before appending the string `"bar"`. Finally, we print out our concatenated result.
