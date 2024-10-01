```c
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int mkdir_with_parents(const char* path, mode_t mode) {
    int err;

    err = mkdir(path, mode);
    if (err && errno != EEXIST) {
        return -1; // Failed to create directory
    } else if (!err || errno == ENOENT) {
        char *parent = strdup(path);
        const char* s = strrchr(parent, '/');

        if (s != NULL) {
            *s = '\0';

            err = mkdir_with_parents(parent, mode); // Recurse up the directory tree
            free(parent);
        }

        if (!err && errno == ENOENT) {
            err = -1;  // Parent directory does not exist
        }
    }

    return err ? -1 : 0;
}
```
