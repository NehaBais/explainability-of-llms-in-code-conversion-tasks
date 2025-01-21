Certainly! Below is the equivalent C code that achieves the same functionality as your C++ code. This implementation uses `mkdir` and `path` manipulation from the standard C library.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int create_directory(const char *path) {
    if (path == NULL || strlen(path) == 0) {
        fprintf(stderr, "Invalid path\n");
        return -1;
    }

    // Try to create the directory
    if (mkdir(path, 0755) == 0) {
        return 0; // Directory created successfully
    }

    // Check if the error is due to a non-existent parent directory
    if (errno != ENOENT) {
        fprintf(stderr, "Failed to create directory: %s\n", path);
        return -1;
    }

    // Create parent directories recursively
    char *p = strdup(path);
    while ((p = strchr(p + 1, '/')) != NULL) {
        *p = '\0';
        if (mkdir(path, 0755) != 0 && errno != EEXIST) {
            fprintf(stderr, "Failed to create parent directory: %s\n", path);
            free(p);
            return -1;
        }
    }

    // Finally, try to create the original directory again
    if (mkdir(path, 0755) != 0) {
        fprintf(stderr, "Failed to create final directory: %s\n", path);
        free(p);
        return -1;
    }

    free(p);
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: mkdir <path>\n");
        return -1;
    }

    const char *pathToCreate = argv[1];
    if (create_directory(pathToCreate) == 0) {
        printf("Directory created successfully: %s\n", pathToCreate);
    } else {
        fprintf(stderr, "Failed to create directory: %s\n", pathToCreate);
        return -1;
    }

    return 0;
}
```

### Explanation:
1. **Function `create_directory`**:
   - This function takes a path as an argument and attempts to create the directory.
   - If the directory creation fails due to a non-existent parent directory, it recursively creates each parent directory until all parents are created.
   - Finally, it tries to create the original directory again.

2. **Main Function**:
   - The main function checks if the number of arguments is correct and then calls `create_directory` with the provided path.
   - It prints a success message if the directory is created successfully or an error message if it fails.

### Notes:
- This C code should work on Unix-like systems (Linux, macOS) as well as Windows with some modifications.
- On Windows, you would need to use the `CreateDirectory` function from the Windows API instead of `mkdir`, and handle file path separators differently.
