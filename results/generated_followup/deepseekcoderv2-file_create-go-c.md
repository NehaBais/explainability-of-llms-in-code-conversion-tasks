 The errors are due to the use of `mkdir` and `getcwd` functions which are not declared in the provided C code. To fix these errors, include the necessary headers (`<unistd.h>` for `getcwd` and `<sys/stat.h>` or `<unistd.h>` for `mkdir`) and declare the functions properly.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  // Include this header for getcwd and mkdir
#include <sys/stat.h> // Include this header for mkdir

void createFile(const char *fn) {
  FILE *f = fopen(fn, "w");
  if (f == NULL) {
    perror("Error creating file");
    return;
  }
  printf("file %s created!\n", fn);
  fclose(f);
}

void createDir(const char *dn) {
  int status = mkdir(dn, 0666);
  if (status == -1) {
    perror("Error creating directory");
    return;
  }
  printf("directory %s created!\n", dn);
}

int main() {
  char path[256];

  // Current working directory
  getcwd(path, sizeof(path));
  strcat(path, "/input.txt");
  createFile(path);

  // Root directory
  strcpy(path, "/input.txt");
  createFile(path);

  // Current working directory
  getcwd(path, sizeof(path));
  strcat(path, "/docs");
  createDir(path);

  // Root directory
  strcpy(path, "/docs");
  createDir(path);

  return 0;
}
```
