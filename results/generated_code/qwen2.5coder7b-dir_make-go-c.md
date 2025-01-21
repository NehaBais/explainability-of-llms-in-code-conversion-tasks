To convert the given Go code to C, we need to create a function that mimics the behavior of `mkdir -p` in Posix systems. This involves checking if each directory in the path exists and creating it if it doesn't.

Here is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void create_directory(const char *path) {
    size_t len = strlen(path);
    char *s = malloc((len + 1) * sizeof(char));
    strcpy(s, path);

    // Iterate over each character in the path
    for (size_t i = 0; i < len; ++i) {
        if (s[i] == '/') {
            s[i] = '\0';
            if (mkdir(s, 0770) != 0 && errno != EEXIST) {
                perror("Failed to create directory");
                free(s);
                return;
            }
            s[i] = '/';
        }
    }

    // Create the final directory
    if (mkdir(s, 0770) != 0 && errno != EEXIST) {
        perror("Failed to create directory");
    }

    free(s);
}

int main() {
    const char *path = "/tmp/some/path/to/dir";
    create_directory(path);
    return 0;
}
```

### Explanation:
1. **Memory Allocation**: We allocate memory for a copy of the input path.
2. **Iterate Over Path**: We iterate over each character in the path. If we encounter a `/`, we null-terminate the string up to that point and attempt to create a directory using `mkdir`.
3. **Handle Existing Directory**: If `mkdir` returns an error other than `EEXIST` (directory already exists), we print an error message.
4. **Create Final Directory**: After iterating through all parts of the path, we create the final directory.

### Notes:
- This code is intended to work on Unix-like systems where the `mkdir` system call is available.
- It uses the standard library functions `malloc`, `strcpy`, `strlen`, and `mkdir`.
- The `errno` variable is used to check if the directory already exists (`EEXIST`).

This function will create all necessary parent directories for the given path, similar to the `mkdir -p` command in Posix systems.
