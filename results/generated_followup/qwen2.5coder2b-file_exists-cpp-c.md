The error indicates that the `getFileSize` function is not declared, `stat` is not declared, and there is no forward declaration of `struct stat`. The solution is to declare these functions at the top of the file.

```c
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

long getFileSize(const char *path);
void file_exists(const char *path);

int main() {
  file_exists("input.txt");
  file_exists("zero_length.txt");
  file_exists("docs/input.txt");
  file_exists("docs/zero_length.txt");
  return 0;
}

long getFileSize(const char *path) {
  struct stat st;
  if (stat(path, &st) != 0)
    return -1; // Error
  return st.st_size;
}
```
