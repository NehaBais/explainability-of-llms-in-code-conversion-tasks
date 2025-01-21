#include <fstream>
#include <iostream>

int main() {
  std::ifstream inFile1("input.txt",
                        std::ifstream::ate | std::ifstream::binary);
  if (inFile1.is_open()) {
    std::streamsize size = inFile1.tellg();
    std::cout << "Size of 'input.txt' is: " << size << " bytes" << std::endl;
    inFile1.close();
  } else {
    std::cerr << "Error opening 'input.txt'" << std::endl;
  }

  std::ifstream inFile2("/input.txt",
                        std::ifstream::ate | std::ifstream::binary);
  if (inFile2.is_open()) {
    std::streamsize size = inFile2.tellg();
    std::cout << "Size of '/input.txt' is: " << size << " bytes" << std::endl;
    inFile2.close();
  } else {
    std::cerr << "Error opening '/input.txt'" << std::endl;
  }

  return 0;
}