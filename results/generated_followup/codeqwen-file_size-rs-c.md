Error: `errno` is an identifier provided by the standard library used to retrieve error codes, but it may not be defined when `stat` fails.

Fix: Include `<errno.h>`.

Corrected C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>

void exit_err(const char *msg, int code) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(code);
}

int main() {
  struct stat st;
  if (stat("input.txt", &st) == -1) {
    perror("Could not get metadata");
    exit_err("Failed to get size of file.txt", 2);
  } else if (stat("/input.txt", &st) == -1 && errno == ENOENT) {
    // File does not exist in root directory, try with absolute path
    char absolute_path[PATH_MAX];
    if (!realpath("/input.txt", absolute_path)) {
      perror("Failed to get absolute path of file");
      exit_err("Failed to get size of file.txt", 2);
    } else {
      if (stat(absolute_path, &st) == -1) {
        perror("Could not get metadata for absolute path");
        exit_err("Failed to get size of file.txt", 2);
      }
    }
  }

  printf("Size of file.txt is %ld bytes\n", (long)st.st_size);
  return 0;
}
```
