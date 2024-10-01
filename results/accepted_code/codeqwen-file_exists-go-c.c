#include <stdio.h>
#include <sys/stat.h>

void printStat(char *p) {
  struct stat i;
  if (stat(p, &i) != 0) {
    perror("Error");
  } else if (S_ISDIR(i.st_mode)) {
    printf("%s is a directory\n", p);
  } else {
    printf("%s Is a file\n", p);
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return 0;
}