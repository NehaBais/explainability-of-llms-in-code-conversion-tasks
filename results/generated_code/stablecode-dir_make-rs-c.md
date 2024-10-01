Here is the equivalent C code using POSIX functions:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>

int main() {
    const char *dir_path = "./path/to/dir";
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP; // User and group permissions: Read, Write and Execute for user (you), and Read and Write for group.

    if (mkdir(dir_path, mode) != 0) {
        if (errno == EEXIST) {
            printf("Directory already exists.\n");
        } else {
            fprintf(stderr, "An error occurred: %s\n", strerror(errno)));
        }
    } else {
        printf("Successfully created the directory.\n");
    }

    return 0;
}
```

This C code uses POSIX functions (`mkdir`, `mode_t`, and `errno`) to create a directory (and any missing parents) with specified permissions. If the directory already exists, it prints "Directory already exists." Otherwise, it prints "Successfully created the directory."
