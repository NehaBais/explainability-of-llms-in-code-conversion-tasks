This error suggests that there are undefined symbols for the architecture (`arm64` in this case). This often happens when there are external libraries used in your program but they have not been compiled or linked with the correct architecture. 

The issue arises from missing `main()` function definition as a starting point in any C program. The compiler expects to find at least one main function before running anything.

This will make sure that the `main()` function is defined and ready for execution.

Here's your corrected code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int mkdir_p(const char *path, mode_t mode) {
  char *next = NULL;
  char *current = strdup(path);
  while ((next = strchr(current, '/')) != NULL) {
    *next = '\0';
    if (mkdir(current, mode) == -1)
      goto out;
    *next = '/';
    while (*++next)
      ;
  }
  if (mkdir(current, mode) == -1)
    goto out;
  return 0;
out:
  free(current);
  return -1;
}

int main() {
 return mkdir_p("/tmp/some/path/to/dir", 0770);
}
```
