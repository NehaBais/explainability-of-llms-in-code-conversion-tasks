 The error is due to the fact that 'argc' has not been declared anywhere in the code. It should be replaced with 'argv'. This change will fix the error.

Here's how the corrected code would look:
```c
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int create_dir(const char *path) {
  if (mkdir(path, 0755) == -1) {
    if (errno != EEXIST) { // If the error isn't "already exists" then print an
                           // error message.
      perror("Couldn't create directory: ");
      return -1;
    }
  }

  char *last_sep = strrchr(path, '/');
  if (last_sep) { // There is a parent path in the path. Try to create it
                  // recursively.
    if (create_dir(path))
      return -1;
  }

  return 0; // Directory successfully created or already exists.
}

int main(void) {
  char *argv[] = {"./path/to/dir", NULL};

  if (argc != 2) {
    printf("usage: mkdir <path>\n");
    return -1;
  }

  create_dir(argv[1]);
}
```
Here argv is an array of pointers to strings which are the command line arguments. In this case, there's only one argument that we want to pass in and it is "./path/to/dir".
