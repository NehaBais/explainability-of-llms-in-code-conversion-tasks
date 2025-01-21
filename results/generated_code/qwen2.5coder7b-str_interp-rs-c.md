In C, string interpolation is not as straightforward as in Rust because C doesn't have built-in support for it. However, we can simulate this using the `sprintf()` function or by concatenating strings manually.

Here's how you could convert your Rust code to C using `sprintf()`:

```c
#include <stdio.h>

int main() {
    char result[50];  // The size of the buffer should be enough to hold the output string

    sprintf(result, "Mary had a %s lamb", "little");
    printf("%s\n", result);

    sprintf(result, "%s had a %s lamb", "little", "Mary");
    printf("%s\n", result);

    sprintf(result, "%s had a %s lamb", "little", "Mary");  // Named arguments aren't directly supported
    printf("%s\n", result);

    return 0;
}
```

In C, you'd also need to handle memory allocation for larger strings. Here is an example of how to allocate memory dynamically:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *result = malloc(50);  // Allocate memory for the result string

    sprintf(result, "Mary had a %s lamb", "little");
    printf("%s\n", result);

    free(result);  // Free the allocated memory when done with it
    return 0;
}

Remember to always check that `malloc` succeeds before using the allocated memory. If it fails, you should handle the error appropriately (e.g., by exiting the program or returning an error code).

Also note that unlike Rust's string interpolation which can be used at compile time and doesn't allocate additional memory unless necessary, C requires explicit memory management for strings.
