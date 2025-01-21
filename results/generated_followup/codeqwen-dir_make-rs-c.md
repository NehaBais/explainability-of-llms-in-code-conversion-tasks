Error: Undeclared library function 'exit' with type 'void (int) __attribute__((noreturn))'. This is not declared by default, it needs to be included in stdlib.h.

Fix: Include the header `<stdlib.h>`.

Corrected code:
```c
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h> // Include this header to fix the error

void create_directory(const char *path) {
  int ret = mkdir(path, 0777);
  if (ret == -1 && errno != EEXIST) {
    fprintf(stderr, "Failed to create directory '%s': %s\n", path,
            strerror(errno));
    exit(EXIT_FAILURE); // Include exit and EXIT_FAILURE here
  }
}

int main() {
  create_directory("./path/to/dir");
  return 0;
}
```
