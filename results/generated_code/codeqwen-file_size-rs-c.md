C does not have a direct equivalent of Rust's environment and file system handling libraries. However, you can use the `stat` function provided by POSIX-compliant systems to get the size of a file in C. Here is an example:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

void exit_err(const char *msg, int code) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(code);
}

int main() {
    struct stat st;
    if (stat("input.txt", &st) == -1) {
        perror("Could not get metadata");
        exit_err("Failed to get size of file.txt", 2);
    } else if (stat("/input.txt", &st) == -1 && errno == ENOENT) {
        // File does not exist in root directory, try with absolute path
        char absolute_path[PATH_MAX];
        if (!realpath("/input.txt", absolute_path)) {
            perror("Failed to get absolute path of file");
            exit_err("Failed to get size of file.txt", 2);
        } else {
            if (stat(absolute_path, &st) == -1) {
                perror("Could not get metadata for absolute path");
                exit_err("Failed to get size of file.txt", 2);
            }
        }
    }

    printf("Size of file.txt is %ld bytes\n", (long) st.st_size);
    return 0;
}
```
This C program first attempts to get the metadata for a file called "input.txt" in the current directory, and then checks if it exists in the root directory with a relative path of "/input.txt". If it doesn't exist there either (which would be indicated by errno set to ENOENT), it tries to resolve the absolute path using realpath(). 

Note: This C code will work only on POSIX-compliant systems, such as Unix or macOS. It may not work correctly on Windows.
