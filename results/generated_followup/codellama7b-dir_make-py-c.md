
The error occurred because the linker was unable to find the main function that is responsible for starting the program. The fix is to add an empty main function that calls the mkdirp function with a path argument, like this:
```c
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
  mkdirp("./path/to/dir");
  return 0;
}
```
