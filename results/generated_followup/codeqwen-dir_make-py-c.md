Error: Undeclared identifier 'errno'

Fix: Include `#include <errno.h>` header file.

Corrected Code:

```c
#include <sys/stat.h>
#include <errno.h> // This line is missing in the original code

int mkdirp(char *path) {
  mode_t mode = S_IRWXU | S_IRWXG | S_IROTH |
                S_IXOTH; 
  int result = mkdir(path, mode);
  if (result == 0 || errno == EEXIST) {
    return 0;
  } else {
    perror("mkdirp");
    return -1;
  }
}
```
