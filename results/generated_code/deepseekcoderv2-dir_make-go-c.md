 Certainly! Below is a C implementation that mimics the behavior of `os.MkdirAll` from Go, which creates a directory and any necessary parent directories, but only if they do not already exist. This implementation uses standard C libraries and should work on POSIX-compliant systems like Linux or macOS.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdir_p(const char *path) {
    // Create a mutable copy of the path to work with
    char *mutablePath = strdup(path);
    if (!mutablePath) {
        perror("strdup");
        return -1;
    }

    // Start from the root and iterate through each component in the path
    for (char *p = mutablePath + 1; *p != '\0'; ++p) {
        if (*p == '/') {
            // Null-terminate the current segment
            *p = '\0';

            // Create the directory if it does not exist
            if (access(mutablePath, F_OK) != 0) {
                if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
                    perror("mkdir");
                    free(mutablePath);
                    return -1;
                }
            }

            // Restore the null-terminator for the next segment
            *p = '/';
        }
    }

    // Finally, create the last segment if it does not exist
    if (access(mutablePath, F_OK) != 0) {
        if (mkdir(mutablePath, 0770) != 0 && errno != EEXIST) {
            perror("mkdir");
            free(mutablePath);
            return -1;
        }
    }

    // Clean up memory
    free(mutablePath);
    return 0;
}

int main() {
    if (mkdir_p("/tmp/some/path/to/dir") != 0) {
        fprintf(stderr, "Failed to create directory\n");
        return EXIT_FAILURE;
    } else {
        printf("Directory created successfully\n");
        return EXIT_SUCCESS;
    }
}
```

### Explanation:
1. **strdup**: We use `strdup` to duplicate the input path string so we can modify it safely.
2. **Loop through the path components**: We iterate over each character in the path, treating `/` as a delimiter to create separate directories.
3. **Check and Create Directory**: For each segment (between `/`), we check if it exists using `access(path, F_OK)`. If it doesn't exist, we attempt to create it with `mkdir`. We handle `EEXIST` separately to avoid errors when the directory already exists.
4. **Restore Path Segments**: After creating each segment (if necessary), we restore the `/` character for the next iteration.
5. **Final Creation**: After processing all segments, we check and create the final segment if it doesn't exist.
6. **Memory Management**: We use `free` to release the memory allocated by `strdup`.
7. **Error Handling**: Proper error handling is included for both `strdup`, `mkdir`, and `access` functions.

This code should work on POSIX-like systems (Linux, macOS, etc.) and can be compiled with a C compiler like GCC:

gcc -o mkdir_p mkdir_p.c
./mkdir_p

