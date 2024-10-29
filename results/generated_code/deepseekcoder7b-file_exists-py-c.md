The C programming language does not have a built-in function equivalent to the Python's os module, but there are functions available in POSIX standard library that provide similar functionality. Here is how you can do it using these functions:

Please note that `access()` and its direct counterparts like `stat()` or `opendir()` work with paths relative to the current working directory by default, not from root (/) of your filesystem. 

```c
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int check_file(const char *path) {
    struct stat path_stat;
    if (stat(path, &path_stat) == 0) {
        return S_ISREG(path_stat.st_mode); // returns 1 for regular files and 0 otherwise
    }
    else {
      printf("Error occurred while accessing %s\n", path);
      perror("");
      return -1;
   }
}

int check_directory(const char *path) {
    struct stat path_stat;
    if (stat(path, &path<｜begin▁of▁sentence｜>at) == 0) {
        return S_ISDIR(path_stat.st_mode); // returns 1 for directories and 0 otherwise
    }
    else {
      printf("Error occurred while accessing %s\n", path);
      perror("");
      return -1;
   }
}

int main() {
    const char* file = "input.txt";
    if (check_file(file) == 0) {
        printf("%s does not exist.\n", file);
    } else {
        printf("%s exists.\n", file);
    }
  
    const char* dir = "docs";
    if (check_directory(dir) == 0) {
       printf("%s does not exist.\n", dir);
    } else {
       printf("%s exists.\n", dir);
    }
 
    return 0;
}
```
This will print whether the files "input.txt" and "docs" exist in the current directory or not. If they do, it prints 'exists' otherwise 'does not exist'.

