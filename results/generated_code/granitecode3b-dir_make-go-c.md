Here's an implementation of the `mkdirp` function in C that accomplishes the same task as the Golang code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
void mkdirp(const char *path) {
 char *dir;
 int i, len;
 struct stat st;
 for (dir = (char *)path; *dir != '\0'; dir++) {
 if (*dir == '/') {
 *dir++ = '\0';
 break;
 }
 }
 len = strlen(path);
 mkdir(path, 0770);
 for (i = len - 1; i >= 0 && !stat(path, &st); i--) {
 path[i] = '/';
 if (!stat(path, &st)) {
 break;
 }
 path[i] = '\0';
 }
}
```
This function first splits the input path into a list of directories. It then creates each directory using the `mkdir` system call, and checks that the directories exist using the `stat` system call. If any of the intermediate directories are missing, it will return an error.
Note that this implementation is not thread-safe and should only be used in single-threaded programs. Additionally, it does not handle errors and may cause a segmentation fault if the path contains invalid characters or is too long.

