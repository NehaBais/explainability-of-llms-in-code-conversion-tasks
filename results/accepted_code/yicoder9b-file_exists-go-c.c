#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void printStat(char *p) {
  struct stat st;

  if (stat(p, &st) == 0) {
    if ((st.st_mode & S_IFMT) == S_IFDIR) {
      printf("%s is a directory\n", p);
    } else if ((st.st_mode & S_IFMT) == S_IFREG) {
      printf("%s is a file\n", p);
    }
  } else {
    perror(p); // Print the error message if stat() fails
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return 0;
}