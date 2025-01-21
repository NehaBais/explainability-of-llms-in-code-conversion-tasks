Sure, here's the equivalent code in C. This program will check for the existence of `input.txt` and `docs` both in the current working directory and at the filesystem root.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_dir(const char *path) {
    struct stat st;
    if (stat(path, &st) != 0) {
        return -1; // Unable to get file status
    }
    return S_ISDIR(st.st_mode);
}

int main() {
    const char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    int num_files = sizeof(files) / sizeof(files[0]);

    for (int i = 0; i < num_files; ++i) {
        if (access(files[i], F_OK) != -1) { // Check if the file exists
            if (is_dir(files[i]) == 0) {
                printf("%s is a directory\n", files[i]);
            } else if (is_dir(files[i]) == 1) {
                printf("%s is a file\n", files[i]);
            } else {
                printf("Failed to check %s\n", files[i]);
            }
        } else {
            printf("%s does not exist\n", files[i]);
        }
    }

    return 0;
}
```

### Explanation:

1. **is_dir Function**: This function checks if a given path is a directory.
   - It uses the `stat` system call to get information about the file or directory.
   - If `stat` returns an error, it returns `-1`.
   - Otherwise, it uses `S_ISDIR` to check if the mode of the file/directory indicates that it's a directory.

2. **main Function**:
   - It defines an array `files` with the paths to be checked.
   - It iterates over each path and checks if it exists using the `access` system call with `F_OK`.
   - If the file or directory exists, it calls `is_dir` to determine whether it's a file or a directory.
   - If the file does not exist, it prints that the file does not exist.

### Compilation and Execution:

To compile this program using GCC:

gcc -o check_files check_files.c
./check_files

This will print out whether each specified file or directory exists and what type it is (file or directory).
