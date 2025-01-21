#include <cstdlib>
#include <fcntl.h>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
  // Create an empty file called "output.txt" in the current working directory
  if (open("./output.txt", O_CREAT | O_TRUNC, 0666) == -1) {
    std::cerr << "Error creating file: ./output.txt\n";
    return EXIT_FAILURE;
  }

  // Create an empty directory called "docs" in the current working directory
  if (mkdir("./docs", 0777) == -1) {
    std::cerr << "Error creating directory: ./docs\n";
    return EXIT_FAILURE;
  }

  // Create an empty file called "output.txt" in the root directory
  if (open("/output.txt", O_CREAT | O_TRUNC, 0666) == -1) {
    std::cerr << "Error creating file: /output.txt\n";
    return EXIT_FAILURE;
  }

  // Create an empty directory called "docs" in the root directory
  if (mkdir("/docs", 0777) == -1) {
    std::cerr << "Error creating directory: /docs\n";
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}