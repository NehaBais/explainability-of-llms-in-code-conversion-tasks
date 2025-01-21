 To convert the provided Go code to C, we need to use standard file and directory handling functions available in the C standard library (`stdio.h` for file operations and `dirent.h` for directory operations). Below is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *fn) {
    FILE *f = fopen(fn, "w");
    if (f == NULL) {
        perror("Error creating file");
        return;
    }
    printf("file %s created!\n", fn);
    fclose(f);
}

void createDir(const char *dn) {
    int status = mkdir(dn, 0666);
    if (status == -1) {
        perror("Error creating directory");
        return;
    }
    printf("directory %s created!\n", dn);
}

int main() {
    char path[256];

    // Current working directory
    getcwd(path, sizeof(path));
    strcat(path, "/input.txt");
    createFile(path);

    // Root directory
    strcpy(path, "/input.txt");
    createFile(path);

    // Current working directory
    getcwd(path, sizeof(path));
    strcat(path, "/docs");
    createDir(path);

    // Root directory
    strcpy(path, "/docs");
    createDir(path);

    return 0;
}
```

### Explanation:
1. **File Creation**: The `createFile` function in Go is equivalent to opening a file with the "w" mode in C, which creates a new file if it doesn't exist or truncates an existing one to zero length. This behavior is achieved using `fopen(fn, "w")`.

2. **Directory Creation**: The `createDir` function uses `mkdir(dn, 0666)` to create a directory with default permissions (0666). If the directory already exists or there's an error in creation, it prints an error message using `perror`.

3. **Main Function**: In C, we need to handle the current working directory differently since there's no direct equivalent of Go's `os.Create` and `os.Mkdir` functions. We use `getcwd()` to get the current working directory path and concatenate it with the filename or directory name as required.

4. **Permissions**: The permissions set in both C and Go are identical (0666), representing "rw-rw-rw-" access for all users.

This conversion assumes a POSIX environment where `/` represents the root directory, and `getcwd()` can retrieve the current working directory path. If you're using Windows, some adjustments would be necessary due to differences in file system handling (e.g., backslashes instead of forward slashes).
