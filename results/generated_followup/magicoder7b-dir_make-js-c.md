 The error is because the C compiler doesn't recognize `strrchr`, `strncpy` or `strdup` functions although they are declared in `<string.h>`. To fix this, include `<string.h>` at the beginning of your C program to declare these standard library functions. 

Here is the corrected code:
```c
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h> // Include this header to declare strrchr, strncpy and strdup functions

void mkdirp(char *path) {
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    int parent;

    if ((parent = getParentDirName(path)) != NULL) {
      mkdirp(parent); // Recursively call itself with the parent directory path

      mkdir(path, 0755);
    } else {
      printf("Failed to make directory %s: %d\n", path, errno);
    }
  }
}

char *getParentDirName(const char *path) {
  static char parent[PATH_MAX]; // Assuming PATH_MAX is defined in limits.h (POSIX standard)
                                // Copy parent directory name to 'parent'
  
  if ((strrchr(parent, '/') = strrchr(path, '/')) != NULL) {
    strncpy(parent, path,
            strrchr(path, '/') -
                path);
  } else {
    return NULL; // If the given path does not have a parent directory.
  }

  parent[strrchr(path, '/') - path + 1] = '\0'; // Remove slash after copying parent dir name
  return strdup(parent); // Return duplicated string to avoid modifying original 'parent' array
}
```
