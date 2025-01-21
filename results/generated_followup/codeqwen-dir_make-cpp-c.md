Error: `PATH_MAX` is not defined, it is a limit of the maximum length of a path.

Fix: The correct size for the path array needs to be specified. For example `char pathToCreate[1024];`.

Corrected Code:

```c
#include <dirent.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("usage: mkdir <path>\n");
    return -1;
  }

  char pathToCreate[1024];
  snprintf(pathToCreate, 1024, "%s", argv[1]);

  if (mkdir(pathToCreate, S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH) ==
          -1 &&
      errno != EEXIST) {
    perror("Couldn't create directory");
    return -1;
  }

  return 0;
}
```
