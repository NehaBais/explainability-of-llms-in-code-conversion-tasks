#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Check for files and directories in the current working directory
  if (fs::exists(fs::path("docs/input.txt"))) {
    std::cout
        << "File 'docs/input.txt' exists in the current working directory."
        << std::endl;
  } else {
    std::cout << "File 'docs/input.txt' does not exist in the current working "
                 "directory."
              << std::endl;
  }

  if (fs::exists(fs::path("/docs/input.txt"))) {
    std::cout << "File '/docs/input.txt' exists in the filesystem root."
              << std::endl;
  } else {
    std::cout << "File '/docs/input.txt' does not exist in the filesystem root."
              << std::endl;
  }

  return 0;
}