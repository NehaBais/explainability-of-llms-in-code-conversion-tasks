Converting this JavaScript code to C involves several steps. Since there's no direct equivalent for Node.js's `fs.mkdir` and `path.dirname`, we'll use platform-specific functions like `mkdir` from `<sys/stat.h>` on Unix-like systems, and `_mkdir` or `CreateDirectory` on Windows.

Below is a cross-platform implementation in C that mimics the behavior of `mkdir -p`. This code uses `mkdir` for Unix-like systems and `_mkdir` for Windows. Note that this code assumes you have access to appropriate headers and libraries for your platform.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

void mkdirp(const char *path) {
    const char *sep = "/";
#ifdef _WIN32
    sep = "\\";
#endif

    char resolved_path[4096];
    strcpy(resolved_path, path);
    char *parent = resolved_path;

    while (1) {
        parent = strchr(parent + 1, *sep);
        if (!parent) {
            break;
        }
        *parent = '\0';
#ifdef _WIN32
        if (_mkdir(resolved_path) == -1) {
#else
        if (mkdir(resolved_path, 0755) == -1) {
#endif
            perror("mkdir");
            exit(EXIT_FAILURE);
        }
        *parent = *sep;
    }

#ifdef _WIN32
    if (_mkdir(path) == -1) {
#else
    if (mkdir(path, 0755) == -1) {
#endif
        perror("mkdir");
        exit(EXIT_FAILURE);
    }
}

int main() {
    mkdirp("./path/to/dir");
    return 0;
}
```

### Explanation:

1. **Platform-Specific Directories**:
   - On Unix-like systems, the directory separator is `/`.
   - On Windows, the directory separator is `\`.

2. **Resolving and Processing the Path**:
   - The function `mkdirp` takes a path string as input.
   - It resolves the path using `strchr` to find each segment (separated by `/` or `\`).
   - For each segment, it creates the directory if it doesn't already exist.

3. **Creating Directories**:
   - On Unix-like systems, `mkdir` is used with permissions `0755`.
   - On Windows, `_mkdir` is used (note that `_mkdir` returns `-1` on success and `0` on failure).

4. **Error Handling**:
   - The function checks for errors after each directory creation attempt.
   - If an error occurs, it prints the error message using `perror` and exits.

### Usage:

- Compile the code with a C compiler (e.g., `gcc`) and run the resulting executable.
- Ensure that you have the necessary permissions to create directories in the specified path.

This implementation should work cross-platform on Unix-like systems and Windows, mimicking the behavior of `mkdir -p`.
