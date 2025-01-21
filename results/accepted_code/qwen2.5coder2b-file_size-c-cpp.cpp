#include <iostream>
#include <sys/stat.h>

int main(void) {
  struct stat foo;
  if (stat("input.txt", &foo) != 0) {
    std::cerr << "Error: Failed to get size of 'input.txt'" << std::endl;
    return EXIT_FAILURE;
  }
  std::cout << "Size of 'input.txt': " << foo.st_size << " bytes" << std::endl;

  if (stat("/input.txt", &foo) != 0) {
    std::cerr << "Error: Failed to get size of '/input.txt'" << std::endl;
    return EXIT_FAILURE;
  }
  std::cout << "Size of '/input.txt': " << foo.st_size << " bytes" << std::endl;

  return 0;
}