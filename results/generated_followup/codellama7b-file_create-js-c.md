Error: "errno" is not declared.
Fix: Replace "errno" with "errorno".
Corrected code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  // Create empty file "output.txt" in current working directory and in
  // filesystem root
  FILE *file = fopen("output.txt", "w");
  if (file == NULL) {
    perror("fopen");
    return 1;
  }
  char buffer[0];
  int bytes_written = fwrite(buffer, sizeof(char), 0, file);
  if (bytes_written < 0) {
    perror("fwrite");
    fclose(file);
    return 1;
  }
  if (fclose(file)) {
    perror("fclose");
    return 1;
  }

  // Create empty directory "docs" in current working directory and in
  // filesystem root
  mkdir("docs", 0777);
  if (errorno) {
    perror("mkdir");
    return 1;
  }
  return 0;
}
```
