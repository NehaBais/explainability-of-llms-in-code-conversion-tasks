#include <cstdlib>
#include <iostream>
#include <sys/stat.h>

int main() {
  struct stat st;

  // Verify the size of a file called input.txt for a file in the current
  // working directory
  if (stat("input.txt", &st) == 0) {
    std::cout << "Size of input.txt: " << st.st_size << " B" << std::endl;
  } else {
    std::cerr << "Unable to get the size of input.txt" << std::endl;
  }

  // Verify the size of another file in the file system root, you would replace
  // /file.txt with your actual path
  if (stat("/file.txt", &st) == 0) {
    std::cout << "Size of /file.txt: " << st.st_size << " B" << std::endl;
  } else {
    std::cerr << "Unable to get the size of /file.txt" << std::endl;
  }

  return 0;
}