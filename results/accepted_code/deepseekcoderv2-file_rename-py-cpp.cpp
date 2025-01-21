#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    // In the current working directory
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");

    // In the filesystem root
    fs::rename(fs::path("/") / "input.txt", fs::path("/") / "output.txt");
    fs::rename(fs::path("/") / "docs", fs::path("/") / "mydocs");
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return 0;
}