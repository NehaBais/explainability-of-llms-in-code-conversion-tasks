#include <fstream>
#include <iostream>
#include <sys/stat.h>

int main() {
  struct stat foo;

  // Check the size of "input.txt" in the current working directory
  if (stat("input.txt", &foo) == 0) {
    std::cout << "Size of input.txt: " << foo.st_size << " bytes" << std::endl;
  } else {
    perror("Error getting size of input.txt");
  }

  // Check the size of "/input.txt" in the file system root
  if (stat("/input.txt", &foo) == 0) {
    std::cout << "Size of /input.txt: " << foo.st_size << " bytes" << std::endl;
  } else {
    perror("Error getting size of /input.txt");
  }

  return 0;
}