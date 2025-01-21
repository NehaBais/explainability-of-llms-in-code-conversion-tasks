#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void MkdirAll(const std::string &path) {
  try {
    if (fs::create_directories(path)) {
      std::cout << "Directory created successfully: " << path << std::endl;
    } else {
      std::cout << "Directory already exists: " << path << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error occurred: " << e.what() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "General exception occurred: " << e.what() << std::endl;
  }
}

int main() {
  MkdirAll("/tmp/some/path/to/dir");
  return 0;
}