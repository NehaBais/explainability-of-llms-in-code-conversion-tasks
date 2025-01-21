#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  try {
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");
    fs::rename("/input.txt", "/output.txt");
    fs::rename("/docs", "/mydocs");
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "File move error: " << e.what() << '\n';
  }

  return 0;
}