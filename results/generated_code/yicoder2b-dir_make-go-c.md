The equivalent C code for the given Golang function would be as follows - 

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdir_p(const char *path, mode_t mode) {
    char *next = NULL;
    char *current = strdup(path);
    while ((next = strchr(current, '/')) != NULL) {
        *next = '\0';
        if (mkdir(current, mode) == -1) goto out;
        *next = '/';
        while(*++next) ;
    }
    if (mkdir(current, mode) == -1) goto out;
    return 0;
out:
    free(current);
    return -1;
}
```
This C function uses the `strchr` and `strdup` functions from the standard library to achieve similar functionality as the Golang function. The main differences are that in C, file paths must be NULL-terminated strings, so we use `strchr` to find each directory name. We also have to handle errors manually because C does not automatically propagate them. Finally, the mode argument is ignored because it isn't used in this implementation. 

Please note: This code will only work if the user has write access for the parent directories of the path provided. If you want to create any missing parent directories with a specific mode, consider using `mkdir -p` functionality directly provided by C library functions.
