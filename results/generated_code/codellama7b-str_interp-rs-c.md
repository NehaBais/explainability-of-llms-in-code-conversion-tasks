To convert the Rust code to C, we need to perform the following steps:

1. Replace the `println!` macros with C-style output statements.
2. Use the `%s` format specifier for string interpolation in C.
3. Modify the function arguments and return types as needed.

Here's the converted code in C:
```
#include <stdio.h>

void main() {
    printf("Mary had a %s lamb\n", "little");
    // You can specify order
    printf("%s had a %s lamb\n", "Mary", "little");
    // Or named arguments if you prefer
    printf("%s had a %s lamb\n", "name", "adj", "Mary", "little");
}
```
Note that C does not support string interpolation like Rust, so we need to use the `printf` function with `%s` format specifiers to print the interpolated strings. Also, we have modified the return type of the `main` function to `void` in C, as it is the standard for C programs.
