#include <iostream>
#include <sys/stat.h>

void printStat(const char *path) {
  struct stat s;

  if (stat(path, &s) == 0) {
    if (s.st_mode & S_IFDIR) {
      std::cout << path << " is a directory" << std::endl;
    } else if (s.st_mode & S_IFREG) {
      std::cout << path << " is a file" << std::endl;
    } else {
      std::cout << path << " exists but it's not a regular file or directory"
                << std::endl;
    }
  } else {
    perror("stat() error\n");
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");
  return 0;
}