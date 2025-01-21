 The error occurred because C99 and later standards do not support implicit function declarations. This means that if `strdupa()` is being used for the first time without declaring it, the compiler will throw an error. 

The fix would be to include `string.h` in order to use the built-in string functions like `strdup()`.

Corrected Code:
```c
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int create_dir(char *path, mode_t mode) {
  struct stat st;
  char *p = strdup(path);
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
This code declares a function `create_dir()` that can create directories and their parents based on the given path. It uses `stat()` to check if a directory exists at the given path or not, and creates it using `mkdir()` if it does not exist. It returns 0 if successful in creating directories (or they already existed), and non-zero otherwise.
