```c
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int mkdirp(const char *path, mode_t mode) {
  size_t len = strlen(path);
  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      path[i] = '\0';
      if (mkdir(path, mode) == -1 && errno != EEXIST) {
        return -1;
      }
      path[i] = '/';
    }
  }
  if (mkdir(path, mode) == -1 && errno != EEXIST) {
    return -1;
  }
  return 0;
}

int main() {
  char path[] = "/tmp/some/path/to/dir";
  int status = mkdirp(path, 0770);
  if (status == 0) {
    // Directory created successfully
  } else {
    // Error creating directory
  }
  return 0;
}
```

**Explanation:**

* The function iterates through the path string character by character.
* It splits the path into components separated by '/' characters.
* For each component, it calls the `mkdir()` function with the appropriate permissions.
* If a component already exists, it ignores the error and continues to the next component.
* If any component fails to be created, the function returns -1.
* Otherwise, it returns 0 to indicate success.

**Note:**

* The function only works on POSIX-compliant systems.
* The `mode` parameter specifies the permissions of the directory being created.
* The function does not perform any error handling beyond checking for the `EEXIST` error.
