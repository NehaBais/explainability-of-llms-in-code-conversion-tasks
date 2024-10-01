#include <iostream>
#include <sys/stat.h>

void printStat(const char *p) {
  struct stat info;

  if (stat(p, &info) != 0) {
    std::cout << "Cannot access " << p << std::endl;
  } else if (info.st_mode & S_IFDIR) {
    std::cout << p << " is a directory" << std::endl;
  } else {
    std::cout << p << " is a file" << std::endl;
  }
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");

  printStat("docs");
  printStat("/docs");

  return 0;
}