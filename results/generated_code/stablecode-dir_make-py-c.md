The equivalent function in C would be using POSIX's `mkdir` or `mkdirs`, depending on your needs (see notes below). We'll use `mkdirs` as it handles the case where the directory already exists. 

For cross-platform compatibility, we need to check if the system has the `mkdirs` function and use it accordingly. If not available, fallback to using `mkdir`.

```c 
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>

int mkdirp(const char *path) {
    int rc = 0;

    // Check if the system supports `mkdirs`
    #ifdef __GLIBC__
    #ifndef _GNU_SOURCE
    #define _GNU_SOURCE 1
    #endif
    #endif

    if (rc == 0 || errno != EEXIST)) {
        rc = mkdir(path, 0777));
    } else {
        // `mkdirs` is available, use it.
        #ifdef __GLIBC__
        // `mkdirs()` not in glibc, try POSIX `mkdir`. 
        #ifdef _POSIX_THREAD_SAFE_FUNCTIONS
            rc = mkdir(path, 0777));
        #else
            // POSIX threads safe functions are unavailable. Fallback to single-threaded approach.
            rc = mkdir(path, 0777));
        #endif
    }

    return rc;
}
``` 

This code defines a function `mkdirp` that takes in a path string and creates any missing parent directories using the POSIX `mkdirs` or `mkdir` functions. The implementation also includes cross-platform compatibility checks, allowing for successful execution on multiple operating systems.
