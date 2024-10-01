Below you will find a C implementation for your JavaScript function which creates directory and its parent directories if they don't exist.
Note that C doesn't provide built-in support for this behavior like Node.js does, so we have to implement it ourselves:
```c
#include <sys/stat.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int mkdirp(const char *path) {
    struct stat st;
    char* saveptr = NULL, * dir = strdup(path);
    const mode_t mask = 0755;
    mode_t prev_umask;

    /* Return if the directory already exists. */
    if (stat(path, &st) == 0) {
        return 0;
    }

    char* token = strtok_r(dir, "/", &saveptr);
    prev_umask = umask(mask);

    do {
        /* Create directory */
        if (mkdir(token, mask) == -1 && errno != EEXIST) {
            umask(prev_umask);
            free(dir);
            return -1;
        }

        /* Go to next subdirectory */
        token = strtok_r(NULL, "/", &saveptr);
    } while (token != NULL);

    umask(prev_umask);
    free(dir);

    return 0;
}
```
