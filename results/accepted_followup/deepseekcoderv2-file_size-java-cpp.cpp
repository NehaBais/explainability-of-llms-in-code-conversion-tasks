#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  // Check in the current working directory
  fs::path fileA("input.txt");
  if (fs::exists(fileA)) {
    std::cout << "Size of input.txt: " << fs::file_size(fileA) << " B"
              << std::endl;
  } else {
    std::cerr
        << "File input.txt does not exist in the current working directory."
        << std::endl;
  }

  // Check at the root of the file system
  fs::path fileB("/input.txt");
  if (fs::exists(fileB)) {
    std::cout << "Size of input.txt: " << fs::file_size(fileB) << " B"
              << std::endl;
  } else {
    std::cerr << "File input.txt does not exist at the root of the file system."
              << std::endl;
  }

  return 0;
}