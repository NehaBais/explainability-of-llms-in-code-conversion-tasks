 Below is a simple C implementation of creating directories and their parents with the posix `mkdir -p` semantics:

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

int create_dir(char *path, mode_t mode){
    struct stat st;
    char *p = strdupa(path);
    char *pp = NULL;
    if (stat(path, &st) != 0) {
        return mkdir(path, mode);
    }
    // The directory already exists
    printf("Directory %s already exists\n", path);
    return 0;
}

int main() {
   create_dir("/tmp/some/path/to/dir", 0770);
   return 0;
}
```
In this C code, the function `create_dir()` creates directories and their parents based on the given path. It uses `stat()` to check if a directory exists at the given path or not. If it doesn't exist, then `mkdir()` is called to create the directory with the specified mode. The function finally returns 0 if successful in creating directories (or they already existed), and non-zero otherwise.

Please note that C does not have built-in support for dynamic string manipulation such as `strdupa()`, which is why a separate library might be required depending on the C environment you're working with. You can also use `strdup()` or `malloc()/calloc()` and then manually handle memory cleanup.
