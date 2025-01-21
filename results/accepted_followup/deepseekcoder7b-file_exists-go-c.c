#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void printStat(char *path) {
  struct stat info;

  if (stat(path, &info) != 0) {
    switch (errno) {
    case ENOENT:
      printf("%s does not exist\n", path);
      break;
    default:
      perror("lstat");
    }
  } else if (S_ISDIR(info.st_mode)) {
    printf("%s is a directory\n", path);
  } else {
    printf("%s is a file\n", path);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return <｜begin▁of▁sentence｜ > 0;
}