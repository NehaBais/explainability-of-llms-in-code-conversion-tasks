#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void createFile(const std::string &fn) {
  try {
    std::ofstream file(fn, std::ios::binary | std::ios::out);
    if (!file.is_open()) {
      throw std::runtime_error("Failed to open file for writing");
    }
    std::cout << "file " << fn << " created!" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

void createDir(const std::string &dn) {
  try {
    if (!fs::create_directory(dn)) {
      throw std::runtime_error("Failed to create directory");
    }
    std::cout << "directory " << dn << " created!" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}

int main() {
  // Create file and directory in the current working directory
  createFile("output.txt");
  createDir("docs");

  // Create file and directory in the filesystem root
  fs::path rootPath = "/";
  createFile(rootPath / "input.txt");
  createDir(rootPath / "docs");

  return 0;
}