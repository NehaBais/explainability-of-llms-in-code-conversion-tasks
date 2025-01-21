#include <fstream>
#include <iostream>

int main() {
  // Create a file object for "input.txt" in the current working directory
  std::ifstream fileA("input.txt");
  if (fileA) {
    fileA.seekg(0, std::ios::end);
    std::cout << ", " << fileA.tellg() << " B" << std::endl;
  } else {
    std::cerr << "File 'input.txt' not found in the current working directory."
              << std::endl;
  }
  fileA.close();

  // Create a file object for "/file.txt" in the root of the filesystem
  std::ifstream fileB("/file.txt");
  if (fileB) {
    fileB.seekg(0, std::ios::end);
    std::cout << ", " << fileB.tellg() << " B" << std::endl;
  } else {
    std::cerr << "File '/file.txt' not found in the filesystem root."
              << std::endl;
  }
  fileB.close();

  return 0;
}