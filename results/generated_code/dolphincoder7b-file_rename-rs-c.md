Below is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
    const char *err = "File move error";

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

The equivalent C code includes error handling to report issues when renaming files or directories, and it also uses "exit" instead of "expect". The latter is a Rust function but in this context, it does the same thing. In C code, you generally want to handle errors as close to the point where they occur as possible so that you can respond appropriately to them (e.g., by printing an error message and exiting).

Also note that C's "rename" is case-sensitive, whereas Rust's "fs::rename" is not. This could lead to issues if your filesystem is case-insensitive and you're trying to move a file or directory called "docs" to one called "myDocs".
