Here's the equivalent C code for the given Python function `mkdirp()`:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
int mkdirp(const char *path) {
 struct stat st;
 if (stat(path, &st) != 0) {
 mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 }
 return 0;
}
```
The C code uses the `mkdir()` function to create a directory and the `stat()` function to check if it already exists. If the directory does not exist, it is created using `mkdir()`. The `S_IRWXU`, `S_IRWXG`, `S_IROTH`, and `S_IXOTH` constants are used to set the file permissions of the newly created directory to be readable, writable, and executable by the owner, group, others, and their respective groups.
Note that this code is only suitable for Unix-like systems as it makes use of the `mkdir()` function which is not available on Windows. In Windows, you can use the `_mkdir()` function instead.

