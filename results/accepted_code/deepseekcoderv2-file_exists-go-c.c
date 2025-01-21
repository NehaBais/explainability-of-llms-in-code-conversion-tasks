#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void printStat(const char *path) {
  struct stat fileStat;
  if (stat(path, &fileStat) == -1) {
    perror("Error");
    return;
  }

  if (S_ISDIR(fileStat.st_mode)) {
    printf("%s is a directory\n", path);
  } else if (S_ISREG(fileStat.st_mode)) {
    printf("%s is a file\n", path);
  } else {
    printf("%s is of an unknown type\n", path);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}