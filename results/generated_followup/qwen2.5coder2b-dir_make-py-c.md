Error: 'mkdir' is not declared. Fix: Use stdlib.h. Corrected Code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mkdirp(const char *path) {
  if (mkdir(path, 0755) != 0 && errno == ENOENT) {
    // Directory does not exist. Recursively create the parent directories.
    int ret = mkdirp(dirname(path));
    if (ret == -1) {
      perror("mkdirp");
      return -1;
    }
  } else if (errno != 0) {
    perror("mkdirp");
    return -1;
  }

  return 0;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s path/to/dir\n", argv[0]);
    return 1;
  }

  int result = mkdirp(argv[1]);

  if (result == 0) {
    printf("Directory created or already exists.\n");
  } else {
    printf("Failed to create directory: %s\n", strerror(errno));
  }

  return 0;
}
```
