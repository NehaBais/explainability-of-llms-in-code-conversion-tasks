The error occurs because the `strncpy`, `strnlen`, `mkdir` and `errno` functions, as well as the file permission constants (`S_IRWXU`, `S_IRWXG`, `S_IROTH`, `S_IXOTH`), are not declared. 

To fix this error, we need to include the appropriate headers for these functions/constants.

Rewritten corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int makeDirectories(const char *path) {
  char buffer[1024];
  strncpy(buffer, path, sizeof(buffer));
  size_t len = strnlen(buffer, sizeof(buffer));

  for (size_t i = 0; i < len && buffer[i]; ++i) {
    if (buffer[i] == '/') {
      buffer[i] = '\0';
      if (mkdir(buffer, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 &&
          errno != EEXIST) {
        perror("mkdir failed");
        return -1;
      }
      buffer[i] = '/';
    }
  }

  if (mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0 &&
      errno != EEXIST) {
    perror("mkdir failed");
    return -1;
  }

  return 0;
}

int main() {
  const char *path = "./path/to/dir";

  if (makeDirectories(path) == 0) {
    printf("Path successfully created\n");
  } else {
    fprintf(stderr, "Failed to create path: %s\n", path);
  }

  return 0;
}
```
