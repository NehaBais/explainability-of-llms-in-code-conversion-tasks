#include <iostream>
#include <sys/stat.h>

int main(void) {
  struct stat foo;

  if (stat("input.txt", &foo) == 0) {
    std::cout << foo.st_size << std::endl;
  } else {
    std::cerr << "Error getting size of input.txt in current directory"
              << std::endl;
  }

  if (stat("/input.txt", &foo) == 0) {
    std::cout << foo.st_size << std::endl;
  } else {
    std::cerr << "Error getting size of /input.txt in file system root"
              << std::endl;
  }

  return 0;
}