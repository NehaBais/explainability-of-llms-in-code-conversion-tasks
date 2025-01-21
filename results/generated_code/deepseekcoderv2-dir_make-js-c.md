 To convert the given JavaScript code for creating a directory and its parents if they do not exist (similar to the `mkdir -p` command) into C, we can use the POSIX API. Below is an implementation in C that mimics the behavior of the provided JavaScript function:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

// Function to create a directory and its parents if they do not exist
void mkdirp(const char *path, void (*callback)(int, const char*)) {
    struct stat st;
    
    // Check if the path already exists
    if (stat(path, &st) == 0) {
        if (S_ISDIR(st.st_mode)) {
            callback(0, NULL); // Directory already exists
            return;
        } else {
            callback(-1, "Not a directory"); // Path exists but is not a directory
            return;
        }
    }
    
    // Create parent directories if they do not exist
    char *parent_path = strdup(path);
    char *last_slash = strrchr(parent_path, '/');
    if (last_slash != NULL) {
        *(last_slash + 1) = '\0'; // Null-terminate the parent path string
        mkdirp(parent_path, callback);
        free(parent_path);
    } else {
        free(parent_path);
        callback(-1, "Invalid path");
        return;
    }
    
    // Try to create the directory
    if (mkdir(path, 0755) == -1) {
        if (errno != EEXIST && errno != ENOENT) {
            callback(-1, strerror(errno));
        } else {
            callback(0, NULL); // Directory creation succeeded or already exists
        }
    } else {
        callback(0, NULL); // Directory created successfully
    }
}

// Example usage
int main() {
    mkdirp("./path/to/dir", [](int err, const char *msg) {
        if (err == -1) {
            fprintf(stderr, "Error: %s\n", msg);
        } else {
            printf("Directory created successfully.\n");
        }
    });
    return 0;
}
```

### Explanation:
1. **Stat Function**: We use the `stat` function to check if the path already exists. If it does, we check if it is a directory.
2. **Parent Directory Creation**: If the path does not exist, we create its parent directories by stripping off the last component of the path and recursively calling `mkdirp` on the parent path.
3. **Directory Creation**: We use the `mkdir` function to create the directory. If it fails due to an existing entry (`EEXIST`) or because a parent directory does not exist (`ENOENT`), we handle these cases appropriately.
4. **Callback Function**: The callback function is used to handle errors and success, similar to how callbacks are handled in JavaScript.

This C code should provide the same functionality as the provided JavaScript code, creating directories and their parents if they do not already exist.
