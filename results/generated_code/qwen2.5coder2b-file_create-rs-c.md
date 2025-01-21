Sure, here is the equivalent C code for your Rust program. This assumes you have a Unix-like operating system such as Linux or macOS because Windows doesn't support creating empty directories.

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/statvfs.h>
#include <string.h>

#define FILE_NAME "output.txt"
#define DIR_NAME "docs"

int main() {
    if (create(".", 0) != 0 || create("/", 0) != 0) {
        fprintf(stderr, "Error: Failed to create output and docs directories.\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int create(const char *root, int size) {
    char fpath[512];
    char dpath[512];

    snprintf(fpath, sizeof(fpath), "%s/%s", root, FILE_NAME);
    snprintf(dpath, sizeof(dpath), "%s/%s", root, DIR_NAME);

    if (access(root, R_OK) == 0 && access(root, W_OK) == 0) {
        return 0;
    }

    if (mkdir(fpath, 0644) != 0 && mkdir(dpath, 0755) != 0) {
        fprintf(stderr, "Error: Failed to create directories.\n");
        return -1;
    }
    return 0;
}
```

This C program does the same thing as the Rust program. It attempts to create the "output.txt" and "docs" files and directories in the specified root directory and prints an error message if it fails. The `create` function first checks if the specified directory exists and is writable before attempting to create the file or directory, printing an error message if necessary.
