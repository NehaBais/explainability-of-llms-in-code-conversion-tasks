 Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <libgen.h> // For dirname and basename

void exit_err(const char *msg, int code) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(code);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        exit_err("No file name supplied", 1);
    }

    char *file_name = argv[1];
    struct stat st;

    if (stat(file_name, &st) == -1) {
        exit_err(strerror(errno), 2);
    }

    printf("Size of %s is %zu bytes\n", file_name, st.st_size);
    return 0;
}
```

This C code does the following:
1. Checks if a file name is provided as an argument. If not, it prints an error message and exits with code 1.
2. Uses `stat` to get the metadata of the specified file. If the operation fails, it prints the corresponding error message (using `strerror(errno)`) and exits with code 2.
3. Prints the size of the file in bytes.

Note: The C standard library does not have a direct equivalent to Rust's `env::args()` or `fs::metadata()`. However, we handle command line arguments using `argc` and `argv`, and use the POSIX `stat` function to get file metadata.
