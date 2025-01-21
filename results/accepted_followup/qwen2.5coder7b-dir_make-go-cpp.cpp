#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void createDirectory(const std::string &path) {
  try {
    fs::create_directories(path);
    std::cout << "Directory created successfully: " << path << std::endl;
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  std::string path = "/tmp/some/path/to/dir";
  createDirectory(path);
  return 0;
}