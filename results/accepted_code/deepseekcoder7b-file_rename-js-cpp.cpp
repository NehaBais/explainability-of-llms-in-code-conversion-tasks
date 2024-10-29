#include <experimental/filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::experimental::filesystem;

int main() {
  // move file "input.txt" to "output.txt" in current directory and root
  // directory
  fs::rename("input.txt", "output.txt");
  fs::rename("/input.txt", "/output.txt");

  // move folder "docs" to "mydocs" in the current directory and root directory
  fs::rename("docs", "mydocs");
  fs::rename("/docs", "/mydocs");

  return 0;
}