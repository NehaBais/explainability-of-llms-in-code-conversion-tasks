#include <fstream>
#include <iostream>

int main() {
  std::ifstream inputFile1(
      "input.txt",
      std::ios::binary); // Open file in binary mode to get its size
  if (inputFile1) {
    inputFile1.seekg(0, std::ios::end); // Jump to end of file
    int size =
        inputFile1
            .tellg(); // Get position in file which gives the length i.e. size
    std::cout << "Size of 'input.txt' is: " << size << " bytes.\n";
  } else {
    std::cout << "Unable to open 'input.txt'\n";
  }

  // To get the size of a file in root directory, we need an absolute path which
  // depends on OS and can't be generalized for all cases. For example:
#ifdef _WIN32 // Windows platform specific code
  std::ifstream inputFile2("C:\\input.txt", std::ios::binary);
#else // Unix/Linux platform specific code - depends on how your system is
      // setup, and assuming 'input.txt' resides at the root directory('/')
  std::ifstream inputFile2("/input.txt", std::ios::binary);
#endif

  if (inputFile2) {
    inputFile2.seekg(0, std::ios::end);
    int size = inputFile2.tellg();
    std::cout << "Size of '/input.txt' is: " << size << " bytes.\n";
  } else {
    std::cout << "Unable to open '/input.txt'\n";
  }

  return 0;
}