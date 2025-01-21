#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void printStat(const fs::path &p) {
  try {
    if (fs::exists(p)) {
      if (fs::is_regular_file(p)) {
        std::cout << p << " is a file" << std::endl;
      } else if (fs::is_directory(p)) {
        std::cout << p << " is a directory" << std::endl;
      }
    } else {
      std::cout << p << " does not exist" << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error: " << e.what() << std::endl;
  }
}

int main() {
  printStat(fs::path("input.txt"));
  printStat(fs::path("/input.txt"));
  printStat(fs::path("docs"));
  printStat(fs::path("/docs"));
  return 0;
}