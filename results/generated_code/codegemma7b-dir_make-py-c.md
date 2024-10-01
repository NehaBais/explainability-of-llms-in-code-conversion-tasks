```c
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int mkdirp(const char *path) {
  size_t len = strlen(path);
  for (size_t i = 0; i < len; i++) {
    if (path[i] == '/') {
      path[i] = '\0';
      if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        return -1;
      }
      path[i] = '/';
    }
  }
  if (mkdir(path, 0755) == -1 && errno != EEXIST) {
    return -1;
  }
  return 0;
}

int main() {
  // Create directory ./path/to/dir
  int result = mkdirp("./path/to/dir");

  if (result == 0) {
    printf("Directory created successfully.\n");
  } else {
    printf("Error creating directory.\n");
  }

  return 0;
}
```

**Explanation:**

* The function iterates through each character in the path string.
* If it encounters a '/' character, it splits the path into two parts and creates the first part recursively using `mkdir`.
* If the directory already exists, it continues to the next part.
* If the entire path is successfully created, the function returns 0. Otherwise, it returns -1.

**Note:**

* The function uses the `mkdir` system call to create directories.
* The `errno` variable is used to check for errors.
* The directory permissions are set to 0755, which grants read, write, and execute permissions to the owner and group, and read and execute permissions to others.
* The function is cross-platform compatible.
