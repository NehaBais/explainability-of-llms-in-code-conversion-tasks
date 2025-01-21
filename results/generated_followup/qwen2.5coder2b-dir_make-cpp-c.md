The error `use of undeclared identifier 'S_IUSER'` is due to the fact that the symbolic constants for file permissions are not defined by default in C language. The correct symbolic constants are defined in `<sys/stat.h>`.

To fix this, you need to include `<sys/stat.h>` at the top of your code and use the constants `S_IRWXU`, `S_IXGRP`, and `S_IUSER`.

Here's the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mkdir <path>\n");
    return -1;
  }

  struct stat st;
  const char *pathToCreate = argv[1];

  // Check if the path already exists
  if (stat(pathToCreate, &st) == 0) {
    return 0;
  }

  // If it doesn't exist, create it recursively
  if (mkdir(pathToCreate, S_IRWXU | S_IXGRP | S_IUSER) == -1) {
    perror("couldn't create directory");
    return -1;
  }

  return 0;
}
```
