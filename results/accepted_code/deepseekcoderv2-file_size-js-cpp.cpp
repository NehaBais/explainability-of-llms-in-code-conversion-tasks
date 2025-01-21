#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream file1("input.txt", std::ios::binary | std::ios::in);
  if (file1) {
    file1.seekg(0, std::ios::end);
    std::cout << "Size of input.txt: " << file1.tellg() << " bytes"
              << std::endl;
  } else {
    std::cerr << "Failed to open input.txt" << std::endl;
  }

  std::ifstream file2("C:/input.txt", std::ios::binary | std::ios::in);
  if (file2) {
    file2.seekg(0, std::ios::end);
    std::cout << "Size of C:/input.txt: " << file2.tellg() << " bytes"
              << std::endl;
  } else {
    std::cerr << "Failed to open C:/input.txt" << std::endl;
  }

  return 0;
}