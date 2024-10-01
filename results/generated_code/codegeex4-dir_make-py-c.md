To achieve the same functionality in C, you can use the POSIX `mkdir` function with the `EEXIST` error handling to create any missing parents if they don't already exist. Here's a C function that mimics the behavior of Python's `os.makedirs()`:

```c
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>

void mkdirp(const char* path) {
    char buffer[1024];
    char *ptr = buffer;
    size_t len;

    /* Copy the path to avoid modifying the input string */
    len = strlen(path);
    if (len >= sizeof(buffer)) {
        ptr = malloc(len + 1); // Allocate memory for dynamic storage
        if (!ptr) {
            fprintf(stderr, "Failed to allocate memory\n");
            return;
        }
        strncpy(ptr, path, len + 1);
    } else {
        strncpy(buffer, path, sizeof(buffer));
    }

    /* Create directories one by one */
    const char *slash = strchr(ptr, '/');
    while (slash) {
        *slash = '\0'; // Null-terminate after the slash to get a directory name
        if (mkdir(ptr, 0755) && errno != EEXIST) { // If it fails and it's not because of an existing dir
            perror("mkdir");
            break;
        }
        *slash = '/'; // Restore slash before next iteration
        slash = strchr(slash + 1, '/');
    }

    /* Create the final directory */
    if (mkdir(path, 0755) && errno != EEXIST) {
        perror("mkdir");
    } else {
        printf("Directory created successfully.\n");
    }
    
    /* Free allocated memory */
    if (ptr != buffer)
        free(ptr);
}

int main() {
    mkdirp("./path/to/dir");
    return 0;
}
```

### Explanation:
1. **Memory Allocation:** If the path is longer than the static buffer size, dynamic memory allocation (`malloc`) is used to handle larger paths.
2. **Directory Creation:** The `mkdir` function creates directories one by one from left to right using the `/` as a delimiter. It sets the permissions of each directory to 0755 (readable, writable, and executable by owner; readable by group; and readable and executable by others).
3. **Error Handling:** If `mkdir` fails due to an existing directory (`EEXIST`), it continues creating subsequent directories.
4. **Memory Management:** The program ensures that dynamically allocated memory is freed after use.

### Notes:
- This function works on POSIX-compliant systems (Linux, macOS, etc.). It does not account for Windows-specific directory creation methods since the problem specifies cross-platform compatibility.
- Error handling and reporting could be improved by logging or returning specific error codes.
