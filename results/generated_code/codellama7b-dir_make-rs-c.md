Certainly! Here is the Rust code converted to C:
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void) {
    const char *path = "./path/to/dir";
    struct stat sb;

    if (stat(path, &sb) == 0 && S_ISDIR(sb.st_mode)) {
        printf("Directory already exists\n");
        return 0;
    } else {
        char *parents = strdup(path);
        char *slash = strrchr(parents, '/');
        if (slash) {
            slash[0] = '\0';
            mkdir(parents, 0755);
        }
        free(parents);
    }
}
```
The C code includes the header files `<stdio.h>`, `<stdlib.h>`, `<string.h>`, `<errno.h>`, `<sys/stat.h>`, and `<sys/types.h>`. It also uses the `stat()` function to check if a directory already exists at the specified path, and the `mkdir()` function to create it if it doesn't. The code also includes a call to `free()` to release memory used by the `strdup()` function.

Note that this implementation assumes that the specified path is relative to the current working directory, and it will not work if the path is absolute or if there are any symbolic links in the path. Additionally, this code uses the `S_ISDIR()` macro from `<sys/stat.h>` to check if the file at the specified path is a directory, which is not available in all versions of C.
