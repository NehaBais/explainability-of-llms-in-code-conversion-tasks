Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  char err[] = "File move error";

  if (rename("input.txt", "output.txt") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("docs", "mydocs") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("/input.txt", "/output.txt") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }

  if (rename("/docs", "/mydocs") != 0) {
    perror(err);
    exit(EXIT_FAILURE);
  }
  
  return 0;
}
```

This code uses the `rename` function to move files and directories. If the function returns a non-zero value, it prints an error message using `perror` and then exits the program with a failure status.

Make sure to compile this C code on a system that supports POSIX API (like Linux or macOS). The `/` prefix is used for directory paths, which is specific to Unix-like systems. If you need to move files on Windows, you would have to use different functions and handle path formatting appropriately.
