The error occurred because `errno` is not declared or included when using static analysis tools like CodeGeex. In C, `errno` must be included with `<errno.h>` to use it. The corrected code includes this header.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h> // Include errno for error handling

void mkdirp(const char *path) {
  const char *p = path;
  struct stat sb;

  while (*p && p != NULL) {
    while (*p && *p != '/')
      p++;

    char buffer[1024];
    strncpy(buffer, path, p - path);
    buffer[p - path] = '\0';

    if (buffer[strlen(buffer) - 1] == '/') {
      buffer[strlen(buffer) - 1] = '\0';
    }

    if (stat(buffer, &sb) != 0 || !S_ISDIR(sb.st_mode)) {
      int result = mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
      if (result != 0 && errno != EEXIST) {
        perror("mkdir");
        exit(EXIT_FAILURE);
      }
    }

    p++;
  }
}

int main() {
  const char *path = "./path/to/dir";
  mkdirp(path);

  return 0;
}
```

This corrected code now includes the required `<errno.h>` header to use `errno` for error handling.
