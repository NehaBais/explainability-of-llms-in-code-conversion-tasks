Below is the C code equivalent to your Java code:

```c
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

void create_directory(const char *path) {
    #ifdef _WIN32
        if (_mkdir(path)) { // mkdir on Windows
            perror("Error while creating the directory");
            return;
        }
    #else
        if (mkdir(path, 0777))) { // mkdir on POSIX systems
            perror("Error while creating the directory");
            return;
        }
    #endif

    printf("Directory created successfully at: %s\n", path);
}

int main() {
    const char *path = "C:/parent/test";
    create_directory(path);
    return 0;
}
```
This C code creates a directory and any missing parents. It follows the posix standard `mkdir -p` command, which recursively creates directories as needed. 

Note: The implementation of this functionality may vary between different operating systems due to their inherent limitations and differences.
