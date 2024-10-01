Below is your Python code converted to C:

```c
#include <sys/stat.h>
#include <stdio.h>

int main() {
  struct stat info;
  
  // Check for file and directory in current working directory
  if (stat("input.txt", &info) != -1 && S_ISREG(info.st_mode)) {
    printf("File exists in the current working directory.\n");
  } else {
    printf("File does not exist in the current working directory.\n");
  }

  if (stat("docs", &info) != -1 && S_ISDIR(info.st_mode)) {
    printf("Directory exists in the current working directory.\n");
  } else {
    printf("Directory does not exist in the current working directory.\n");
  }
  
  // Check for file and directory in root directory
  if (stat("/input.txt", &info) != -1 && S_ISREG(info.st_mode)) {
    printf("File exists in the root directory.\n");
  } else {
    printf("File does not exist in the root directory.\n");
  }

  if (stat("/docs", &info) != -1 && S_ISDIR(info.st_mode)) {
    printf("Directory exists in the root directory.\n");
  } else {
    printf("Directory does not exist in the root directory.\n");
  }
  
  return 0;
}
```
In this C code, we use `stat()` function from `<sys/stat.h>` header to get information about file or directory. If the file/directory exists, `stat()` returns 0, otherwise it returns -1. We then use `S_ISREG()` and `S_ISDIR()` macros from `<sys/stat.h>` header to check whether the given path is a regular file or a directory respectively.

Please note that in order to compile this code you need admin rights on a Unix-like system because `/` (root directory) requires it.
