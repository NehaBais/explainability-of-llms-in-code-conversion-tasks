#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Check input.txt for the current working directory
  if (fs::exists("input.txt") && fs::is_regular_file("input.txt")) {
    std::cout << "The file 'input.txt' exists and is a regular file.\n";
  }

  // Check input.txt for the root directory
  if (fs::exists("/input.txt") && fs::is_regular_file("/input.txt"))) {
    std::cout << "The file '/input.txt' exists and is a regular file.\n";
  }

  // Check if the 'docs' directory exists in the current working directory
  if (fs::exists("docs") && fs::is_directory("docs"))) {
    std::cout << "The directory 'docs' exists and is a directory.\n";
  }

  // Check if the 'docs' directory exists in the root directory
  if (fs::exists("/docs") && fs::is_directory("/docs"))) {
    std::cout << "The directory '/docs' exists and is a directory.\n";
  }

  return 0;
}