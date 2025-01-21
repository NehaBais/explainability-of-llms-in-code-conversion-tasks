#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int verifyFileExistence(const char *path) {
  struct stat file_stat;
  if (stat(path, &file_stat) == 0) {
    return 1; // File exists
  } else {
    return 0; // File does not exist
  }
}

void printStat(const char *path) {
  if (verifyFileExistence(path)) {
    printf("%s is a file\n", path);
  } else {
    printf("%s is a directory\n", path);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}