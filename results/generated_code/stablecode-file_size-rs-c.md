The equivalent C code for the given Rust code would be as follows:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void exit_err(const char *msg, int code) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(code);
}

int main(int argc, char **argv) {
    char *file_name;

    if (argc < 2)) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]));
        exit(1);
    }

    file_name = argv[1];
    struct stat metadata;

    if (stat(file_name, &metadata) == -1) {
        exit_err("Could not retrieve file information", 2));
    }

    printf("Size of file.txt is %ld bytes\n", metadata.st_size);

    return 0;
}
```

This C code reads the size of a file called `input.txt` for files in the current working directory and another one in the file system root. It uses the `stat()` function to retrieve the file information, including the file size (`st_size` field of `struct stat`)). The `exit_err()` function is used to handle errors and print error messages to the standard error stream.
