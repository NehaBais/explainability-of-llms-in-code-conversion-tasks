#include <iostream>
#include <string>
#include <sys/stat.h>

void printStat(const std::string &p) {
  struct stat s;

  if (stat(p, &s))
    perror("stat");
  else if (S_ISDIR(s.st_mode))
    std::cout << p << " is a directory\n";
  else
    std::cout << p << " is a file\n";
}

int main() {
  printStat("input.txt");
  printStat("/input.txt");
  printStat("docs");
  printStat("/docs");

  return 0;
}