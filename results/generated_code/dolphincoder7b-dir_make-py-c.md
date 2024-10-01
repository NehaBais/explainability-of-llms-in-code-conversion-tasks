Below is the equivalent C code for the Python function:

```c
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

void mkdirp(const char* path) {
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    size_t len = strlen(path);
    
    // check if the directory exists
    struct stat s;
    int status = lstat(path, &s);

    if (status != 0) {
        // create a new directory
        mkdir(path, 0755);
    } else if (S_ISDIR(s.st_mode)) {
        // it's an existing directory, do nothing
        return;
    }
}
```

The C version of the `mkdirp` function first finds the current working directory and then uses `lstat` to check whether the given path already exists or not. If it doesn't exist, a new directory is created using `mkdir`, otherwise if it's an existing directory, nothing happens. The existence status of directories and other files can be tested with the `S_ISDIR()` function from `<sys/stat.h>`.

Please note that this code assumes that the path string does not exceed 1024 characters long and does not handle errors returned by the system functions. These are omitted for brevity. The C version also uses POSIX-style paths, not Windows-style paths as in the Python version.
