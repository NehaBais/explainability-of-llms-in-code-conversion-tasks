#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void printStat(char *p) {
  struct stat st;
  if (stat(p, &st) != 0) {
    printf("Error: %s\n", strerror(errno));
  } else if (S_ISDIR(st.st_mode)) {
    printf("%s is a directory.\n", p);
  } else {
    printf("%s is a file.\n", p);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}