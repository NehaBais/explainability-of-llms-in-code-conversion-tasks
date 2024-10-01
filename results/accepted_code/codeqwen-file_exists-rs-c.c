#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
  char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
  struct stat info;

  for (int i = 0; i < 4; i++) {
    if (stat(files[i], &info) == 0) {
      if (S_ISDIR(info.st_mode)) {
        printf("%s is a directory\n", files[i]);
      } else if (S_ISREG(info.st_mode)) {
        printf("%s Is a file\n", files[i]);
      }
    } else {
      perror(files[i]);
    }
  }
  return 0;
}