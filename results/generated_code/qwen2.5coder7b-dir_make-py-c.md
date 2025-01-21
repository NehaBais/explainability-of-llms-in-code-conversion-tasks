Sure! Here is the equivalent C code for creating a directory and any missing parents:

```c
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
    const size_t len = strlen(path);
    char _path[256];
    char *p = NULL;
    
    snprintf(_path, sizeof(_path), "%s", path);
    if (_path[len - 1] == '/') {
        _path[len - 1] = 0;
    }
    
    for (p = _path + 1; *p; p++) {
        if (*p == '/') {
            *p = '\0';
            if (mkdir(_path, 0755) != 0 && errno != EEXIST) {
                perror("Error creating directory");
                return;
            }
            *p = '/';
        }
    }

    // Create the final directory
    if (mkdir(path, 0755) != 0 && errno != EEXIST) {
        perror("Error creating directory");
    }
}

int main() {
    mkdirp("./path/to/dir");
    return 0;
}
```

### Explanation:
1. **Function `mkdirp`**:
   - The function takes a single path string as input.
   - It checks if the last character of the path is `/`, and if so, removes it because `mkdir` does not need a trailing slash.
   - It then iterates through each character of the path, creating directories one by one until it reaches the final directory.

2. **Main Function**:
   - The `main` function demonstrates how to use the `mkdirp` function with the example path `"./path/to/dir"`.

### Notes:
- The `mkdir` function is used to create a single directory.
- The `0755` mode allows read, write, and execute permissions for the owner, and read and execute permissions for the group and others.
- If any directory creation fails, the error message is printed using `perror`.
- This implementation is cross-platform as it uses standard C library functions that are available on most Unix-like systems.
