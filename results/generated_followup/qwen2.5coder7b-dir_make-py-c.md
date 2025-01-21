### Error Explanation:
The error occurs because `errno` is used without being declared or defined. The `errno` macro is part of the C standard library, but it needs to be included from `<errno.h>`.

### Fix Explanation:
Include the `<errno.h>` header file to define the `errno` macro.

### Corrected Code:

```c
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>

void mkdirp(const char *path) {
  const size_t len = strlen(path);
  char _path[256];
  char *p = NULL;

  snprintf(_path, sizeof(_path), "%s", path);
  if (_path[len - 1] == '/') {
    _path[len - 1] = 0;
  }

  for (p = _path + 1; *p; p++) {
    if (*p == '/') {
      *p = '\0';
      if (mkdir(_path, 0755) != 0 && errno != EEXIST) {
        perror("Error creating directory");
        return;
      }
      *p = '/';
    }
  }

  // Create the final directory
  if (mkdir(path, 0755) != 0 && errno != EEXIST) {
    perror("Error creating directory");
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```

This code now includes `<errno.h>` and should compile without errors.
