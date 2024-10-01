In C language, you can use `mkdir` function from the `dirent.h` header file which is part of POSIX standards and works cross-platform too.

Here's how you might implement a function to create directories as per your requirement:

```c
#include <stdio.h>
#include <dirent.h>

int mkdir_p(const char *path) {
    if (mkdir(path, 0700)) {
        // This is normal if the directory already exists
        if (errno != EEXIST) {
            fprintf(stderr, "Error creating directory %s: %s\n", path, strerror(errno)));
            return -1;
        }
    }

    return 0;
}
```
This function attempts to create the specified directory and any missing parent directories. If the directory already exists (i.e., `errno == EEXIST`), the function simply returns successfully (i.e., `0`)).

The function uses the `mkdir` function to attempt to create the specified directory with a mode of `0700`. If `mkdir` fails due to an existing directory, the function checks the value of `errno` to determine whether it corresponds to the case where the directory already exists. If `errno` does not correspond to the case where the directory already exists, the function prints an error message indicating that an unexpected error occurred while creating the directory.

Note that this implementation uses the POSIX standard for creating directories. This means that this implementation should work equally well cross-platform as the `os.MkdirAll` implementation in Golang.
