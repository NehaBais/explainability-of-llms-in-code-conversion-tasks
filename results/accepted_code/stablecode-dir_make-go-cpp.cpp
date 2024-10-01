#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void createDirectories(const std::string &path) {
  try {
    fs::create_directories(path);
    std::cout << "Directories created successfully.\n";
  } catch (fs::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }
}

int main() {
  createDirectories("/tmp/some/path/to/dir");

  return 0;
}