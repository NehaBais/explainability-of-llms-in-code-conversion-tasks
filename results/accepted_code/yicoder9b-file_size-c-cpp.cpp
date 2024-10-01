#include <iostream>
#include <sys/stat.h>

int main(void) {
  struct stat st;

  if (stat("input.txt", &st) == 0) {
    std::cout << "Size of 'input.txt': " << st.st_size << std::endl;
  } else {
    std::cerr << "Unable to get the size of 'input.txt'" << std::endl;
  }

  if (stat("/input.txt", &st) == 0) {
    std::cout << "Size of '/input.txt': " << st.st_size << std::endl;
  } else {
    std::cerr << "Unable to get the size of '/input.txt'" << std::endl;
  }

  return 0;
}