#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

bool create_directory(const std::string &path) {
  try {
    if (!fs::create_directories(path)) {
      std::cerr << "Failed to create directory: " << path << std::endl;
      return false;
    }
    std::cout << "Directory created successfully: " << path << std::endl;
    return true;
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
    return false;
  }
}

int main() {
  try {
    std::string path = "./path/to/dir";
    create_directory(path);
  } catch (const std::exception &e) {
    std::cerr << "Exception occurred: " << e.what() << std::endl;
  }
  return 0;
}