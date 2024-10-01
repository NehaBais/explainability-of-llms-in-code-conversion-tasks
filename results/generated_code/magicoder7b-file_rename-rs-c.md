 The C language does not have built-in functions for file or directory operations like Rust, so we need to use system calls to do this. Here is a version of the code in C using the "rename" and "chdir" functions:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* err = "File move error";

    // Rename files here
    if (rename("input.txt", "output.txt") != 0) perror(err), exit(EXIT_FAILURE);
    if (rename("docs", "mydocs") != 0) perror(err), exit(EXIT_FAILURE);
    
    // Rename files in the root directory
    chdir("/");
    if (rename("input.txt", "output.txt") != 0) perror(err), exit(EXIT_FAILURE);
    if (rename("docs", "mydocs") != 0) perror(err), exit(EXIT_FAILURE);
    
    return 0;
}
```
Please note that the C language doesn't have a direct equivalent of Rust's `expect` function. In this example, we check if `rename` was successful using the returned value and call `exit(EXIT_FAILURE)` in case of an error. Also, keep in mind to compile your program with the `-std=c99` or newer flag because `chdir("/")` is available since C99.
