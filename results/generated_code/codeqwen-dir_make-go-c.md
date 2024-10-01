Below is a simple C code that creates a directory and all its parents using the `mkdir()` function in the POSIX compliant library.

```c
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int create_directory(char* path, mode_t mode) {
    if (mkdir(path, mode) == -1) {
        if (errno != EEXIST) {
            perror("Error creating directory");
            return 1;
        }
    }
    return 0;
}

int main() {
    char* path = "./path/to/dir";
    mode_t mode = S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP;

    if (create_directory(path, mode)) {
        return 1; // Error creating directory
    } else {
        printf("Directory created successfully.\n");
        return 0;
    }
}
```

In this code, `mkdir()` is used to create the directory. The third argument `mode` specifies the permissions of the new directory (owner has read/write/execute permission). If an error occurs during the creation, it will be caught and a message will be printed out using `perror()`, and the function will return 1. If the directory is successfully created, the function will return 0. The path to the directory is passed as the first argument of the `create_directory()` function.

In the `main()` function, we call `create_directory()` with the specified path and permissions, then print a success message if the function returns 0 or an error message otherwise.
