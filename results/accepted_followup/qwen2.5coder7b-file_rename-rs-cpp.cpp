#include <filesystem>
#include <iostream>

int main() {
  namespace fs = std::filesystem;

  try {
    // Rename files in the current working directory
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");

    // Rename files in the filesystem root
    fs::rename("/input.txt", "/output.txt");
    fs::rename("/docs", "/mydocs");
  } catch (const fs::filesystem_error &e) {
    std::cerr << "File move error: " << e.what() << '\n';
    return 1;
  }

  return 0;
}