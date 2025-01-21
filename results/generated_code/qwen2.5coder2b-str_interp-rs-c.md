Sure, I can help you convert the given Rust code to C. C does not have built-in support for string interpolation like Rust, so we'll need to use other methods to achieve similar functionality.

Here's how you can implement this in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using printf with format specifiers for string and variable interpolation
    printf("Mary had a %s lamb.\n", "little");
    
    // Using snprintf to interpolate values into a buffer
    char name[50];
    char adj[50];
    snprintf(name, sizeof(name), "Mary");
    snprintf(adj, sizeof(adj), "little");
    printf("%s had a %s lamb.\n", name, adj);
    
    return 0;
}
```

In this C code:
1. `printf` is used for basic string interpolation by specifying format specifiers.
2. `snprintf` is used to safely concatenate values into a buffer, which allows you to specify the maximum number of characters to write and ensure that the output does not exceed the specified size.

This approach provides similar functionality to Rust's string interpolation and named arguments, allowing you to replace placeholders with actual values in your strings.
