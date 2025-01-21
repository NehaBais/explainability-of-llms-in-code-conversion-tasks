The error occurred because `struct stat` is not fully declared and `stat` function is not recognized.

To resolve this, include `<sys/stat.h>` header file and declare `struct stat`.

Here is the corrected code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void print_file_size(const char *filename) {
  struct stat buf;
  if (stat(filename, &buf) == 0) {
    printf("Size of file %s is %ld bytes\n", filename, buf.st_size);
  } else {
    perror("Error getting file size");
  }
}

int main() {
  print_file_size("input.txt");
  print_file_size("/input.txt");
}
```
