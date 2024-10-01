In C, the equivalent of Rust's `std::fs::create_dir_all()` function to create a directory and all its parent directories is using the `mkdir()` system call. Here's an example:

```c
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

void create_directory(const char *path) {
    int ret = mkdir(path, 0777); // 0777 is the default permissions for a directory
    if (ret == -1 && errno != EEXIST) {
        fprintf(stderr, "Failed to create directory '%s': %s\n", path, strerror(errno));
        exit(EXIT_FAILURE);
    }
}

int main() {
    create_directory("./path/to/dir");
    return 0;
}
```

This C program uses the `mkdir()` function with the desired permissions (0777 in this case). It checks whether the directory was successfully created or if it already exists. If an error occurs and is not due to the directory already existing, the program will print an error message and exit with a failure status.
