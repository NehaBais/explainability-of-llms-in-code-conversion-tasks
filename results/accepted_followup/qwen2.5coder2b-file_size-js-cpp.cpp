#include <filesystem>
#include <iostream>

int main() {
  std::filesystem::path file1 = "input.txt";
  std::filesystem::path rootFile = "/c:/input.txt";

  if (std::filesystem::exists(file1)) {
    std::cout << "File size: " << std::filesystem::file_size(file1) << " bytes"
              << std::endl;
  } else {
    std::cerr << "Error: File not found." << std::endl;
  }

  if (std::filesystem::exists(rootFile)) {
    std::cout << "Root file size: " << std::filesystem::file_size(rootFile)
              << " bytes" << std::endl;
  } else {
    std::cerr << "Error: Root file not found." << std::endl;
  }

  return 0;
}