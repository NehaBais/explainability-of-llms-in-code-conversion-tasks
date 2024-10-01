In C, you can use the `mkdir` function with the `recursive` flag set to create directories recursively. Here is an example of how you can implement the `MkdirAll` function in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

int MkdirAll(const char *path, mode_t mode) {
    struct stat st;
    int rc = 0;

    if (stat(path, &st) == -1) {
        // Create the directory and all its missing parents recursively.
        rc = mkdir(path, mode);
    } else if (!S_ISDIR(st.st_mode)) {
        errno = ENOTDIR;
        return -1;
    }

    return rc;
}
```
This function takes a path string as its first argument and a mode value as its second argument. It checks if the directory exists by calling `stat` on the path, and if it does not exist or is not a directory, it calls `mkdir` to create the directory and all its missing parents recursively. If any error occurs during the creation of the directory, the function returns -1 and sets `errno` accordingly.

You can use this function in your program by calling it with the path string you want to create and the desired mode value as arguments. For example:

MkdirAll("/tmp/some/path/to/dir", 0770);

Note that this function is not cross-platform compatible, as it uses the `mkdir` system call which is specific to Unix-like operating systems. If you need a more portable solution, you can use the `CreateDirectory` function from the Windows API on Windows or the `mkdir` command on other operating systems.
