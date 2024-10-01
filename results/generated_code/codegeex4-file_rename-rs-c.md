In C, the rename function is part of the POSIX standard. Here is a translation of your Rust code to equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *err = "File move error";
    if (rename("input.txt", "output.txt") != 0) {
        perror(err);
        exit(EXIT_FAILURE);
    }

    if (rename("docs", "mydocs") != 0) {
        perror(err);
        exit(EXIT_FAILURE);
    }

    if (rename("/input.txt", "/output.txt") != 0) {
        perror(err);
        exit(EXIT_FAILURE);
    }

    if (rename("/docs", "/mydocs") != 0) {
        perror(err);
        exit(EXIT_FAILURE);
    }
}
```

In this code, the `perror` function is used to print a descriptive error message based on errno. The program then exits with a failure status using the `exit(EXIT_FAILURE)` call.

Please note that in C, there is no built-in way to check if the rename operation was successful without accessing the error variable (errno) and checking its value. This difference comes from how Rust's Result type works – it provides a way to handle errors at compile time, whereas in C you need to manually check for errors after each operation.
