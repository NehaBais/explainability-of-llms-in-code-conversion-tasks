The JavaScript code provided creates a directory and its missing parent directories. Below is the equivalent C code that achieves the same functionality using POSIX functions available on Unix-like systems.

This C function `mkdirp` will attempt to create a directory specified by the path, creating any missing intermediate directories as needed.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

void mkdirp(const char *path) {
    const char *p = path;
    struct stat sb;

    while (*p && p != NULL) {
        // Advance to the next slash or end of string
        while (*p && *p != '/') p++;
        
        // Copy up to but not including the slash into a temporary buffer
        char buffer[1024];
        strncpy(buffer, path, p - path);
        buffer[p - path] = '\0';

        if (buffer[strlen(buffer) - 1] == '/') {
            buffer[strlen(buffer) - 1] = '\0'; // Remove trailing slash if present
        }

        // Check if directory exists, create it if not
        if (stat(buffer, &sb) != 0 || !S_ISDIR(sb.st_mode)) {
            int result = mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
            if (result != 0 && errno != EEXIST) {
                perror("mkdir");
                exit(EXIT_FAILURE);
            }
        }

        // Move to the next component
        p++;
    }
}

int main() {
    const char *path = "./path/to/dir";
    mkdirp(path);
    
    return 0;
}
```

### Key Points in the Code:
1. **String Manipulation**: The function iterates over the input path, creating each directory component as necessary.
2. **Directory Existence Check**: It uses `stat` to check if a directory exists and whether it is actually a directory. If not, it attempts to create it with `mkdir`.
3. **Error Handling**: Proper error handling for common issues like permissions errors or existing files are in place.
4. **Exit on Failure**: The program exits if creating a directory fails, mimicking the behavior of the original JavaScript function which invokes a callback upon error.

This C code should work equally well across POSIX-compliant systems such as Linux and macOS.
