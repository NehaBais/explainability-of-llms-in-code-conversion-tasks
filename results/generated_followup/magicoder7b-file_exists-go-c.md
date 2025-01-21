 The error "call to undeclared library function 'strerror' with type 'char *(int)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]" occurs because the C compiler doesn't know about strerror function until it is actually used. This is a warning, but in this case the error continues and compilation fails.

The fix is to include <string.h> header file which declares strerror function. So, we need to include <string.h>.

Here is the corrected code:
```c
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void printStat(char *p) {
  struct stat st;
  if (stat(p, &st) != 0) {
    printf("Error: %s\n", strerror(errno));
  } else if (S_ISDIR(st.st_mode)) {
    printf("%s is a directory.\n", p);
  } else {
    printf("%s is a file.\n", p);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}
```
