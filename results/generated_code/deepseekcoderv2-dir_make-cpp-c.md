 To convert the given C++ code to C, we need to use a different set of libraries that are available in C but not in C++. The `mkdir` function from POSIX is typically used for creating directories, and it has an option to create parent directories if they do not exist. However, in pure C, there isn't a direct equivalent to the `std::filesystem` library provided by C++. Instead, we can use the `<dirent.h>` and `<sys/stat.h>` libraries for file system operations.

Here is the converted code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

int mkdir_p(const char *path) {
    // Check if the directory already exists
    struct stat sb;
    if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
        return 0; // Directory already exists
    }

    // Create parent directories recursively
    char *copy = strdup(path);
    if (!copy) {
        perror("strdup");
        return -1;
    }

    for (char *p = copy + 1; *p != '\0'; ++p) {
        if (*p == '/') {
            *p = '\0';
            if (mkdir(copy, S_IRWXU) != 0 && errno != EEXIST) {
                free(copy);
                perror("mkdir");
                return -1;
            }
            *p = '/';
        }
    }

    // Create the last directory in the path
    if (mkdir(copy, S_IRWXU) != 0 && errno != EEXIST) {
        free(copy);
        perror("mkdir");
        return -1;
    }

    free(copy);
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <path>\n", argv[0]);
        return -1;
    }

    if (mkdir_p(argv[1]) == 0) {
        printf("Directory created successfully.\n");
    } else {
        perror("mkdir_p");
        return -1;
    }

    return 0;
}
```

### Explanation:
1. **strdup**: This function duplicates the string pointed to by `path` into a new allocated memory space.
2. **for loop**: Iterates through the path, creating each directory segment until it reaches the last segment.
3. **mkdir**: Creates a directory if it does not exist. The `S_IRWXU` flag sets permissions for the user to read, write, and execute.
4. **stat**: Checks if the path already exists as a directory.
5. **strdup** and **free**: Manage memory allocation for the path string.
6. **Error handling**: Uses `perror` to print an error message if any operation fails.

This code should work similarly to the original C++ code, creating directories and their parents if they do not exist.
