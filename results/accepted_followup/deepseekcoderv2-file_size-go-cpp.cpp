#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

void printFileSize(const std::string &filename) {
  try {
    auto path = std::filesystem::path(filename);
    if (std::filesystem::exists(path)) {
      auto size = std::filesystem::file_size(path);
      std::cout << size << std::endl;
    } else {
      std::cerr << "File does not exist: " << filename << std::endl;
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}