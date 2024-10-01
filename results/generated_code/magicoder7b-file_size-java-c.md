 The equivalent C code would be:

```c
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    struct stat st_fileA;
    if(stat("file.txt", &st_fileA) == 0)
        printf("%ld B\n", (long)st_fileA.st_size);
    
    struct stat st_fileB;
    if(stat("/file.txt", &st_fileB) == 0)
        printf("%ld B\n", (long)st_fileB.st_size);
        
    return 0;
}
```
This code uses the `stat` function from the `sys/stat.h` library to get information about a file, including its size in bytes. The resulting size is then printed to the standard output (stdout).

It should be noted that in Unix-like systems, files in the root directory are typically not directly accessible by absolute paths, but you could try using "/" as an argument for `stat`, which will refer to the root of the file system. This won't work on Windows, though, because its file system is hierarchical and does not have a single "root".
