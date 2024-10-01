 The C standard library does not have a direct equivalent to Python's os.makedirs(), but you can achieve the same result with a combination of functions from different libraries. Here is an example using POSIX system calls:

```c
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int mkdirp(const char *path, mode_t mode) {
    struct stat st;
    if (stat(path, &st) == 0 && S_ISDIR(st.st_mode))
        return 0; // Dir exists

    errno = 0;
    int ret;

    // Try to make the directory
    ret = mkdir(path, mode);

    if (ret < 0) {
        if (errno == EEXIST && strchr(path, '/')) {
            char *p = strrchr(path, '/');
            ++p; // Skip trailing /
            ret = mkdirp(path, mode);
        } else {
            return -1;
        }
    }

    return 0;
}
```
This function works by trying to create the directory using `mkdir()`, then checking if it already exists (`stat()`) or if an error occurred. If the directory does not exist and a parent directory also doesn't exist, we attempt to recursively call ourself with the path of the parent directory (`strrchr(path, '/')`) before trying again with the original path. If we can't create any part of the path due to an error, we return `-1`.

Please note that in C language, you are responsible for handling errors, so it is advisable to check `errno` after each system call to identify possible issues or handle them appropriately.
