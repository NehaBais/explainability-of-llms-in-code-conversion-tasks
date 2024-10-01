#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  struct stat foo;
  if (!stat("input.txt", &foo)) {
    std::cout << foo.st_size << "\n";
  } else if (!stat("/input.txt", &foo)) {
    std::cout << foo.st_size << "\n";
  } else {
    std::cerr << "File not found\n";
    return -1;
  }
  return 0;
}