#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  struct stat foo;
  if (stat("input.txt", &foo) != 0) {
    std::cerr << "Error: file does not exist or access denied";
    return -1;
  }
  std::cout << "Size of input.txt is: " << foo.st_size << std::endl;

  if (stat("/input.txt", &foo) != 0) {
    std::cerr << "Error: file does not exist or access denied";
    return -1;
  }
  std::cout << "Size of /input.txt is: " << foo.st_size << std::endl;

  return 0;
}