The errors are due to missing header files. The fix is to include `<string.h>` and `<stdlib.h>` header files.

```c
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int mkdir_p(const char *path) {
  // ...
}

int main() {
  // ...
}
```
