#include <iostream>
#include <sys/stat.h>

int main() {
  struct stat buffer;

  // Checking "input.txt" at current working directory
  if (stat("input.txt", &buffer) == 0) {
    std::cout << "File 'input.txt' exists in the current working directory.\n";
  } else {
    std::cout << "File 'input.txt' does not exist in the current working "
                 "directory.\n";
  }

  // Checking "/input.txt" at root filesystem level
  if (stat("/input.txt", &buffer) == 0) {
    std::cout << "File '/input.txt' exists in the filesystem root directory.\n";
  } else {
    std::cout << "File '/input.txt' does not exist in the filesystem root "
                 "directory.\n";
  }

  // Checking 'docs' folder at current working directory level
  if (stat("docs", &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
    std::cout << "Directory 'docs' exists in the current working directory.\n";
  } else {
    std::cout << "Directory 'docs' does not exist in the current working "
                 "directory.\n";
  }

  // Checking '/docs' folder at root filesystem level
  if (stat("/docs", &buffer) == 0 && S_ISDIR(buffer.st_mode)) {
    std::cout << "Directory '/docs' exists in the filesystem root directory.\n";
  } else {
    std::cout << "Directory '/docs' does not exist in the filesystem root "
                 "directory.\n";
  }
  return 0;
}