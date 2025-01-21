#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void createDirectory(const std::string &path) {
  try {
    if (fs::create_directories(path)) {
      std::cout << "Path successfully created" << std::endl;
    } else {
      std::cout << "Directory already exists" << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  createDirectory("C:/parent/test");
  return 0;
}