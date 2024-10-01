```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  // Create "output.txt" in the current working directory
  FILE* file = fopen("output.txt", "w");
  fclose(file);

  // Create "output.txt" in the filesystem root
  FILE* file_root = fopen("/output.txt", "w");
  fclose(file_root);

  // Create "docs" directory in the current working directory
  mkdir("docs", 0755);

  // Create "docs" directory in the filesystem root
  mkdir("/docs", 0755);

  return 0;
}
```
