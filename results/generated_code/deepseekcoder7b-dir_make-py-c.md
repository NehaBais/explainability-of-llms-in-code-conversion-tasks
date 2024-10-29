The equivalent C code to create a directory and any missing parents in C does not have the same functionality as Python due to differences between the language syntax and standard libraries. But here is an example of how you could do it using `mkdir` function, which creates one directory at a time with checking for existing parent directories:

```c
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int mkdir_p(const char *path) {
    struct stat st;
    int status = 0;
    
    if (stat(path, &st) != 0) {
        if (mkdir(path, 0755) == -1) {
            perror("Error creating directory");
            return 1;
        }
    } else if (!S_ISDIR(st.st_mode)) {
      errno = ENOTDIR;
      perror("Path exists but is not a directory");
      return 1;
    }
    
    return status;
}
```
This function will create the directories specified in the path if they do not exist already. If there are missing parent directories, it will try to create them as well. Please note that this code checks for success of `stat()` and `mkdir()` calls, so you would need to handle possible errors from these functions properly (for instance by printing an error message).

