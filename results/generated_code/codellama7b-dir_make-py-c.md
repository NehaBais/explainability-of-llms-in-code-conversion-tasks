You can implement this function in C using the following code:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

int mkdirp(const char *path) {
    struct stat sb;
    int rc = 0;

    if (stat(path, &sb) == -1) {
        // The directory does not exist, create it
        rc = mkdir(path, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
    } else if (!S_ISDIR(sb.st_mode)) {
        // The path exists but it's not a directory
        rc = ENOTDIR;
    } else {
        // The directory already exists, do nothing
        rc = 0;
    }

    return rc;
}
```
This code uses the `stat` system call to check if the directory exists and is a directory. If it does not exist or is not a directory, it creates the directory using the `mkdir` system call with the appropriate permissions set. The `S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH` constant is used to set the permissions of the created directory to allow reading, writing, and execution by the owner and group, as well as reading and execution for others.

Note that this code does not check for any errors that may occur when creating the directory, such as insufficient permissions or a full disk. It is recommended to add error checking and handling to ensure that the function returns successfully even in case of errors.
