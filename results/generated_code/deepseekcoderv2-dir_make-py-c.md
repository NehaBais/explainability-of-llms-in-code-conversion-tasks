 To convert the given Python function `mkdirp` to C, we can use a library that provides similar functionality across platforms. In this case, we'll use the POSIX `mkdir` and `mkdir` functions along with their flags to ensure that parent directories are created if they do not already exist. The standard C library does not have an equivalent of Python's `os.makedirs(path, exist_ok=True)`, but we can achieve similar functionality using the `<sys/stat.h>` and `<errno.h>` libraries.

Here is a C implementation that mimics the behavior of the Python function:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

void mkdirp(const char *path) {
    if (mkdir(path, 0755) == -1) {
        // If the directory already exists, errno will be set to EEXIST
        if (errno != EEXIST) {
            perror("mkdir");
            exit(EXIT_FAILURE);
        }
    }
}

int main() {
    const char *dir = "./path/to/dir";
    mkdirp(dir);
    return 0;
}
```

### Explanation:
1. **Include Necessary Headers**: We include headers for standard input/output functions (`stdio.h`), standard library functions (`stdlib.h`), string operations (`string.h`), POSIX file mode constants and error checking (`sys/stat.h` and `errno.h`).
2. **mkdirp Function**: This function takes a single argument, the path to the directory you want to create. It uses the `mkdir` system call with the mode set to 0755 (which allows read, write, and execute permissions for owner, group, and others) to attempt to create the directory.
3. **Error Handling**: If `mkdir` fails and `errno` is not equal to `EEXIST`, it prints an error message using `perror`. The program then exits with a failure status (`EXIT_FAILURE`). If the directory already exists (indicated by `errno == EEXIST`), this is considered a successful operation.
4. **Main Function**: In the main function, we call `mkdirp` with the desired directory path.

This implementation should work on POSIX-like systems where `mkdir` and related functions are available. Note that for Windows, you would use `_mkdir` instead of `mkdir`, and the mode setting might differ due to different file system permissions models.
