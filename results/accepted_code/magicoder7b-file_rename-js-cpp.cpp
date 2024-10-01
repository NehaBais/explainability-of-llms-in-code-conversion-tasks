#include <iostream>
#include <sys/types.h>
#include <unistd.h> // for rename() function

int main() {
  std::cout << "Renaming files and directories..." << std::endl;

  // in the current working directory
  if (rename("input.txt", "output.txt") != 0) {
    perror("Cannot rename input file");
    return -1;
  } else {
    std::cout << "Input file successfully renamed to output.txt." << std::endl;
  }

  // in the root directory
  if (rename("/input.txt", "/output.txt") != 0) {
    perror("Cannot rename input file in root directory");
    return -1;
  } else {
    std::cout
        << "Input file in root directory successfully renamed to output.txt."
        << std::endl;
  }

  // renaming directory here
  if (rename("docs", "mydocs") != 0) {
    perror("Cannot rename docs directory");
    return -1;
  } else {
    std::cout << "Docs directory successfully renamed to mydocs." << std::endl;
  }

  // renaming directory in root
  if (rename("/docs", "/mydocs") != 0) {
    perror("Cannot rename docs directory in root");
    return -1;
  } else {
    std::cout << "Docs directory in root successfully renamed to mydocs."
              << std::endl;
  }

  return 0;
}