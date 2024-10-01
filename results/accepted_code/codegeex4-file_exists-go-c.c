#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

void printStat(const char *path) {
  struct stat info;

  if (stat(path, &info) == -1) {
    perror(path);
    return;
  }

  if (S_ISDIR(info.st_mode)) {
    printf("%s is a directory\n", path);
  } else if (S_ISREG(info.st_mode)) {
    printf("%s is a file\n", path);
  } else {
    printf("%s: unknown type\n", path);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return 0;
}