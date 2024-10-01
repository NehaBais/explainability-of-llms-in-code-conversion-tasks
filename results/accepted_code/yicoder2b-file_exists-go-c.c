#include <stdio.h>
#include <stdlib.h>

void printStat(const char *p) {
  struct stat st;
  if (stat(p, &st) == 0) {
    if (S_ISDIR(st.st_mode)) {
      printf("%s is a directory\n", p);
    } else {
      printf("%s is a file\n", p);
    }
  } else {
    perror(p);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}