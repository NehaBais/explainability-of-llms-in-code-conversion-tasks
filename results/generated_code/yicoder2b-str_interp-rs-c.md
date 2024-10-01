The equivalent C code for the given Rust function would be: 
```c
#include <stdio.h>

void main() {
    char *name = "Mary";
    char *adj = "little";
    printf("%s had a %s lamb\n", name, adj);
}
```
In the C version:
- The `#include <stdio.h>` is necessary for the `printf` function which is used to output formatted strings in the same way as Rust's `println!()` macro. 
- The `main` function is the entry point of a C program, just like the Rust `fn main` function.
- `char *name = "Mary";` defines a pointer to a string which will hold the name variable.
- `char *adj = "little";` same as above for an object with an attribute (interpolation parameter) named 'adj'. 
- `printf("%s had a %s lamb\n", name, adj);` uses the printf function to output the formatted string that interpolates variables into a string literal. "%s" is a placeholder for a C string and "%s" is a placeholder for another C string. The actual values ('Mary' and 'little') are passed as arguments to these placeholders.
- `\n` represents a newline character, which ends the current line and starts a new one in the terminal. This is similar to how println!() ends each statement with a newline.
